// token.c
#include "token.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Check if a string is a number
static int is_number(const char* str) {
    if (*str == '-' || *str == '+') str++; // Allow leading + or -
    while (*str) {
        if (!isdigit((unsigned char)*str)) return 0;
        str++;
    }
    return 1;
}

// Reads and classifies the next token from stdin
token_t get_next_token(void) {
    static char buffer[1024];
    printf("> "); // Prompt for input
    if (!fgets(buffer, sizeof(buffer), stdin)) {
        return (token_t){.type = END_OF_INPUT, .text = NULL};
    }

    char* tokenStr = strtok(buffer, " \t\n");
    if (!tokenStr) {
        return (token_t){.type = UNKNOWN, .text = NULL};
    }

    token_t token;
    token.text = strdup(tokenStr);

    if (is_number(token.text)) {
        token.type = NUMBER;
    } else if (strchr("+-*/", *token.text) && strlen(token.text) == 1) {
        token.type = OPERATOR;
    } else if (strchr(":;", *token.text) && strlen(token.text) == 1) {
        token.type = SYMBOL;
    } else {
        token.type = WORD;
    }

    return token;
}

// Prints the given token
void print_token(const token_t token) {
    const char* typeName = "UNKNOWN";
    switch (token.type) {
        case NUMBER: typeName = "NUMBER"; break;
        case OPERATOR: typeName = "OPERATOR"; break;
        case SYMBOL: typeName = "SYMBOL"; break;
        case WORD: typeName = "WORD"; break;
        case END_OF_INPUT: typeName = "END_OF_INPUT"; break;
        default: break;
    }
    printf("%s: %s\n", typeName, token.text ? token.text : "NULL");
}

// Frees the allocated memory for a token
void free_token(token_t* token) {
    if (token->text) {
        free(token->text);
        token->text = NULL;
    }
}

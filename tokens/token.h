#ifndef TOKEN_H
#define TOKEN_H
#include <stdio.h>

typedef enum {
    NUMBER,
    OPERATOR,
    SYMBOL,
    WORD,
    END_OF_INPUT,
    UNKNOWN
} token_type_t;

typedef struct {
    token_type_t type;
    char* text; 
} token_t;

token_t get_next_token(void);
void print_token(token_t token);
void free_token(token_t* token);

#endif
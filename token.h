#ifndef TOKEN_H
#define TOKEN_H

typedef enum {
    TOKEN_NUMBER, 
    TOKEN_OPERATOR
    TOKEN_SYMBOL,
    TOKEN_WORD
} token_type_t;

typedef struct {
    token_type_t type;
    char* text; 
} token_t;

// declaration functions

token_t* create_token(token_type_t, const char* text);
void free_token(token_t* token);

#endif
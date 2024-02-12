# include "token.h"
# include <stdlib.h>
# include <string.h> 

// create a token function

token_t* create_token(token_type_t type, const char* text) {
    token_t* token = (token_t*)malloc(sizeof(token_t));
    if (token) {
        token->type = type;
        token->text = strdup(text); // copies the string
    }
    return token;
}

// free a token fucntion 

void free_token(token_t* token) {
    if (token) {
        free(token->text);
        free(token);
    }
}
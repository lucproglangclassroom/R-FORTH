# include "token.h"
# include <stdio.h>

int main() {
    token_t* myToken = create_token(TOKEN_NUMBER, "12345");
    if (myToken) {
        printf("Token Type: %d, Text: %s\n", myToken->type, myToken->text);
        free_token(myToken);
    }
    return 0;
}
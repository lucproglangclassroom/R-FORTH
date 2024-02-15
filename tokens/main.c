# include "token.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# define MAX_INPUT_LENGTH 256

int main() {
    char input[MAX_INPUT_LENGTH];
    printf("Enter a line of R-FORTH code: ");
    if (fgets(input, MAX_INPUT_LENGTH, stdin) != NULL) {
        input[strcspn(input, "\n")] = 0;

        char* tokenText = strtok(input, " ");
        while (tokenText != NULL) {
            token_t* token = create_token(TOKEN_H, tokenText);
            if (token) {
                printf("Token Type: %d, Text: %s\n", myToken->type, myToken->text);
                free_token(myToken);
            }
            tokenText = strtok(NULL, " ");        
        }
    }
    return 0;
}
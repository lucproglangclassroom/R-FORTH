#include "token.h"
#include <stdio.h>
#include <string.h> // Include for strcmp function

int main(void) {
    printf("R-FORTH Interpreter\n");
    printf("Enter commands (or 'QUIT' to exit):\n");

    while (1) {
        token_t token = get_next_token();
        
        if (token.type == END_OF_INPUT) {
            printf("\nEnd of input detected. Exiting...\n");
            break;
        }

        if (token.type == WORD && strcmp(token.text, "QUIT") == 0) {
            free_token(&token); // Clean up before exiting
            break; // Exit the loop
        }

        print_token(token);
        free_token(&token); // Free the dynamically allocated memory for token text
    }

    return 0;
}

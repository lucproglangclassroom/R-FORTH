# include "token.h"
# include <string.h>

int main() {
    printf("Enter R_Forth tokens (enter 'QUIT' to stop):\n");
    while (1) {
        printf("> "); // prompt for input 
        fflush(stdout); // ensure the prompt is displayed 

        token_t token = get_next_token(stdin);
        if (token.type == END_OF_INPUT || token.type == WORD && strcmp(token.txt, "QUIT") == 0) {
            free_token(&token); // clean up before exiting
            break; // exit loop if the input is QUIT 
        }

        print_token(token);
        free_token(&token); // clean up token text memory
    }
    return 0;
}
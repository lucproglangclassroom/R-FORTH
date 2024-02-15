// main.c
#include "token.h"

int main(void) {
    while (1) {
        token_t token = get_next_token();
        if (token.type == END_OF_INPUT) {
            free_token(&token);
            break; // Exit if no more input
        }

        print_token(token);
        free_token(&token);
    }
    return 0;
}

#include "monoalpha.h"

int main (int argc, char ** argv) {
    char * key = calloc(KEY_SIZE, sizeof(char));
    char * text = calloc(MAX_LEN, sizeof(char));
    char * cipher = calloc(MAX_LEN, sizeof(char));
    char * decrypted = calloc(MAX_LEN, sizeof(char));
    char mode = 0;

    if (argc > 1) {
        if (valid(argv[1][0])) {
            LOAD_KEY(key);
            mode = argv[1][0];
        }
    }

    switch (mode)
        {
        case 'e':
            printf("LET'S ENCRYPT !\n");
            READ_TEXT(text);
            E_MONO_ALPHA(key, text, cipher);
            printf("%s\n", cipher);
        break;
        case 'd':
            printf("LET'S DECRYPT !\n");
            D_MONO_ALPHA(key, cipher, decrypted);
            printf("%s\n", decrypted);
        break;
        default: break;
    }

    free(key);
    free(text);
    free(cipher);
    free(decrypted);

    return 0;
}
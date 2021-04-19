#include "monoalpha.h"

int valid (char state) {
    if (state != 'd' && state != 'e' && state != 'h') {
        printf("Invalid argument\n");
        return 0;
    }

    return 1;
}

void LOAD_KEY (char * key) {
    printf ("Key : ");
    if (!fscanf(stdin, "%s", key)) {
        LOAD_KEY(key);
    }
}

void READ_TEXT (char * text) {
    printf("Text : ");
    if (!scanf("%s", text)) {
        READ_TEXT(text);
    }
}

void E_MONO_ALPHA (char * key, char * text, char * cipher) {
    int i = 0;
    char c;

    for (c = *text; c != '\0'; c = *(text+i)) {
        cipher[i++] = key[c - 'a'];
    }
}

void D_MONO_ALPHA (char * key, char * cipher, char * decrypted) {
    int i = 0, indice, y;
    char c;

    for (c = *cipher; c != 0; c = *(cipher+i)) {
        for (y = 0; y < KEY_SIZE; y++) {
            if (key[y] == c) {
                indice = y;
                break;
            }
        }

        decrypted[i++] = indice + 'a';
    }
}
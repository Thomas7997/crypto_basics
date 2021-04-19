#ifndef __MONO_ALPHA_H__
#define __MONO_ALPHA_H__

// Libs

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Constants

#define KEY_SIZE 26
#define MAX_LEN 100

int valid (char state);
void LOAD_KEY (char * key); // read key
void READ_TEXT (char * text);
void D_MONO_ALPHA (char * key, char * text, char * cipher); // decrypt
void E_MONO_ALPHA (char * key, char * cipher, char * decrypted); // encrypt

#endif
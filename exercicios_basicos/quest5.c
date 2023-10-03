#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[] = "O EXERCICIO E FACIL";
    int contador[26] = {0}; 

    for (int i = 0; frase[i] != '\0'; i++) {
        char c = tolower(frase[i]); 
        
        if (isalpha(c)) {
            contador[c - 'a']++; 
        }
    }

    for (int i = 0; i < 28; i++) {
        if (contador[i] > 0) {
            printf("%c: %d\n", 'a' + i, contador[i]);
        }
    }

    return 0;
}

/* Leia uma string e remova todos os espaços em branco no início e no final. */

#include <stdio.h>
#include <string.h>

void removerEsquerda(char* string) {
    int i = 0;

    while (string[i] == ' ') {
        i++;
    }
    memmove(string, string + i, strlen(string) - i + 1);
}

void removerDireita(char* string) {
    int i = strlen(string) - 1;
    
    while (i >= 0 && string[i] == ' ') {
        i--;
    }
    string[i + 1] = '\0'; 
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    removerEsquerda(string);
    removerDireita(string);

    printf("String sem espacos em branco: '%s'\n", string);
}

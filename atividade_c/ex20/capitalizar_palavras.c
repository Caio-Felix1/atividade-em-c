#include <stdio.h>
#include <string.h>

void capitalizar_palavras(char *str) {
    int tamanho = strlen(str);

    for (int i = 0; i < tamanho; i++) {
        if (i == 0 && str[i] != ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z' && str[i - 1] == ' ') {
            str[i] = str[i] - 32;
        }
    }
}

int main() {
    char strings_para_testes[10][20] = {
        "ola mundo",
        "java programming",
        "hello world",
        "a b c",
        "teste",
        "programacao em c",
        "",
        "abc def ghi",
        "open ai",
        "estrutura de dados"
    };

    char resultado_esperado[10][20] = {
        "Ola Mundo",
        "Java Programming",
        "Hello World",
        "A B C",
        "Teste",
        "Programacao Em C",
        "",
        "Abc Def Ghi",
        "Open Ai",
        "Estrutura De Dados"
    };

    for (int i = 0; i < 10; i++) {
        printf("Teste %d:", (i+1));
        printf("\nEntrada: %s", strings_para_testes[i]);
        capitalizar_palavras(strings_para_testes[i]);
        printf("\nSaída esperada: %s", resultado_esperado[i]);
        printf("\nSaída: %s", strings_para_testes[i]);
        printf("\n-----------------------\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

void remover_espacos_extras(char *str) {
    int inicio = 0, fim = strlen(str) - 1, i = 0;

    if (strlen(str) == 0) {
        return;
    }

    while (str[inicio] == ' ' && str[inicio] != '\0') {
        inicio++;
    }

    if (str[inicio] == '\0') {
        str[1] = '\0';
        return;
    }

    while (inicio < fim && str[fim] == ' ') {
        fim--;
    }

    while (inicio <= fim) {
        str[i] = str[inicio];
        i++;
        inicio++;
    }

    str[i] = '\0';
}

int main() {
    char strings_para_testes[10][12] = {
        " ola mundo ",
        "ola mundo",
        "ola mundo",
        " teste",
        "teste ",
        "a b c",
        "",
        " ",
        "java c",
        "a b"
    };

    char resultado_esperado[10][10] = {
        "ola mundo",
        "ola mundo",
        "ola mundo",
        "teste",
        "teste",
        "a b c",
        "",
        " ",
        "java c",
        "a b",
    };

    for (int i = 0; i < 10; i++) {
        printf("Teste %d:", (i+1));
        printf("\nEntrada: \"%s\"", strings_para_testes[i]);
        remover_espacos_extras(strings_para_testes[i]);
        printf("\nSaída esperada: \"%s\"", resultado_esperado[i]);
        printf("\nSaída: \"%s\"", strings_para_testes[i]);
        printf("\n-----------------------\n");
    }

    return 0;
}
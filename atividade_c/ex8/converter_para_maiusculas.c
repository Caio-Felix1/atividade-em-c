#include <stdio.h>
#include <string.h>

void converter_para_maiusculas(char *str) {
    int tamanho = strlen(str);

    for (int i = 0; i < tamanho; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

int main() {
    char strings_para_testes[10][12] = {
        "abc",
        "Hello",
        "123abc",
        "teste",
        "ABC",
        "aBcD",
        "",
        "ola mundo",
        "java",
        "c123"
    };

    char resultado_esperado[10][10] = {
        "ABC",
        "HELLO",
        "123ABC",
        "TESTE",
        "ABC",
        "ABCD",
        "",
        "OLA MUNDO",
        "JAVA",
        "C123",
    };

    for (int i = 0; i < 10; i++) {
        printf("Teste %d:", (i+1));
        printf("\nEntrada: %s", strings_para_testes[i]);
        converter_para_maiusculas(strings_para_testes[i]);
        printf("\nSaída esperada: %s", resultado_esperado[i]);
        printf("\nSaída: %s", strings_para_testes[i]);
        printf("\n-----------------------\n");
    }

    return 0;
}
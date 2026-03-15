#include <stdio.h>
#include <string.h>

void inverter_string(char *str) {
    int tamanho = strlen(str);
    int i = 0, j = tamanho - 1;
    char auxiliar;

    while (j >= i) {
        auxiliar = str[i];
        str[i] = str[j];
        str[j] = auxiliar;
        i++;
        j--;
    }
}

int main() {
    char strings_para_testes[10][12] = {
        "abc",
        "hello",
        "a",
        "",
        "12345",
        "ab",
        "teste",
        "programa",
        "xyz",
        "abcd"
    };

    char resultado_esperado[10][10] = {
        "cba",
        "olleh",
        "a",
        "",
        "54321",
        "ba",
        "etset",
        "amargorp",
        "zyx",
        "dcba",
    };

    for (int i = 0; i < 10; i++) {
        printf("Teste %d:", (i+1));
        printf("\nEntrada: %s", strings_para_testes[i]);
        inverter_string(strings_para_testes[i]);
        printf("\nSaída esperada: %s", resultado_esperado[i]);
        printf("\nSaída: %s", strings_para_testes[i]);
        printf("\n-----------------------\n");
    }

    return 0;
}
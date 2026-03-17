#include <stdio.h>
#include <string.h>

int eh_numerico(const char *str) {
    int tamanho = strlen(str);
    int qtd_digitos = 0;

    for (int i = 0; i < tamanho; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            qtd_digitos++;
        }
    }

    if (qtd_digitos == tamanho) {
        return 1;
    }
    return 0;
}

int main() {
    int resultado;

    char strings_para_testes[10][10] = {
        "123",
        "00123",
        "abc",
        "123abc",
        "",
        "9",
        "12 3",
        "000",
        "a1",
        "4567"
    };

    int resultado_esperado[10] = {
        1,
        1,
        0,
        0,
        1,
        1,
        0,
        1,
        0,
        1
    };

    for (int i = 0; i < 10; i++) {
        printf("Teste %d:", (i+1));
        printf("\nEntrada: %s", strings_para_testes[i]);
        resultado = eh_numerico(strings_para_testes[i]);
        printf("\nSaída esperada: %d", resultado_esperado[i]);
        printf("\nSaída: %d", resultado);
        printf("\n-----------------------\n");
    }

    return 0;
}
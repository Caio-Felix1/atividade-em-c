#include <stdio.h>
#include <string.h>

int contar_digitos(const char *str) {
    int tamanho = strlen(str);
    int qtd_digitos = 0;

    for (int i = 0; i < tamanho; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            qtd_digitos++;
        }
    }

    return qtd_digitos;
}

int main() {
    int qtd_digitos;

    char strings_para_testes[10][10] = {
        "123",
        "abc",
        "a1b2c3",
        "000",
        "abc123",
        "",
        "1a2b3c4",
        "9",
        "teste1",
        "123abc456"
    };

    int resultado_esperado[10] = {
        3,
        0,
        3,
        3,
        3,
        0,
        4,
        1,
        1,
        6
    };

    for (int i = 0; i < 10; i++) {
        printf("Teste %d:", (i+1));
        printf("\nEntrada: %s", strings_para_testes[i]);
        qtd_digitos = contar_digitos(strings_para_testes[i]);
        printf("\nSaída esperada: %d", resultado_esperado[i]);
        printf("\nSaída: %d", qtd_digitos);
        printf("\n-----------------------\n");
    }

    return 0;
}
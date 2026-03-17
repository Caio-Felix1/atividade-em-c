#include <stdio.h>
#include <string.h>

int eh_alfabetico(const char *str) {
    int tamanho = strlen(str);
    int qtd_letras = 0;

    for (int i = 0; i < tamanho; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            qtd_letras++;
        }
    }

    if (qtd_letras == tamanho) {
        return 1;
    }
    return 0;
}

int main() {
    int resultado;

    char strings_para_testes[10][10] = {
        "abc",
        "ABC",
        "abc123",
        "123",
        "hello",
        "ola mundo",
        "",
        "Java",
        "C99",
        "teste!"
    };

    int resultado_esperado[10] = {
        1,
        1,
        0,
        0,
        1,
        0,
        1,
        1,
        0,
        0
    };

    for (int i = 0; i < 10; i++) {
        printf("Teste %d:", (i+1));
        printf("\nEntrada: %s", strings_para_testes[i]);
        resultado = eh_alfabetico(strings_para_testes[i]);
        printf("\nSaída esperada: %d", resultado_esperado[i]);
        printf("\nSaída: %d", resultado);
        printf("\n-----------------------\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int contar_letras_maiusculas(const char *str) {
    int tamanho = strlen(str);
    int qtd_letras_maiusculas = 0;

    for (int i = 0; i < tamanho; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            qtd_letras_maiusculas++;
        }
    }

    return qtd_letras_maiusculas;
}

int main() {
    int qtd_letras_maiusculas;

    char strings_para_testes[10][15] = {
        "",
        "abc",
        "ABC",
        "AbC",
        "Hello World",
        "123ABC",
        "programacao",
        "TESTE",
        "JavaScript",
        "!@#A"
    };

    int resultado_esperado[10] = {
        0,
        0,
        3,
        2,
        2,
        3,
        0,
        5,
        2,
        1
    };

    for (int i = 0; i < 10; i++) {
        printf("Teste %d:", (i+1));
        printf("\nEntrada: %s", strings_para_testes[i]);
        qtd_letras_maiusculas = contar_letras_maiusculas(strings_para_testes[i]);
        printf("\nSaída esperada: %d", resultado_esperado[i]);
        printf("\nSaída: %d", qtd_letras_maiusculas);
        printf("\n-----------------------\n");
    }

    return 0;
}
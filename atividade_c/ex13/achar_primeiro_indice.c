#include <stdio.h>
#include <string.h>

int primeiro_indice(const char *str, char c) {
    int tamanho = strlen(str);

    for (int i = 0; i < tamanho; i++) {
        if (str[i] == c) {
            return i;
        }
    }

    return -1;
}

int main() {
    int indice;

    char strings_para_testes[10][10] = {
        "banana",
        "banana",
        "banana",
        "banana",
        "",
        "abc",
        "hello",
        "aaaa",
        "teste",
        "xyz"
    };

    char caracteres_para_serem_buscados[10][2] = {
        "a",
        "b",
        "n",
        "x",
        "a",
        "c",
        "l",
        "a",
        "t",
        "z"
    };

    int resultado_esperado[10] = {
        1,
        0,
        2,
        -1,
        -1,
        2,
        2,
        0,
        0,
        2
    };

    for (int i = 0; i < 10; i++) {
        printf("Teste %d:", (i+1));
        printf("\nEntrada: %s", strings_para_testes[i]);
        printf("\nCaractere para achar o primeiro índice: %c", caracteres_para_serem_buscados[i][0]);
        indice = primeiro_indice(strings_para_testes[i], caracteres_para_serem_buscados[i][0]);
        printf("\nSaída esperada: %d", resultado_esperado[i]);
        printf("\nSaída: %d", indice);
        printf("\n-----------------------\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int contar_palavras(const char *str) {
    int tamanho = strlen(str);
    int qtd_letras_consecutivas = 0;
    int qtd_palavras = 0;

    for (int i = 0; i < tamanho; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            qtd_letras_consecutivas++;
        }
        else {
            if (qtd_letras_consecutivas > 0) {
                qtd_palavras++;
            }
            qtd_letras_consecutivas = 0;
        }
    }

    if (qtd_letras_consecutivas > 0) {
        qtd_palavras++;
    }

    return qtd_palavras;
}

int main() {
    int qtd_palavras;

    char strings_para_testes[10][15] = {
        "",
        "ola",
        "ola mundo",
        "ola mundo",
        " ola mundo ",
        "um dois tres",
        "a b c d",
        "palavra",
        "linha1\nlinha2",
        "a\tb\tc"
    };

    int resultado_esperado[10] = {
        0,
        1,
        2,
        2,
        2,
        3,
        4,
        1,
        2,
        3
    };

    for (int i = 0; i < 10; i++) {
        printf("Teste %d:", (i+1));
        printf("\nEntrada: %s", strings_para_testes[i]);
        qtd_palavras = contar_palavras(strings_para_testes[i]);
        printf("\nSaída esperada: %d", resultado_esperado[i]);
        printf("\nSaída: %d", qtd_palavras);
        printf("\n-----------------------\n");
    }

    return 0;
}
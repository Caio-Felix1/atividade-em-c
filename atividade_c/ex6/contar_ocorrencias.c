#include <stdio.h>
#include <string.h>

int contar_ocorrencias(const char *str, char c) {
    int tamanho = strlen(str);
    int qtd_ocorrencias = 0;

    for (int i = 0; i < tamanho; i++) {
        if (str[i] == c) {
            qtd_ocorrencias++;
        }
    }

    return qtd_ocorrencias;
}

int main() {
    int qtd_ocorrencias;

    char strings_para_testes[10][10] = {
        "banana",
        "banana",
        "banana",
        "",
        "aaaaa",
        "Casa",
        "Hello",
        "123123",
        "test",
        "ABC"
    };

    char caracteres_para_serem_contados[10] = {
        'a',
        'b',
        'x',
        'a',
        'a',
        'a',
        'l',
        '1',
        't',
        'a',
    };

    int resultado_esperado[10] = {
        3,
        1,
        0,
        0,
        5,
        2,
        2,
        2,
        2,
        0
    };

    for (int i = 0; i < 10; i++) {
        printf("Teste %d:", (i+1));
        printf("\nEntrada: %s", strings_para_testes[i]);
        printf("\nCaractere que vai ser contado as ocorrências: %c", caracteres_para_serem_contados[i]);
        qtd_ocorrencias = contar_ocorrencias(strings_para_testes[i], caracteres_para_serem_contados[i]);
        printf("\nSaída esperada: %d", resultado_esperado[i]);
        printf("\nSaída: %d", qtd_ocorrencias);
        printf("\n-----------------------\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int contar_vogais(const char *str) {
    int tamanho = strlen(str);
    char vogais[11] = "AEIOUaeiou";
    int qtd_vogais = 0;

    for (int i = 0; i < tamanho; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            for (int j = 0; j < 10; j++) {
                if (str[i] == vogais[j]) {
                    qtd_vogais++;
                    break;
                }
            }
        }
    }

    return qtd_vogais;
}

int main() {
    int qtd_vogais;

    char strings_para_testes[10][15] = {
        "",
        "a",
        "abc",
        "AEIOU",
        "xyz",
        "Casa",
        "Programacao",
        "HELLO",
        "12345",
        "a e i o u"
    };

    int resultado_esperado[10] = {
        0,
        1,
        1,
        5,
        0,
        2,
        5,
        2,
        0,
        5
    };

    for (int i = 0; i < 10; i++) {
        printf("Teste %d:", (i+1));
        printf("\nEntrada: %s", strings_para_testes[i]);
        qtd_vogais = contar_vogais(strings_para_testes[i]);
        printf("\nSaída esperada: %d", resultado_esperado[i]);
        printf("\nSaída: %d", qtd_vogais);
        printf("\n-----------------------\n");
    }

    return 0;
}
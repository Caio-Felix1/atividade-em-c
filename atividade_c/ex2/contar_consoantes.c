#include <stdio.h>
#include <string.h>

int contar_consoantes(const char *str) {
    int tamanho = strlen(str);
    char vogais[11] = "AEIOUaeiou";
    int qtd_consoantes = 0, eh_vogal = 0;

    for (int i = 0; i < tamanho; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            for (int j = 0; j < 10; j++) {
                if (str[i] == vogais[j]) {
                    eh_vogal = 1;
                    break;
                }
            }
            if (eh_vogal == 0) {
                qtd_consoantes++;
            }
        }
        eh_vogal = 0;
    }

    return qtd_consoantes;
}

int main() {
    int qtd_consoantes;

    char strings_para_testes[10][15] = {
        "",
        "abc",
        "aeiou",
        "xyz",
        "Casa",
        "HELLO",
        "123abc",
        "programacao",
        "A B C",
        "!!!"
    };

    int resultado_esperado[10] = {
        0,
        2,
        0,
        3,
        2,
        3,
        2,
        6,
        2,
        0
    };

    for (int i = 0; i < 10; i++) {
        printf("Teste %d:", (i+1));
        printf("\nEntrada: %s", strings_para_testes[i]);
        qtd_consoantes = contar_consoantes(strings_para_testes[i]);
        printf("\nSaída esperada: %d", resultado_esperado[i]);
        printf("\nSaída: %d", qtd_consoantes);
        printf("\n-----------------------\n");
    }

    return 0;
}
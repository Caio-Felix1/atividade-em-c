#include <stdio.h>
#include <string.h>

void substituir_caractere(char *str, char antigo, char novo) {
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho; i++) {
        if (str[i] == antigo) {
            str[i] = novo;
        }
    }
}

int main() {
    char strings_para_testes[10][10] = {
        "banana",
        "teste",
        "abc",
        "aaaa",
        "hello",
        "",
        "1231",
        "casa",
        "java",
        "abc"
    };

    char caracteres_antigos_e_novos[10][3] = {
        "ao",
        "ei",
        "xy",
        "ab",
        "lx",
        "ab",
        "19",
        "ae",
        "jJ",
        "cd"
    };

    char resultado_esperado[10][10] = {
        "bonono",
        "tisti",
        "abc",
        "bbbb",
        "hexxo",
        "",
        "9239",
        "cese",
        "Java",
        "abd"
    };

    for (int i = 0; i < 10; i++) {
        printf("Teste %d:", (i+1));
        printf("\nEntrada: %s", strings_para_testes[i]);
        printf("\nCaractere antigo: %c", caracteres_antigos_e_novos[i][0]);
        printf("\nCaractere novo: %c", caracteres_antigos_e_novos[i][1]);
        substituir_caractere(strings_para_testes[i], caracteres_antigos_e_novos[i][0], caracteres_antigos_e_novos[i][1]);
        printf("\nSaída esperada: %s", resultado_esperado[i]);
        printf("\nSaída: %s", strings_para_testes[i]);
        printf("\n-----------------------\n");
    }

    return 0;
}
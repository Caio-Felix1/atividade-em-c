#include <stdio.h>
#include <string.h>

int eh_palindromo(const char *str) {
    int tamanho = strlen(str);
    int i = 0, j = tamanho - 1;
    char caractere_esquerda, caractere_direita;
    int eh_espaco = 0;
    
    while (j >= i) {
        caractere_esquerda = str[i];
        caractere_direita = str[j];
        
        if (caractere_esquerda == ' ') {
            i++;
            eh_espaco = 1;
        }
        if (caractere_direita == ' ') {
            j--;
            eh_espaco = 1;
        }
        if (eh_espaco == 1) {
            eh_espaco = 0;
            continue;
        }
    
        if (caractere_esquerda >= 'A' && caractere_esquerda <= 'Z') {
            caractere_esquerda = caractere_esquerda + 32;
        }
        if (caractere_direita >= 'A' && caractere_direita <= 'Z') {
            caractere_direita = caractere_direita + 32;
        }

        if (caractere_esquerda != caractere_direita) {
            return 0;
        }

        i++;
        j--;
    }

    return 1;
}

int main() {
    int resultado;

    char strings_para_testes[10][50] = {
        "ovo",
        "arara",
        "casa",
        "Ame a ema",
        "Socorram me subi no onibus em Marrocos",
        "abcba",
        "abcd",
        "",
        "a",
        "Roma me tem amor"
    };

    int resultado_esperado[10] = {
        1,
        1,
        0,
        1,
        1,
        1,
        0,
        1,
        1,
        1
    };

    for (int i = 0; i < 10; i++) {
        printf("Teste %d:", (i+1));
        printf("\nEntrada: %s", strings_para_testes[i]);
        resultado = eh_palindromo(strings_para_testes[i]);
        printf("\nSaída esperada: %d", resultado_esperado[i]);
        printf("\nSaída: %d", resultado);
        printf("\n-----------------------\n");
    }

    return 0;
}
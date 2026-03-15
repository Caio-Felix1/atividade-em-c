#include <stdio.h>
#include <string.h>

int eh_anagrama(const char *a, const char *b) {
    int tamanho_A = strlen(a);
    char copia_B[strlen(b) + 1];
    char caractere_atual;
    int trocou_valor;

    if (tamanho_A != strlen(b)) {
        return 0;
    }

    strcpy(copia_B, b);
    
    for (int i = 0; i < tamanho_A; i++) {
        trocou_valor = 0;
        caractere_atual = a[i];
        
        for (int j = 0; j < tamanho_A; j++) {
            if (copia_B[j] == caractere_atual) {
                copia_B[j] = ' ';
                trocou_valor = 1;
                break;
            }
        }
        
        if (trocou_valor == 0) {
            return 0;
        }
    }

    for (int i = 0; i < tamanho_A; i++) {
        if (copia_B[i] != ' ') {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int valor;

    char entrada_A[10][10] = {
        "amor",
        "listen",
        "abc",
        "abc",
        "hello",
        "roma",
        "teste",
        "anagrama",
        "abc",
        "rat"
    };

    char entrada_B[10][10] = {
        "roma",
        "silent",
        "cab",
        "abcd",
        "world",
        "amor",
        "sete",
        "amaragan",
        "def",
        "tar"
    };

    int resultado_esperado[10] = {
        1,
        1,
        1,
        0,
        0,
        1,
        0,
        1,
        0,
        1
    };

    for (int i = 0; i < 10; i++) {
        printf("Teste %d:", (i+1));
        printf("\nEntrada A: %s", entrada_A[i]);
        printf("\nEntrada B: %s", entrada_B[i]);
        valor = eh_anagrama(entrada_A[i], entrada_B[i]);
        printf("\nSaída esperada: %d", resultado_esperado[i]);
        printf("\nSaída: %d", valor);
        printf("\n-----------------------\n");
    }

    return 0;
}
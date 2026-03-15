#include <stdio.h>
#include <string.h>

void extrair_iniciais(char *destino, const char *nome_completo) {
    int tamanho = strlen(nome_completo);
    int indice_destino = 0;
    char caractere_atual;

    for (int i = 0; i < tamanho; i++) {
        caractere_atual = nome_completo[i];

        if (i == 0 && (caractere_atual >= 'A' && caractere_atual <= 'Z' || caractere_atual >= 'a' && caractere_atual <= 'z')) {
            if (caractere_atual > 'Z') {
                caractere_atual = caractere_atual - 32;
            }
            destino[indice_destino] = caractere_atual;
            indice_destino++;
        }
        else if ((caractere_atual >= 'A' && caractere_atual <= 'Z' || caractere_atual >= 'a' && caractere_atual <= 'z') && nome_completo[i - 1] == ' ') {
            if (caractere_atual > 'Z') {
                caractere_atual = caractere_atual - 32;
            }
            destino[indice_destino] = caractere_atual;
            indice_destino++;
        }
    }

    destino[indice_destino] = '\0';
}

int main() {
    char iniciais[4];

    char strings_para_testes[10][20] = {
        "Maria Silva",
        "Joao da Silva",
        "Ana",
        "Pedro Paulo Souza",
        "Carlos Alberto",
        "Luiz Inacio Lula",
        "Maria",
        "Jose da Costa",
        "Ana Beatriz Costa",
        "Paulo Roberto"
    };

    char resultado_esperado[10][4] = {
        "MS",
        "JDS",
        "A",
        "PPS",
        "CA",
        "LIL",
        "M",
        "JDC",
        "ABC",
        "PR"
    };

    for (int i = 0; i < 10; i++) {
        printf("Teste %d:", (i+1));
        printf("\nEntrada: %s", strings_para_testes[i]);
        extrair_iniciais(iniciais, strings_para_testes[i]);
        printf("\nSaída esperada: %s", resultado_esperado[i]);
        printf("\nSaída: %s", iniciais);
        printf("\n-----------------------\n");
    }

    return 0;
}
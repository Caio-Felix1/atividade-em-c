#include <stdio.h>
#include <string.h>

int contar_substring(const char *texto, const char *busca) {
    int tamanho_texto = strlen(texto);
    int tamanho_busca = strlen(busca);
    int indice_substring = 0, qtd_substrings = 0, i = 0;
    
    if (tamanho_texto < tamanho_busca) {
        return 0;
    }

    while (i < tamanho_texto) {
        if (texto[i] == busca[indice_substring]) {
            indice_substring++;
            
            if (indice_substring == tamanho_busca) {
                qtd_substrings++;
                indice_substring = 0;
            }
        }
        else {
            i = i - indice_substring;
            indice_substring = 0;
        }
        i++;
    }

    return qtd_substrings;
}

int main() {
    int qtd_substrings;

    char strings_para_testes[10][12] = {
        "banana",
        "aaaa",
        "abcabcabc",
        "hello world",
        "teste",
        "ababab",
        "aaaaa",
        "casa casa",
        "programacao",
        "abcdef"
    };

    char substrings_para_buscar[10][10] = {
        "na",
        "aa",
        "abc",
        "world",
        "x",
        "ab",
        "aaa",
        "casa",
        "pro",
        "gh",
    };

    int resultado_esperado[10] = {
        2,
        2,
        3,
        1,
        0,
        3,
        1,
        2,
        1,
        0
    };

    for (int i = 0; i < 10; i++) {
        printf("Teste %d:", (i+1));
        printf("\nEntrada: %s", strings_para_testes[i]);
        printf("\nSubstring que vai ser buscada: %s", substrings_para_buscar[i]);
        qtd_substrings = contar_substring(strings_para_testes[i], substrings_para_buscar[i]);
        printf("\nSaída esperada: %d", resultado_esperado[i]);
        printf("\nSaída: %d", qtd_substrings);
        printf("\n-----------------------\n");
    }

    return 0;
}
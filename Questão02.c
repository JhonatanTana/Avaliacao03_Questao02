#include <stdio.h>

int main() {
    int tamanho;
    int matriz[tamanho][tamanho];
    int somatoriaprincipal = 0;
    int somatoriasecundaria = 0;

    printf("Qual o tamanho da matriz quadrada: ");
    scanf("%d", &tamanho);

    printf("Quais os elementos da matriz:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < tamanho; i++) {
        somatoriaprincipal += matriz[i][i];
    }

    for (int i = 0; i < tamanho; i++) {
        somatoriasecundaria += matriz[i][tamanho - 1 - i];
    }

    printf("Somatória da Diagonal Principal: %d\n", somatoriaprincipal);
    printf("Somatória da Diagonal Secundária: %d\n", somatoriasecundaria);

    return 0;
}
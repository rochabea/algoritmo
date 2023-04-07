#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int mat[4][4]= {{45, 32, 83, 95},
                    {26, 14, 37, 42},
                    {40, 43, 65, 77},
                    {74, 79, 48, 55}};
    int l, c, soma;

    for(l=0; l<4; l++){
        for(c=0; c<4; c++){
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }

    soma = mat[2][0] + mat[2][1] + mat[2][2] + mat[2][3];
    printf("O valor da soma e %d", soma);
}
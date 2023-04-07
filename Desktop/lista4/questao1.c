#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int matriz[4][4]={{45, 32, 83, 95},
                    {26, 14, 37, 42},
                    {40, 43, 65, 77},
                    {74, 79, 48, 55}};
    int l,c;
    float soma;

    for(l=0; l<4; l++){
        for(c=0; c<4; c++){
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }

    soma = (matriz[0][0] + matriz[0][1] + matriz[0][2] + matriz[0][3] + matriz[1][0] + matriz[1][1] + matriz[1][2] + matriz[1][3] + matriz[2][0] + matriz[2][1] + matriz[2][2] + matriz[2][3] + matriz[3][0] + matriz[3][1] + matriz[3][2] + matriz[3][3])/16;
    printf("O valor da media aritmetica e %.0f", soma);


}
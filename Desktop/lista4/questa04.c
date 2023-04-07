#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int mat[4][4]= {{45, 32, 83, 95},
                    {26, 14, 37, 42},
                    {40, 43, 65, 77},
                    {74, 79, 48, 55}};
    int l, c, soma1, soma2;

    for(l=0; l<4; l++){
        for(c=0; c<4; c++){
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }

    soma1 = mat[1][0] + mat[1][1] + mat[1][2] + mat[1][3];
    printf("O valor da soma e %d", soma1);

    soma2 = mat[3][0] + mat[3][1] + mat[3][2] + mat[3][3];
    printf("\nO valor da soma e %d", soma2);

    if (soma1>soma2)
    {
        printf("\nA soma da primeira linha e maior que a soma da segunda linha");
        printf("\nA primeria soma foi de %d e a segunda soma foi de %d", soma1, soma2);
    }else{
        printf("\nA soma da segunda linha e maior que a soma da primeira linha");
        printf("\nA segunda soma foi de %d e a primeira soma foi de %d", soma2, soma1);
    }
    
}
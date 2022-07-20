#include <stdio.h>
#include <stdlib.h>

/*Exercicio 1
int main(){
    int x, i, *a = &x;
    float y, j, *b = &y;
    char z, k, *c = &z;
    printf("Digite o valor do inteiro: ");
    scanf("%d", &x);
    printf("Digite o valor do real: ");
    scanf("%f", &y);
    printf("Digite o char: ");
    fflush(stdin);
    scanf("%c", &z);
    i = x;
    j = y;
    k = z;
    printf("Digite o novo valor do inteiro: ");
    scanf("%d", &x);
    printf("Digite o novo valor do real: ");
    scanf("%f", &y);
    printf("Digite o novo char: ");
    fflush(stdin);
    scanf("%c", &z);
    printf("Os valores antes da modificacao sao %d %f %c e apos a modificacao sao %d %f %c", i, j, k, *a, *b, *c);
    return 0;
}
*/

/*Exercicio 2
int main(){
    int x, y, *a = &x, *b = &y;
    printf("Digite o valor do primeiro inteiro: ");
    scanf("%d", &x);
    printf("Digite o valor do segundo inteiro: ");
    scanf("%d", &y);
    if(a > b){
        printf("O primeiro inteiro possui endereco maior %d em relacao a %d\n", a, b);
        printf("O conteudo do maior endereco eh %d", *a);
    }
    else{
        printf("O segundo inteiro possui endereco maior %d em relacao a %d\n", b, a);
        printf("O conteudo do maior endereco eh %d", *b);
    }
    return 0;

}
*/

/*Exercicio 3
int main(){
    float vet[10];
    float *x = vet;
    int i;
    for(i = 0; i < 10; i++){
        printf("O endereco do vetor na posicao %d eh %d\n", i + 1, x + i);
    }
    return 0;
}
*/

/*Exercicio 4
int main(){
    float mat[3][3];
    float *x = &mat[0][0];
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("O endereco para a posicao [%d][%d] eh %d\n", i, j, x + (i*3) + j);
        }
    }
    return 0;
}
*/

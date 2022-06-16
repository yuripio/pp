#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Exercicio 1
int main(){
    int A[6] = {1,0,5,-2,-5,7};
    int soma = 0, i;
    soma = A[0] + A[1] + A[5];
    printf("A soma eh: %d\n", soma);
    A[3] = 100;
    for(i=0; i<6; i++){
        printf("%d\n", A[i]);
    }
    return 0;
}
*/

/*Exercicio 2
int main(){
    float vet[8];
    float X = 0.0, Y = 0.0;
    int i, j, k;
    for(i = 0; i < 8; i++){
        printf("Digite um valor para a posicao %d do vertor ", i + 1);
        scanf("%f", &vet[i]);
    }
    printf("Escolha uma posiçao do vetor: ");
    scanf("%d", &j);
    X = vet[j - 1];
    printf("Escolha outra posicao do vetor: ");
    scanf("%d", &k);
    Y = vet[k - 1];
    printf("A soma dos valores dessas posicoes eh: %f", X + Y);
    return 0;
}
*/

/*Exercicio 3
int main(){
    int vet[6];
    int aux[6];
    int i, j = 0, k = 5;
    for(i = 0; i < 6; i++){
        printf("Digite um valor para a posicao %d do vetor ", i + 1);
        scanf("%d", &vet[i]);
    }
    for(i = 5; i >=0; i--){
    printf("%d\n", vet[i]);
    }
    return 0;
}
*/

/*
int main(){
    float vet[5], M, m;
    int i;
    for(i = 0; i < 5; i++){
        printf("Digite um valor para a posicao %d do vetor ", i + 1);
        scanf("%f", &vet[i]);
    }
    M = vet[0];
    for(i = 1; i < 5; i++){
        if(vet[i] > M){
            M = vet[i];
        }
    }
    m = vet[0];
    for(i = 1; i < 5; i++){
        if(vet[i] < m){
            m = vet[i];
        }
    }
    printf("O maior eh %f e o menor eh %f", M, m);
    return 0;
}
*/

/*Exercicio 5
int main(){
    int vet[50];
    int i;
    for(i = 0; i < 50; i++){
        printf("O valor para a posicao %d do vetor eh %d\n", i + 1, (i+5*i)%(i+1));
    }
    return 0;
}
*/

/*Exercicio 6
int main(){
    int vet[10];
    int i, j, aux = 0;
    for(i = 0; i < 10; i++){
        printf("Digite um valor para a posicao %d do vetor ", i + 1);
        scanf("%d", &vet[i]);
    }
    for(i = 0; i < 10; aux = 0, i++){
        for(j = 2; j < vet[i]; j++){
            if(vet[i]%j == 0)
                aux++;
        }
        if(aux == 0){
            printf("O numero %d na posicao %d eh primo\n", vet[i], i + 1);
        }
    }
    return 0;
}
*/

/*Exercicio 7
int main(){
    int vet[6];
    int i, cont = 0, soma = 0;
    for(i = 0; i < 6; i++){
        printf("Digite um valor para a posicao %d do vetor ", i + 1);
        scanf("%d", &vet[i]);
        if(vet[i]%2 == 0){
            printf("O numero %d eh par\n", vet[i]);
            soma += vet[i];
        }
        else{
            printf("O numero %d eh impar\n", vet[i]);
            cont++;
        }
    }
    printf("A soma dos numros pares digitados eh %d\n", soma);
    printf("A quantidade de numeros impares eh %d", cont);
    return 0;
}
*/

/*Exercicio 8
int main(){
    float vet[10];
    int i, j;
    for(i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%f", &vet[i]);
        for(j = 0; j < i; j++){
            if(vet[j] == vet[i]){
                printf("Valor repetido\n");
                i--;
            }
        }
    }
    for(i = 0; i < 10; i++)
        printf("Posicao %d eh %f\n", i + 1, vet[i]);
    return 0;
}
*/

/*Exercicio 1
int main(){
    int mat[4][4];
    int i, j, cont = 0;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite um valor: ");
            scanf("%d", &mat[i][j]);
            if(mat[i][j] > 10.0)
                cont++;
        }
    }
    printf("O numero de valores maiores que 10 digitados eh %d", cont);
    return 0;
}
*/

/*Exercicio 2
int main(){
    int mat[5][5];
    int i, j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i == j)
                mat[i][j] = 1;
            else
                mat[i][j] = 0;
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*Exercicio 3
int main(){
    float mat[4][4];
    int i, j, a = 0, b = 0;
    mat[a][b] = mat[0][0];
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite um valor: ");
            scanf("%f", &mat[i][j]);
            if(mat[i][j] > mat[a][b]){
                mat[a][b] = mat[i][j];
                a = i;
                b = j;
            }
        }
    }
    printf("A posicao do maior valor eh %d %d", a, b);
    return 0;
}
*/

/*Exercicio 4
int main(){
    int mat[5][5];
    int X = 0, i, j, a = -1, b = -1;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Digite um valor: ");
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Digite um valor para X: ");
    scanf("%d", &X);
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(X == mat[i][j])
                a = i; b = j;
        }
    }
    if(a != -1)
        printf("O valor de X esta na posicao %d %d", a, b);
    else
        printf("Valor nao encontrado");
    return 0;
}
*/

/*Exercicio 5
int main(){
    int mat[10][10];
    int i, j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(i < j)
                mat[i][j] = 2*1+7*j-2;
            else{
                if(i == j)
                    mat[i][j] = 3*(i*i)-1;
                else
                    mat[i][j] = 4*(i*i*i)-5*(j*j);
            }
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*Exercicio 6
int main(){
    int mat[4][4];
    int i, j;
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Digite um valor: ");
            scanf("%d", &mat[i][j]);
            if(mat[i][j] <= 0 || mat[i][j] >= 21){
                printf("Valor invalido\n");
                i--;
                j--;
            }
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
                if(j > i)
                    mat[i][j] = 0;
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
*/

/*Exercicio 7
int main(){
    int mat[5][5];
    int i, j;
    srand(time(NULL));
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            mat[i][j] = rand()%100 - 1;
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

int main(){
    float mat1[2][2];
    float mat2[2][2];
    float y;
    int x, i, j;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite um valor: ");
            scanf("%f", &mat1[i][j]);
        }
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Digite um valor: ");
            scanf("%f", &mat2[i][j]);
        }
    }
    do{
        do{
            printf("Escolha uma das opcoes: \n");
            printf("1- Somar as duas matrizes\n2-Subtrair a primeira matriz da segunda\n3- Adicionar uma constante as duas matrizes\n4- Imprimir as matrizes\n");
            scanf("%d", &x);
        }while(x < 0 || x > 5);
        switch(x){
        case 1:
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    mat1[i][j] = mat1[i][j] + mat2[i][j];
                }
            }
        case 2:
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    mat1[i][j] = mat1[i][j] - mat2[i][j];
                }
            }
        case 3:
            printf("Digite um valor: ");
            scanf("%f", &y);
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                    mat1[i][j] = mat1[i][j] + y;
                    mat2[i][j] = mat2[i][j] + y;
                }
            }
        case 4:
            for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                printf("%f ", mat1[i][j]);
                }
                printf("\n");
            }
                        for(i = 0; i < 2; i++){
                for(j = 0; j < 2; j++){
                printf("%f ", mat2[i][j]);
                }
                printf("\n");
            }
        }
    }while( x != 4);
}

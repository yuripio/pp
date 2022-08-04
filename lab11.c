#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*Exercicio 1
int main(){
    int i, tam;
    int *vet;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    vet = (int*)malloc(tam*sizeof(int));
    for(i = 0; i < tam; i++){
        printf("Digite o valor da posicao %d do vetor ", i+1);
        scanf("%d", &vet[i]);
    }
    for(i = 0; i < tam; i++){
        printf("O vetor na posicao %d tem valor igual a %d\n", i+1, vet[i]);
    }
    free(vet);
    return 0;
}
*/

/*Exercicio 2
int main(){
    char *str;
    int tam;
    printf("Digite o tamanho da string: ");
    scanf("%d", &tam);
    str = (char*)malloc((tam+1)*sizeof(char));
    printf("Digite o conteudo da string: ");
    fflush(stdin);
    fgets(str, tam+1, stdin);
    printf("A string digitada eh: ");
    puts(str);
    free(str);
    return 0;
}
*/

/*Exercicio 3
int main(){
    int i, cont = 0;
    int *vet;
    vet = (int*)calloc(1500, sizeof(int));
    for(i = 0; i < 1500; i++){
        if(vet[i] != 0)
            cont++;
    }
    if(cont == 0)
        printf("Todas as posicoes do vetor foram zeradas");
    else
        printf("Nem todas as posicoes do vetor foram zeradas");
    free(vet);
    return 0;
}
*/

/*Exercicio 4
int main(){
    int i = 0, j;
    int *vet = NULL;
    while(true){
        printf("Digite um valor para a posicao %d: ", i);
        scanf("%d", &j);
        if(j < 0)
            break;
        vet = (int*)realloc(vet,(i+1)*sizeof(int));
        vet[i] = j;
        i++;
    }
    printf("Foram digitados %d valores positivos", i);
    free(vet);
    return 0;
}
*/

/*Exercicio 5
struct data{
    int dia;
    int mes;
    int ano;
};

typedef struct data data;


struct aluno{
    char matricula[50];
    char sobrenome[50];
    data nascimento;
};

typedef struct aluno aluno;


int main(){
    int tam, i;
    aluno *x;
    printf("Digite a quantidade de alunos que serao armazenados: ");
    scanf("%d", &tam);
    x = (aluno*)malloc(tam*sizeof(aluno));
    for(i = 0; i < tam; i++){
        printf("Digite o sobrenome do(a) aluno(a) %d: ", i + 1);
        fflush(stdin);
        scanf("%s", &x[i].sobrenome);
        printf("Digite a matricula do(a) aluno(a) %d: ", i + 1);
        fflush(stdin);
        scanf("%s", x[i].matricula);
        printf("Digite o dia de nascimento do(a) aluno(a) %d: ", i + 1);
        scanf("%d", &x[i].nascimento.dia);
        printf("Digite o mes numericamente de nascimento do(a) aluno(a) %d: ", i + 1);
        scanf("%d", &x[i].nascimento.mes);
        printf("Digite o ano de nascimento do(a) aluno(a) %d: ", i + 1);
        scanf("%d", &x[i].nascimento.ano);
    }
    for(i = 0; i < tam; i++){
        printf("O(A) aluno(a) com sobrenome %s de matricula %s nasceu em %d/%d/%d\n", x[i].sobrenome, x[i].matricula, x[i].nascimento.dia, x[i].nascimento.mes, x[i].nascimento.ano);
    }
    free(x);
    return 0;
}
*/

/*Exercicio 6
int main(){
    int i, j, linha, coluna;
    int **p;
    printf("Digite o numero de linhas desejado na matriz: ");
    scanf("%d", &linha);
    printf("Digite o numero de colunas desejado na matriz: ");
    scanf("%d", &coluna);
    p = (int**)malloc(linha*sizeof(int));
    for(i = 0; i < linha; i++){
        p[i] = (int*)malloc(coluna*sizeof(int));
        for(j = 0; j < coluna; j++){
            printf("Digite o valor para a posicao [%d][%d] da matriz: ", i, j);
            scanf("%d", &p[i][j]);
        }
    }
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < linha; i++)
        free(p[i]);
    free(p);
    return 0;
}
*/

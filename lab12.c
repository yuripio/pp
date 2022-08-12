#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/*Exercicio 1
int main(){
    char c;
    FILE *fp;
    fp = fopen("caracteres.txt","w");
    if(fp == NULL)
        printf("Erro na abertura do arquivo");
    do{
        printf("Digite um caracter: ");
        fflush(stdin);
        scanf("%c", &c);
        if(c == '0')
            break;
        fprintf(fp,"%c",c);
    }while(true);
    fclose(fp);
    return 0;
}
*/

/*Exercicio 2
int main(){
    int cont = 0;
    char c, n;
    FILE *fp;
    fp = fopen("caracteres.txt","r");
    if(fp == NULL)
        printf("Erro na abertura do arquivo");
    printf("Digite o caracter que sera usado para a pesquisa: ");
    scanf("%c", &c);
    while(true){
        fscanf(fp,"%c",&n);
        if(n == c)
            cont++;
        if(feof(fp))
            break;
    }
    printf("A quantidade de caracteres %c do arquivo eh %d", c, cont);
    fclose(fp);
    return 0;
}
*/

/*Exercicio 3
struct pessoa{
    char nome[100];
    int idade;
    float altura;
};

typedef struct pessoa pessoa;

int main(){
    int x, i = 1, j;
    pessoa p[100];
    FILE *fp;
    fp = fopen("pessoas.txt","w");
    if(fp == NULL)
        printf("Erro na abertura do arquivo");
    do{
            do{
                printf("1 - Desejar gravar dados de mais uma pessoa\n2 - Deseja encerrar o programa\n");
                scanf("%d", &x);
            }while(x != 1 && x != 2);
        switch(x){
        case 1:
            printf("Digite o nome da pessoa: ");
            fflush(stdin);
            scanf("%s", &p[i].nome);
            fprintf(fp,"%s ", p[i].nome);
            printf("Digite a idade da pessoa: ");
            scanf("%d", &p[i].idade);
            fprintf(fp,"%d ", p[i].idade);
            printf("Digite a altura da pessoa: ");
            scanf("%f", &p[i].altura);
            fprintf(fp,"%f\n", p[i].altura);
            //fwrite(&p[i], sizeof(pessoa), 100, fp);
        case 2:
            break;
        }
        i++;
    }while(x != 2);
    fclose(fp);
    return 0;
}
*/

/*Exercicio 4
int main(){
    char arq_nome[100], x[100];
    int arq_idade;
    float arq_altura;
    FILE *fp;
    fp = fopen("pessoas.txt","r");
    printf("Digite o nome da pessoa que se deseja a informacao: ");
    fflush(stdin);
    scanf("%s", &x);
    while(true){
        fscanf(fp, "%s", arq_nome);
        fscanf(fp, "%d", &arq_idade);
        fscanf(fp, "%f", &arq_altura);
        if(strcmp(arq_nome, x)== 0){
            printf("A pessoa %s possui idade %d e altura %f", arq_nome, arq_idade, arq_altura);
            break;
        }
    }
    fclose(fp);
    return 0;
}
*/

/*Exercicio 5
struct pessoa{
    char nome[100];
    int idade;
    float altura;
};

typedef struct pessoa pessoa;

int main(){
    int x, i = 1, j;
    pessoa p[100];
    FILE *fp;
    fp = fopen("pessoas.bin","wb");
    if(fp == NULL)
        printf("Erro na abertura do arquivo");
    do{
            do{
                printf("1 - Desejar gravar dados de mais uma pessoa\n2 - Deseja encerrar o programa\n");
                scanf("%d", &x);
            }while(x != 1 && x != 2);
        switch(x){
        case 1:
            printf("Digite o nome da pessoa: ");
            fflush(stdin);
            scanf("%s", &p[i].nome);
            fprintf(fp,"%s ", p[i].nome);
            printf("Digite a idade da pessoa: ");
            scanf("%d", &p[i].idade);
            fprintf(fp,"%d ", p[i].idade);
            printf("Digite a altura da pessoa: ");
            scanf("%f", &p[i].altura);
            fprintf(fp,"%f\n", p[i].altura);
            //fwrite(&p[i], sizeof(pessoa), 100, fp);
        case 2:
            break;
        }
        i++;
    }while(x != 2);
    fclose(fp);
    return 0;
}
*/

/*Exercicio 6
int main(){
    char arq_nome[100], x[100];
    int arq_idade;
    float arq_altura;
    FILE *fp;
    fp = fopen("pessoas.bin","rb");
    printf("Digite o nome da pessoa que se deseja a informacao: ");
    fflush(stdin);
    scanf("%s", &x);
    while(true){
        fscanf(fp, "%s", arq_nome);
        fscanf(fp, "%d", &arq_idade);
        fscanf(fp, "%f", &arq_altura);
        if(strcmp(arq_nome, x)== 0){
            printf("A pessoa %s possui idade %d e altura %f", arq_nome, arq_idade, arq_altura);
            break;
        }
    }
    fclose(fp);
    return 0;
}
*/

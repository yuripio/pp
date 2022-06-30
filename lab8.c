#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*Exercicio 1
struct horario{
    int hora;
    int min;
    int seg;
};

struct data{
    int dia;
    int mes;
    int ano;
};

struct compromisso{
    struct data d;
    struct horario h;
    char texto[];
};
*/

/*Exercicio 2
struct aluno{
    char nome[100];
    int matricula;
    char curso[100];
};

typedef struct aluno aluno;

int main(){
    aluno x[5];
    int i;
    for(i = 0; i < 5; i++){
        printf("Escreva o nome do aluno %d: ", i + 1);
        scanf("%s", &x[i].nome);
        printf("Escreva o numero de matricula do aluno %d: ", i + 1);
        scanf("%d", &x[i].matricula);
        printf("Escreva o curso do aluno %d: ", i + 1);
        scanf("%s", &x[i].curso);
    }
    for(i = 0; i < 5; i++){
        printf("%s %d %s\n", x[i].nome, x[i].matricula, x[i].curso);
    }
    return 0;
}
*/

/*
struct aluno{
    char nome[100];
    int matricula, p1, p2, p3;
};

typedef struct aluno aluno;

int main(){
    aluno x[5];
    int i, nota, maior, menor;
    float med[5];
    char nota1[100], maior1[100], menor1[100];
    for(i = 0; i < 5; i++){
        printf("Escreva o nome do aluno %d: ", i + 1);
        scanf("%s", &x[i].nome);
        printf("Escreva o numero de matricula do aluno %d: ", i + 1);
        scanf("%d", &x[i].matricula);
        printf("Escreva a nota da primeira prova do aluno %d: ", i + 1);
        scanf("%d", &x[i].p1);
        printf("Escreva a nota da segunda prova do aluno %d: ", i + 1);
        scanf("%d", &x[i].p2);
        printf("Escreva a nota da terceira prova do aluno %d: ", i + 1);
        scanf("%d", &x[i].p3);
        med[i] = (x[i].p1 + x[i].p2 + x[i].p3)/3;
    }
    strcpy(nota1, x[0].nome);
    strcpy(maior1, x[0].nome);
    strcpy(menor1, x[0].nome);
    nota = x[0].p1;
    maior = med[0];
    menor = med[0];
    for(i = 1 ; i < 5; i++){
        if(x[i].p1 > nota){
            nota = x[i].p1;
            strcpy(nota1, x[i].nome;
        }
        if(med[i] > maior){
            maior = med[i];
            strcpy(maior1, x[i].nome);
        }
        if(med[i] < menor){
            menor = med[i];
            strcpy(menor1, x[i].nome);
        }
    }
    printf("O aluno %s tem a maior nota da p1 com: %d", nota1, nota);
    printf("O aluno %s tem a maior media com: %f", maior1, maior);
    printf("O aluno %s tem a menor media com: %f", menor1, menor);

    for(i = 0; i < 5; i++){
        if(med[i] >= 6)
            printf("O aluno %s foi aprovado com media igual a: %f", x[i].nome, med[i]);
        else
            printf("O aluno %s foi reprovado com media igual a: %f", x[i].nome, med[i]);
    }
    return 0;
}
*/


/*Exercicio 4
struct nascimento{
    int dia, mes, ano;
};

struct funcionario{
    char nome[100], sexo, cargo[30];
    int idade, CPF, codigo;
    float salario;
    struct nascimento data;
};

typedef struct funcionario funcionario;

int main(){
    int i;
    funcionario f;

    printf("Digite o nome desse funcionario: ");
    scanf("%s", &f.nome);
    fflush(stdin);
    printf("Digite o sexo desse funcionario: ");
    scanf("%c", &f.sexo);
    printf("Digite o cargo desse funcionario: ");
    scanf("%s", &f.cargo);
    printf("Digite a idade desse funcionario: ");
    scanf("%d", &f.idade);
    printf("Digite o CPF desse funcionario: ");
    scanf("%d", &f.CPF);
    printf("Digite o codigo desse funcionario: ");
    scanf("%d", &f.codigo);
    printf("Digite a data de nascimento desse funcionario: ");
    scanf("%d %d %d", &f.data.dia, &f.data.mes, &f.data.ano);
    printf("Digite o salario desse funcionario: ");
    scanf("%f", &f.salario);
    printf("Os dados dos funcionarios sao:\n%s\n%d\n%c\n%d %d %d\n%d\n%d\n%s\n%f\n", f.nome, f.idade, f.sexo, f.data.dia, f.data.mes, f.data.ano, f.codigo, f.cargo, f.salario);
    return 0;
}
*/

/*Exercicio 5
struct carro{
    char marca[16];
    int ano;
    float preco;
};

typedef struct carro carro;

int main(){
    carro c[5];
    int i;
    float p = 0.0;
    for(i = 0; i < 5; i++){
            printf("Digite a marca do carro: ");
            gets(c[i].marca);
            printf("Digite o ano do carro: ");
            scanf("%d", &c[i].ano);
            printf("Digite o preco do carro: ");
            scanf("%f", &c[i].preco);
            fflush(stdin);
    }
    do{
        printf("Digite o valor de comparacao: ");
        scanf("%f", &p);
        for(i = 0; i < 5; i++){
            if(c[i].preco < p){
                printf("O carro %s do ano de %d possui preco %f\n", c[i].marca, c[i].ano, c[i].preco);
            }
        }
    }while(p != 0);
    return 0;
}
*/

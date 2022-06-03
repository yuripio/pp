#include <stdio.h>
#include <stdlib.h>

/*Exercicio 3
int main(){
    float salario;
    printf("--Aumento Salarial--\n");
    printf("Digite o salario: ");
    scanf("%f", &salario);
    salario = salario + (salario*0.25);
    printf("Apos 25%% de aumento, o salario fica R$ %.2f", salario);
    return 0;
}
*/

/*Exercicio 4
int main(){
    char uni;
    float temp, conv;
    printf("Digite a temperatura: ");
    scanf("%f", &temp);
    printf("Digite a unidade: ");
    fflush(stdin);
    scanf("%c", &uni);
    if(uni == 'c' || uni == 'C'){
        conv = temp*(9.0/5.0)+32.0;
        printf("%.2f Celsius em Fahrenheit eh %.2f", temp, conv);
    }
    else{
        if(uni == 'f' || uni == 'F'){
            conv = (temp - 32.0)/(9.0/5.0);
            printf("%.2f Fahrenheit em Celsius eh %.2f", temp, conv);
        }
        else{
            printf("Unidade invalida");
        }
    }
    return 0;
}
*/

/*Exercicio 5
int main(){
    int x, y, z;

    scanf("%d", &x);
    for(y = 1; y <= x; y++){
        for(z = 1; z <= y; z++){
            printf("*",);
        }
        printf("\n");
    }
    return 0;
}
*/

/*Exercicio 6
int main(){
    int x, a, b;
    do{
        do{
            printf("Escolha uma opcao: ");
            printf("1.Adicao\n2.Subtracao\n3.Multiplicacao\n4.Divisao\n5.Modulo\n6.SAIR\n");
            scanf("%d", &x);
        }while(x <1 || x > 6);

        if(x != 6) {
           scanf("%d %d", &a, &b);
        }

        switch(x){
        case 1:
            printf("O valor da adicao eh: %d", a+b);
            break;
        case 2:
            printf("O valor da subtracao eh: %d", a-b);
            break;
        case 3:
            printf("O valor da multiplicacao eh: %d", a*b);
            break;
        case 4:
            if(b == 0)
                printf("Erro");
            else
                printf("O valor da divisao eh: %.4f", (float) a / b);
            break;
        case 5:
            if(b == 0)
                printf("Erro");
            else
                printf("O valor do modulo eh: %d", a%b);
            break;
        }
    }while(x != 6);
    return 0;
}
*/


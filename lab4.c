#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/*Exercicio 1
int main(){
    int x, y = 0;
    x = 1;
    while(y < 5){
        x += 1;
        if(x%3 == 0){
            printf("%d\n", x);
            y++;
        }
    }
    return 0;
}
*/

/*Exercicio 2
int main(){
    int x, y = 1, z = 1;
    for(x = 1; x<=100; x++){
        printf("%d ", x);
    }
    while(y<=100){
        printf("%d ", y);
        y++;
    }
    do{
        printf("%d ", z);
        z++;
    }while(z<=100);
    return 0;
}
*/

/*Exercicio 3
int main(){
    int x =10;
    while(x>=0){
        printf("%d\n", x);
        x--;
    }
    printf("FIM!");
    return 0;
}
*/

/*Exercicio 4
int main(){
    int x = 0;
    while(x <= 100000){
        printf("%d ", x);
        x += 1000;
    }
    return 0;
}
*/

/*Exercicio 5
int main(){
    float x, soma;
    int y;
    for(y = 0; y < 10; y++){
        printf("Digite um valor: ");
        scanf("%f", &x);
        soma += x;
    }
    printf("A soma dos valores digitados eh: %f", soma);
    return 0;
}
*/

/*Exercicio 6
int main(){
    int x, y;
    float soma;
    for(y = 0; y < 10; y++){
        printf("Digite um valor: ");
        scanf("%d", &x);
        soma += x;
    }
    printf("A media dos valores digitados eh: %f", (soma/10)*1.0);
    return 0;
}
*/

/*Exercicio 7
int main(){
    int x, y = 0;
    float soma;
    while(y < 10){
        printf("Digite um valor: ");
        scanf("%d", &x);
        if(x >= 0){
            soma += x;
            y++;
        }
    }
    printf("A media dos numeros positivos digitados eh: %f", 1.0*(soma/10));
    return 0;
}
*/

/*Exercicio 8
int main(){
    int w;
    float x, y, z;
    for(w = 0; w <10; w++){
        printf("Digite um valor: ");
        scanf("%f", &x);
        if(x > y){
            y = x;
        }
        else{
            if(x < z){
                z = x;
            }
        }
    }
    printf("O maior numero digitado eh %f e o menor eh %f", y, z);
    return 0;
}
*/

/*Exercicio 9
int main(){
    int x = 0, y = 0, N;
    printf("Digite um valor: ");
    scanf("%d", &N);
    while(y < N){
        x++;
        if(x%2 != 0){
            printf("%d ", x);
            y++;
        }
    }
    return 0;
}
*/

/*Exercicio 10
int main(){
    int x = 0, y = 0, soma = 0;
    while(y < 50){
        x++;
        if(x%2 == 0){
            soma += x;
            y++;
        }
    }
    printf("A soma dos 50 primeiros numeros pares eh: %d", soma);
    return 0;
}
*/

/*Exercicio 11
int main(){
    int x = 0, N;
    printf("Digite um valor: ");
    scanf("%d", &N);
    while(x < N){
        printf("%d ", x);
        x++;
    }
    return 0;
}
*/

/*Exercicio 12
int main(){
    int x, div = 0, soma = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    while(div <= x){
        div++;
        if(x%div == 0 && div != x){
            soma += div;
        }
    }
    printf("A soma dos divisores desse numero exceto ele mesmo eh: %d", soma);
    return 0;
}
*/

/*Exercicio 13
int main(){
    int x = 0, soma = 0;
    while(x < 1000){
        x ++;
        if(x%3 == 0 || x%5 == 0){
            soma += x;
        }
    }
    printf("A soma dos valores multiplos de 3 ou 5 e menores que 1000 eh: %d", soma);
    return 0;
}
*/

/*Exercicio 14
int main(){
    int x, n, d1, d2;
    srand(time(NULL));
    printf("Digite o numero de lancamentos: ");
    scanf("%d", &n);
    for(x = 0; x < n; x++){
        d1 = rand()%6 +1;
        d2 = rand()%6 +1;
        if(d1 < d2){
            printf("%d < %d\n", d1, d2);
        }
        else{
            if(d1 > d2){
                printf("%d > %d\n", d1, d2);
            }
            else{
                printf("%d = %d\n", d1, d2);
            }
        }
    }
    return 0;
}
*/

/*Exercicio 15
int main(){
    float x = 1.0;
    while(x > 0){
        printf("Digite um numero: ");
        scanf("%f", &x);
        printf("O valor do quadrado de %f eh: %f\n", x, x*x);
        printf("O valor do cubo de %f eh: %f\n", x, x*x*x);
        printf("O valor da raiz quadrada de %f eh: %f\n", x, sqrt(x));
    }
    return 0;
}
*/

/*Exercicio 16
int main(){
    int x;
    float a, b;
   do{
    do{
        printf("1-Adicao\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n5-Saida\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &x);
    }while(x < 1 || x > 5);
    switch(x){
    case 1:
        printf("Digite os dois valores: ");
        scanf("%f %f", &a, &b);
        printf("O valor da adicao eh: %f\n", a+b);
        break;
    case 2:
        printf("Digite os dois valores: ");
        scanf("%f %f", &a, &b);
        printf("O valor da subtracao eh: %f\n", a-b);
        break;
    case 3:
        printf("Digite os dois valores: ");
        scanf("%f %f", &a, &b);
        printf("O valor da multiplicacao eh: %f\n", a*b);
        break;
    case 4:
        printf("Digite os dois valores: ");
        scanf("%f %f", &a, &b);
        if(b != 0)
            printf("O valor da divisao eh: %f\n", a/b);
        else
            printf("Valor invalido\n");
        break;
    }
   }while(x != 5);
   return 0;
}
*/

/*Exercicio 17
int main(){
    int ano = 0;
    float c = 1.50, z = 1.10;
    while(z < c){
        z += 0.03;
        c += 0.02;
        ano++;
    }
    printf("O numero em anos que ira demorar pode o ze ser maior que o chico eh: %d", ano);
    return 0;
}
*/

/*Exercicio 18
int main(){
    int x, ano, data;
    double salario = 2000.0, aumento = 0.015;
    printf("Digite o ano atual: ");
    scanf("%d", &ano);
    salario = salario + (salario*0.015);
    ano = ano - 1996;
    while(x < ano){
        aumento = aumento*2;
        salario = salario + (salario*aumento);
        x++;
    }
    printf("O salario atual do funcionario eh: %lf", salario);
    return 0;
}
*/

/*Exercicio 19
int main(){
    int valor, cem, cinq, vinte, dez, cinco, dois, um;
    printf("Digite o valor a ser sacado: ");
    scanf("%d", &valor);
    for(cem = 0; valor > 100; cem++){
        valor = valor - 100;
    }
    for(cinq = 0; valor > 50; cinq++){
        valor = valor - 50;
    }
    for(vinte = 0; valor > 20; vinte++){
        valor = valor - 20;
    }
    for(dez = 0; valor > 10; dez++){
        valor = valor - 10;
    }
    for(cinco = 0; valor > 5; cinco++){
        valor = valor - 5;
    }
    for(dois = 0; valor > 2; dois++){
        valor = valor - 2;
    }
    for(um = 0; valor > 0; um++){
        valor = valor - 1;
    }
    printf("A quantidade de notas de cada valor do maior para o menor respectivamente eh: %d %d %d %d %d %d %d", cem, cinq, vinte, dez, cinco, dois, um);
    return 0;
}
*/

/*Exercicio 20
int main(){
    int x = 1, y = 1, divisores = 0, soma = 0;
    for(x = 1; x <= 2000000; x++){
        for(y = 1; y <= x; y++){
            if(x%y ==0){
                divisores++;
            }
        }
        if(divisores == 2){
            soma = soma + x;
        }
    }
    printf("A soma dos numeros primos ate 2000000 eh: %d", soma);
    return 0;
}
*/

/*Exercicio 21
int main(){
    int x, y, quantidade, a, b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    while(a < b){
        x = 1;
        while(x <= a){
            if(a%x == 0){
                y++;
            }
        }
        if(y == 2){
            quantidade++;
        }
        a++;
    }
    printf("A quantidade de numeros primos entre os numeros digitados eh: %d", quantidade);
    return 0;
}
*/

//Exercicio 22

/*Exercicio 23
int main(){
    int x, i, j, k;
    printf("Digite um numero: ");
    scanf("%d", &k);
    for(i = 1; i <= k; i++){
        for(j = 1; j <= i; j++){
                x++;
            printf("%d ", x);
        }
        printf("\n");
    }
    return 0;
}
*/

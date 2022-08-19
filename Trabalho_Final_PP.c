#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Funcao de calculo da area da integral por meio de retangulos
float Integral(int a, int b, int c, int d, int x1, int x2, float h, float comparar){
    int i, j = 1;
    float A;
    do{
        A = a*(h*h*h) + b*(h*h) + c*h + d;
        for(i = 0; i < j; j++)
            A = A*A;
        h = h/2;
        j = j*2;
    }while((comparar - A)< 0,000001);

    return A;
}

int main(){
    int a, b, c, d, x1, x2; // Declaração das variaveis
    float S_atual, h;
    double result = 0, valor = 0;
    printf("A funcao eh ax^3 + bx^2 + cx + d\n");
    printf("Digite o valor de a para a funcao: ");
    scanf("%d", &a);
    printf("Digite o valor de b para a funcao: ");
    scanf("%d", &b);
    printf("Digite o valor de c para a funcao: ");
    scanf("%d", &c);
    printf("Digite o valor de d para a funcao: ");
    scanf("%d", &d);
    printf("O intervalo da integral eh [x1,x2]\n");
    printf("Digite o valor de x1: ");
    scanf("%d", &x1);
    printf("Digite o valor de x2: ");
    scanf("%d", &x2);
    if(x1 > x2) // Calculo da integral por meio do metodo de integracao
        result = ((a*(pow(x1,4)/4)) + (b*(pow(x1,3)/3)) + (c*(pow(x1,2)/2)) + (d*x1)) - ((a*(pow(x2,4)/4)) + (b*(pow(x2,3)/3)) + (c*(pow(x1,2)/2)) + (d*x1));
    else
        result = ((a*(pow(x2,4)/4)) + (b*(pow(x2,3)/3)) + (c*(pow(x1,2)/2)) + (d*x1)) - ((a*(pow(x1,4)/4)) + (b*(pow(x1,3)/3)) + (c*(pow(x1,2)/2)) + (d*x1));
    printf("O valor da integracao dos valores eh igual a %lf", result);
    if(x1 >= x2)
        h = x1 - x2;
    else
        h = x2 - x1;
    S_atual = a*pow(x2,3) + b*pow(x2,2) + c*x2 + d; // Calculo da primeira area retangular da integral
    result = Integral(a, b, c, d, x1, x2, h, S_atual); // Chamada da funcao da integral
    printf("O valor da area da integral eh: %f", result);
    return 0;
}

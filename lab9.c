#include <stdio.h>
#include <stdlib.h>

/*Exercicio 01
void data(int i, int j, int k){
    switch(j){
        case 1: printf("%d de Janeiro de %d", i, k);
        break;
        case 2: printf("%d de Fevereiro de %d", i, k);
        break;
        case 3: printf("%d de Marco de %d", i, k);
        break;
        case 4: printf("%d de Abril de %d", i, k);
        break;
        case 5: printf("%d de Maio de %d", i, k);
        break;
        case 6: printf("%d de Junho de %d", i, k);
        break;
        case 7: printf("%d de Julho de %d", i, k);
        break;
        case 8: printf("%d de Agosto de %d", i, k);
        break;
        case 9: printf("%d de Setembro de %d", i, k);
        break;
        case 10: printf("%d de Outubro de %d", i, k);
        break;
        case 11: printf("%d de Novembro de %d", i, k);
        break;
        case 12: printf("%d de Dezembro de %d", i, k);
        break;
    }
}

int main(){
     int x, y, z;
     printf("Digite a data: ");
     scanf("%d %d %d", &x, &y, &z);
     data(x, y, z);
     return 0;
}
*/

/*Exercicio 2
void tempo(int i, int j, int k){
    int soma;
    soma = (i*60)*60 + j*60 + k;
    printf("O tempo em segundos eh %d", soma);
}

int main(){
    int x, y, z;
    printf("Digite as horas, minutos e segundos: ");
    scanf("%d %d %d", &x, &y, &z);
    tempo(x, y, z);
    return 0;
}
*/

/*Exercicio 3
int media(float i, float j, float k, char c){
    if(c == 'a' || c == 'A'){
        printf("A media aritmetica eh: %f", (i+j+k)/3);
    }
    else{
        if(c == 'p' || c == 'P'){
            printf("A media ponderada eh: %f", ((i*5.0)+(j*3.0)+(k*2.0))/10);
        }
        else{
            printf("Digito invalido");
        }
    }
}

int main(){
    float x, y, z;
    char w;
    printf("Digite as tres notas do aluno em sequencia: ");
    scanf("%f %f %f", &x, &y, &z);
    printf("Digite A para media aritmetica e P para media ponderada ");
    fflush(stdin);
    scanf("%c", &w);
    media(x, y, z, w);
    return 0;
}
*/

/*Exercicio 4
void triangulo(int i, int j, int k){
    if(i < 0 || j < 0 || k < 0)
        printf("Os lados do triangulo devem ser maior que 0");
    else{
        if(i > j + k || j > i + k || k > i + j)
            printf("Nao eh um triangulo");
        else{
            if(i == j && i == k && j == k)
                printf("Esse triangulo eh equilatero");
            else{
                if(i != j && i != k && j != k)
                    printf("O triangulo eh escaleno");
                else
                    printf("O triangulo eh isosceles");
            }
        }
    }
}

int main(){
    int x, y, z;
    printf("Digite a medida dos lados do triangulo: ");
    scanf("%d %d %d", &x, &y, &z);
    triangulo(x, y, z);
    return 0;
}
*/


/*Exercicio 5.1
void simplifica(int *i, int *j){
    int n, m, cont;
    for(n = 2; n < 1000; n++){
        for(m = 2; m <= n; m++){
            cont = 0;
            if(n % m == 0)
                cont++;
        }
        if(cont == 1){
            while(*i % n == 0 && *j % n == 0){
                *i = *i / n;
                *j = *j / n;
            }
        }
    }
}

int main(){
    int x, y;
    printf("Digite o divisor e o dividendo da fracao: ");
    scanf("%d %d", &x, &y);
    simplifica(&x, &y);
    printf("A simplificacao da fracao eh %d / %d", x, y);
    return 0;
}
*/

/*Exercicio 5.2
int simplifica(int i, int j){
    int resto, MDC;
    do{
        resto = i % j;
        i = j;
        j = resto;
    }while(resto != 0);
    return i;

}

int main(){
    int x, y, MDC;
    printf("Digite o divisor e o dividendo da fracao: ");
    scanf("%d %d", &x, &y);
    MDC = simplifica(x, y);
    x /= MDC;
    y /= MDC;
    printf("A simplificacao da fracao eh %d / %d", x, y);
    return 0;
}
*/

/*Exercicio 6
void vetor(int *origem, int a, int *par, int *b, int *impar, int *c){
    int j, k =0, l = 0;
    for(j = 0; j < 30; j++){
        if(origem[j] % 2 == 0){
            par[k] = origem[j];
            k++;
        }
        else{
            impar[l] = origem[j];
            l++;
        }
    }
    *b = k;
    *c = l;
}

int main(){
    int X[30], A[30], B[30];
    int i, n = 30, m = 30;
    for(i = 0; i < 30; i++){
        printf("Digite um valor para o vetor X na posicao %d: ", i + 1);
        scanf("%d", &X[i]);
    }
    vetor(&X, 30, &A, &n, &B, &m);
    printf("O vetor A com numeros pares eh: ");
    for(i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("O vetor B com numeros impares eh: ");
    for(i = 0; i < m; i++){
        printf("%d ", B[i]);
    }
    return 0;
}
*/

/*Exercicio 7
struct ponto{
    int x;
    int y;
};

typedef struct ponto ponto;

int dentroRet(ponto v1, ponto v2, ponto p){
    if(p.x >= v1.x && p.x <= v2.x && p.x >= v1.y && p.y <= v2.y)
        return 1;
    return 0;
}

int main(){
    ponto v1, v2, p;
    int resultado;
    printf("Digite as coordenadas do vertice inferior esquerdo: ");
    scanf("%d %d", &v1.x, &v1.y);
    printf("Digite as coordenadas do vertice superior direito: ");
    scanf("%d %d", &v2.x, &v2.y);
    printf("Digite as coordenadas do ponto de comparacao: ");
    scanf("%d %d", &p.x, &p.y);
    resultado = dentroRet(v1, v2, p);
    if(resultado == 1)
        printf("O ponto esta localizado dentro do retangulo");
    else
        printf("O ponto nao esta localizado dentro do retangulo");
    return 0;
}
*/

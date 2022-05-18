#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* Exercicio 1
int main(){
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("A minha variavel eh: %d", x);
    return 0;
}
*/

/* Exercicio 2
int main(){
    float y;
    printf("Digite um número real: ");
    scanf("%f", &y);
    printf("A minha variavel eh: %f", y);
    return 0;
}
*/

/* Exercicio 3
int main(){
    int x;
    int y;
    int z;
    printf("Digite os valores: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("A soma eh: %d", x+y+z);
    return 0;
}
*/

/* Exercicio 4
int main(){
    float z;
    printf("Digite o numero: ");
    scanf("%f", &z);
    printf("O quadrado desse numero eh: %f", z*z);
    return 0;
}
*/

/* Exercicio 5
int main(){
    float x;
    printf("Digite o numero: ");
    scanf("%f", &x);
    printf("A quinta parte desse numero eh: %f", x/5);
    return 0;
}
*/

/*Exercicio 6
int main(){
    float C;
    float F;
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &C);
    F = C*(9.0/5.0)+32.0;
    printf("A temperatura em fahrenheit eh: %f", F);
    return 0;
}
*/

/*Exercicio 7
int main(){
    float C;
    float F;
    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &F);
    C = 5.0*(F-32.0)/9.0;
    printf("A temperatura em  eh celsius: %f", C);
    return 0;
}
*/

/*Exercicio 8
int main(){
    float C;
    float K;
    printf("Digite a temperatura em kelvin: ");
    scanf("%f", &K);
    C = K - 273.15;
    printf("A temperatura em  eh celsius: %.2f", C);
    return 0;
}
*/

/*Exercicio 9
int main(){
    double C;
    double K;
    printf("Digite a temperatura em celsius: ");
    scanf("%lf", &C);
    K = C + 273.15;
    printf("A temperatura em kelvin eh: %lf", K);
    return 0;
}
*/

/*Exercicio 10
int main(){
    float K;
    float M;
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &K);
    M = K/3.6;
    printf("A velocidade em m/s eh: %f", M);
    return 0;
}
*/

/*Exercicio 11
int main(){
    float K;
    float M;
    printf("Digite a velocidade em m/s: ");
    scanf("%f", &M);
    K = M*3.6;
    printf("A velocidade em km/h eh: %f", K);
    return 0;
}
*/

/*Exercicio 12
int main(){
    float K;
    float M;
    printf("Digite a distancia em milhas: ");
    scanf("%f", &M);
    K = 1.61*M;
    printf("A distancia em quilometros eh: %f", K);
    return 0;
}
*/

/*Exercicio 13
int main(){
    float K;
    float M;
    printf("Digite a distancia em quilometros: ");
    scanf("%f", &K);
    M = K/1.61;
    printf("A distancia em milhas eh: %f", M);
    return 0;
}
*/

/*Exercicio 14
int main(){
    float R;
    float G;
    float pi = 3.141592;
    printf("Digite o angulo em graus: ");
    scanf("%f", &G);
    R = G*pi/180;
    printf("A angulo em radianos eh: %f", R);
    return 0;
}
*/

/*Exercicio 15
int main(){
    float R;
    float G;
    float pi = 3.141592;
    printf("Digite o angulo em radianos: ");
    scanf("%f", &R);
    G = R*180/pi;
    printf("A angulo em graus eh: %f", G);
    return 0;
}
*/

/*Exercicio 16
int main(){
    float P;
    float C;
    printf("Digite o comprimento em polegadas: ");
    scanf("%f", &P);
    C = P*2.54;
    printf("O comprimento em centimetros eh: %f", C);
    return 0;
}
*/

/*Exercicio 17
int main(){
    float P;
    float C;
    printf("Digite o comprimento em centimetros: ");
    scanf("%f", &C);
    P = C/2.54;
    printf("O comprimento em polegadas eh: %f", P);
    return 0;
}
*/

/*Exercicio 18
int main(){
    float L;
    float M;
    printf("Digite o volume em metros cubicos: ");
    scanf("%f", &M);
    L = 1000*M;
    printf("O volume em litros eh: %f", L);
    return 0;
}
*/

/*Exercicio 19
int main(){
    float L;
    float M;
    printf("Digite o volume em litros: ");
    scanf("%f", &L);
    M = L/1000;
    printf("O volume em metros cubicos eh: %f", M);
    return 0;
}
*/

/*Exercicio 20
int main(){
    float K;
    float L;
    printf("Digite o valor da massa em quilogramas: ");
    scanf("%f", &K);
    L = K/0.45;
    printf("O valor da massa em libras eh: %f", L);
    return 0;
}
*/

/*Exercicio 21
int main(){
    float K;
    float L;
    printf("Digite o valor da massa em libras: ");
    scanf("%f", &L);
    K = L*0.45;
    printf("O valor da massa em quilogramas eh: %f", K);
    return 0;
}
*/

/*Exercicio 22
int main(){
    float J;
    float M;
    printf("Digite o comprimento em jardas: ");
    scanf("%f", &J);
    M = 0.91*J;
    printf("O comprimento em metros eh: %f", M);
    return 0;
}
*/

/*Exercicio 23
int main(){
    float J;
    float M;
    printf("Digite o comprimento em metros: ");
    scanf("%f", &M);
    J = M/0.91;
    printf("O comprimento em jardas eh: %f", J);
    return 0;
}
*/

/*Exercicio 24
int main(){
    double M;
    double A;
    printf("Digite a area em metros quadradados: ");
    scanf("%lf", &M);
    A = M*0.000247;
    printf("A area em acres eh: %lf", A);
    return 0;
}
*/

/*Exercicio 25
int main(){
    double M;
    double A;
    printf("Digite a area em acres: ");
    scanf("%lf", &A);
    M = A*4048.58;
    printf("A area em metros quadradados eh: %lf", M);
    return 0;
}
*/

/*Exercicio 26
int main(){
    double M;
    double H;
    printf("Digite a area em metros quadradados: ");
    scanf("%lf", &M);
    H = M*0.0001;
    printf("A area em hectares eh: %lf", H);
    return 0;
}
*/

/*Exercicio 27
int main(){
    double M;
    double H;
    printf("Digite a area em hectares: ");
    scanf("%lf", &H);
    M = H*10000;
    printf("A area em metros quadradados eh: %lf", M);
    return 0;
}
*/

/*Exercicio 28
int main(){
    float x, y, z;
    printf("Digite os tres valores: ");
    scanf("%f %f %f", &x, &y, &z);
    printf("A soma do quadrado desses valores eh: %f", x*x + y*y + z*z);
    return 0;
}
*/

/*Exercicio 29
int main(){
    float x, y, z, w;
    printf("Digite as quatro notas: ");
    scanf("%f %f %f %f", &x, &y, &z, &w);
    printf("A media aritmetica dessas notas eh: %f", (x+y+z+w)/4);
    return 0;
}
*/

/*Exercicio 30
int main(){
    double R;
    double D;
    printf("Digite o valor em reais e cotacao do dolar: ");
    scanf("%lf %lf", &R, &D);
    printf("O valor em dolar eh: %lf", R/D);
    return 0;
}
*/

/*Exercicio 31
int main(){
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("O antecessor e o sucessor desse numero sao respectivamente: %d %d", x-1, x+1);
    return 0;
}
*/

/*Exercicio 32
int main(){
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("A soma do sucessor de seu triplo com o antecessor de seu dobro eh: %d", ((3*x+1)+(2*x-1)));
    return 0;
}
*/

/*Exercicio 33
int main(){
    float x;
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &x);
    printf("O valor da area do quadrado eh: %f", x*x);
    return 0;
}
*/

/*Exercicio 34
int main(){
    double x;
    double pi = 3.141592;
    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &x);
    printf("O valor da area do circulo eh: %lf", pi*x*x);
    return 0;
*/

/*Exercicio 35
int main(){
    float a, b;
    printf("Digite os catetos do triangulo: ");
    scanf("%f %f", &a, &b);
    printf("A hipotenusa desse triangulo eh: %f", sqrt(a*a + b*b));
    return 0;
}
*/

/*Exercicio 36
int main (){
    double h, r;
    double pi = 3.141592;
    printf("Digite o valor da altura e do raio do cilindro respectivamente: ");
    scanf("%lf %lf", &h, &r);
    printf("O volume do cilindro eh: %lf", pi*(r*r)*h);
    return 0;
}
*/

/*Exercicio 37
int main(){
    float x;
    printf("Digite o valor do produto: ");
    scanf("%f", &x);
    printf("O valor do produto com desconto eh: %f", x -0.12*x);
    return 0;
}
*/

/*Exercicio 38
int main(){
    double x;
    printf("Digite o valor do salario do funcionario: ");
    scanf("%lf", &x);
    printf("O valor do novo salario desse funcionario eh: %lf", x +0.25*x);
    return 0;
}
*/

/*Exercicio 39
int main(){
    float x = 780000.00;
    printf("O valor recebido pelo primeiro, segundo e terceiro colocados eh respectivamente: %f %f %f", 0.46*x, 0.32*x, 0.22*x);
    return 0;
}
*/

/*Exercicio 40
int main(){
    int x;
    float y;
    printf("Digite o numero de dias de trabalho: ");
    scanf("%d", &x);
    y = 30*x;
    printf("O valor recebido pelo trabalhador eh: %f", y-y*0.08);
}
*/

/*Exercicio 41
int main(){
    float x, y, z;
    printf("Digite o valor em reais da hora de trabalho e a quantidade de horas trabalhadas no mes respectivamente: ");
    scanf("%f %f", &x, &y);
    z = x*y;
    printf("O valor a ser pago eh: %f", z+z*0.10);
    return 0;
}
*/

/*Exercicio 42
int main(){
    float x;
    printf("Digite o salario base do funcionario: ");
    scanf("%f", &x);
    printf("O valor a receber eh: %f", x+x*0.05-x*0.07);
    return 0;
}
*/

/*Exercicio 43
int main(){
    double x, com_avista, com_parc;
    printf("Digite o valor do produto: ");
    scanf("%lf", &x);
    com_avista = (x-0.10*x)*0.05;
    com_parc = x*0.05;
    printf("O produto com valor a vista e a comissao sao respectivamente: %lf %lf\n", x-x*0.10, com_avista);
    printf("O valor da parcela do produto e a comissao dele parcelado sao: %lf %lf ", x/3, com_parc);
    return 0;
}
*/

/*Exercicio 44
int main(){
    float x, y;
    printf("Digite a altura do degrau e a altura que se deseja alcancar: ");
    scanf("%f %f", &x, &y);
    printf("O número de degraus que sera necessario subir eh: %f", y/x);
    return 0;
}
*/

/*Exercicio 45
int main(){
    char x;
    printf("Digite o caracter em maiusculo: ");
    scanf("%c", &x);
    printf("O caracter em minusculo: %c", x+32);
    return 0;
}
*/


/*Exercicio 46
int main(){
    int x,y,z,w;
    printf("Digite o número de tres caracteres: ");
    scanf("%d", &x);
    y = x%10;
    x = x/10;
    z = x%10;
    x = x/10;
    w = x%10;
    printf("Esse numero invertido eh: %d%d%d", y, z, w);
    return 0;
}
*/

/*Exercicio 47
int main(){
    int x,a,b,c,d;
    printf("Digite o numero de quatro digitos: ");
    scanf("%d", &x);
    a = x/1000;
    b = (x%1000)/100;
    c = (x%100)/10;
    d = (x%10);
    printf("%d\n %d\n %d\n %d\n", a, b, c, d);
    return 0;
}
*/

/*Exercicio 48
int main(){
    float seg, min, hora;
    printf("Digite o valor em segundos: ");
    scanf("%f", &seg);
    min = seg/60;
    hora = min/60;
    printf("O valor em horas, minutos e segundos respectivamente eh: %f %f %f ", hora, min, seg);
    return 0;
}
*/

/*Exercio 49
int main(){
    int x, y, z, temp, seg, min, hora;
    printf("Digite a hora, minutos e segundos do inicio do experimento e sua duracao em segundos: ");
    scanf("%d %d %d %d", &x, &y, &z, &temp);
    x = x*60*60;
    y = y*60;
    temp = temp + x + y + z;
    seg = temp%60;
    temp = temp/60;
    min = temp%60;
    temp = temp/60;
    hora = temp;
    printf("O horario do final do experimento em horas, minutos e segundos eh: %d %d %d", hora, min ,seg);
    return 0;
}
*/

/*Exercicio 50
int main(){
    int idade, ano;
    printf("Digite sua idade e o ano atual: ");
    scanf("%d %d", &idade, &ano);
    printf("O ano de nascimento eh: %d", -1*(ano-idade));
    return 0;
}
*/

/*Exercicio 51
int main(){
    int x, y;
    printf("Digite as coordenadas x e y do seu ponto: ");
    scanf("%d %d", &x, &y);
    printf("Sua distancia ate a origem eh: %f", sqrt(x*x*1.0 + y*y));
    return 0;
}
*/

/*Exercicio 52
int main(){
    float a, b, c, x, y, z, prem;
    printf("Digite o valor do premio e quanto cada um investiu na aposta: ");
    scanf("%f %f %f %f", &prem, &x, &y, &z);
    a = x/(x+y+z);
    b = y/(x+y+z);
    c = z/(x+y+z);
    printf("A quantidade que cada um ira receber eh: %f %f %f", prem*a, prem*b, prem*c);
    return 0;
}
*/

/*Exercicio 53
int main(){
    float c, l, p;
    printf("Digite o comprimento, a largura e o preço do metro de tela respectivamente: ");
    scanf("%f %f %f", &c, &l, &p);
    printf("O preço para cercar esse terreno com tela eh: %f", (c+l+c+l)*p);
    return 0;
}
*/

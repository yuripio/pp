#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Exercicio 1
int main(){
    float x, y;
    printf("Digite o valor dos dois numeros:");
    scanf("%f %f", &x, &y);
    if(x>y){
        printf("O maior numero eh: %f", x);
    }
    else{
        printf("O maior numero eh: %f", y);
    }
    return 0;
}
*/

/*Exercicio 2
int main(){
    float x;
    printf("Digite o valor do numero: ");
    scanf("%f", &x);
    if(x >= 0){
        printf("A raiz desse numero eh: %f", sqrt(x));
    }
    else{
        printf("Numero eh invalido");
    }
    return 0;
}
*/

/*Exercicio 3
int main(){
    float x;
    printf("Digite o valor do numero: ");
    scanf("%f", &x);
    if(x >= 0){
        printf("A raiz desse numero eh: %f", sqrt(x));
    }
    else{
        printf("O quadrado desse numero eh: %f", x*x);
    }
    return 0;
}
*/

/*Exercicio 4
int main(){
    float x;
    printf("Digite o valor do numero: ");
    scanf("%f", &x);
    if(x >= 0){
        printf("O quadrado desse numero eh: %f\n", x*x);
        printf("A raiz desse numero eh: %f", sqrt(x));
    }
    return 0;
}
*/

/*Exercicio 5
int main(){
    int x;
    printf("Digite um numero inteiro:");
    scanf("%d", &x);
    if(x%2 == 0){
        printf("O numero eh par");
    }
    else{
        printf("O numero eh impar");
    }
    return 0;
}
*/

/*Exercicio 6
int main(){
    int x, y;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    if(x>y){
        printf("O maior numero eh %d e a diferenca ente os dois eh %d", x, x-y);
    }
    else{
        printf("O maior numero eh %d e a diferenca ente os dois eh %d", y, y-x);
    }
    return 0;
}
*/

/*Exercicio 7
int main(){
    float x, y;
    printf("Digite os dois numeros: ");
    scanf("%f %f", &x, &y);
    if(x>y){
        printf("O maior numero eh: %f", x);
    }
    else{
        if(x<y){
            printf("O maior numero eh: %f", y);
        }
        else{
            printf("Os dois numeros sao iguais");
        }
    }
    return 0;
}
*/

/*Exercicio 8
int main(){
    float x, y;
    printf("Digite o valor das duas notas: ");
    scanf("%f %f", &x, &y);
    if(x>= 0.0 && x<=10.0 && y>=0.0 && y<=10.0){
        printf("A media das notas eh: %f", (x+y)/2);
    }
    else{
        printf("Alguma das notas nao possui valor valido");
    }
    return 0;
}
*/

/*Exercicio 9
int main(){
    float x, y;
    printf("Digite o valor do salario do trabalhador e o valor da prestacao de um emprestimo respectivamente: ");
    scanf("%f %f", &x, &y);
    if(y > 0.2*x){
        printf("Emprestimo nao concedido");
    }
    else{
        printf("Emprestimo concedido");
    }
    return 0;
}
*/

/*Exercicio 10
int main(){
    float h;
    char y;
    printf("Digite a altura e o sexo da pessoa(m para masculino e f para feminino): ");
    scanf("%f %c", &h, &y);
    if(y == 'm' || y == 'M'){
        printf("O peso ideal eh: %f", (72.7*h)-58.0);
    }
    else{
        printf("O peso ideal eh: %f", (62.1*h)-44.7);
    }
    return 0;
}
*/

/*Exrecicio 11
int main(){
    int x, y, z, w;
    printf("Digite o numero inteiro: ");
    scanf("%d", &x);
    y = x/100;
    z = (x%100)/10;
    w = x%10;
    if(x>0){
        printf("A soma dos algarismos desse numero eh: %d", y+z+w);
    }
    else{
        printf("Numero invalido");
    }
    return 0;
}
*/

/*Exercicio 12
int main(){
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    if(x<0){
        printf("Numero invalido");
    }
    else{
        printf("O logaritmo desse numero eh: %f", log10(x));
    }
    return 0;
}
*/

/*Exercicio 13
int main(){
    float p1, p2, p3, med;
    printf("Digite as notas das tres provas respectivamente: ");
    scanf("%f %f %f", &p1, &p2, &p3);
    med = ((p1*1) + (p2*1) + (p3*2))/(1+1+2);
    if(med >= 60){
        printf("Aprovado, media: %f", med);
    }
    else{
        printf("Reprovado, media: %f", med);
    }
    return 0;
}
*/

/*Exercicio 14
int main(){
    float tl, as, ef, med;
    printf("Digite o valor da nota do trabalho final, da avaliação semestral e do exame final respectivamente: ");
    scanf("%f %f %f", &tl, &as, &ef);
    med = ((tl*2)+(as*3)+(ef*5))/10;
    if(med >= 5.0){
        printf("Aprovado com media de %f", med);
    }
    else{
        if(med <= 2.9){
            printf("Reprovado com media de %f", med);
        }
        else{
            printf("Recuperacao com media de %f", med);
        }
    }
    return 0;
}
*/

/*Exercicio 15
int main(){
    int x;
    printf("Escreva um numero de 1 a 7: ");
    scanf("%d", &x);
    switch(x){
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda-feira");
        break;
    case 3:
        printf("Terca-feira");
        break;
    case 4:
        printf("Quarta-feira");
        break;
    case 5:
        printf("Quinta-feira");
        break;
    case 6:
        printf("Sexta-feira");
        break;
    case 7:
        printf("Sabado");
        break;
    }
    return 0;
}
*/

/*Exercicio 16
int main(){
    int x;
    printf("Escreva um numero de 1 a 12: ");
    scanf("%d", &x);
    switch(x){
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("Marco");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("Dezembro");
        break;
    }
    return 0;
}
*/

/*Exercicio 17
int main(){
    float bm, bM, h;
    printf("Digite o valor da base menor, base maior e da altura do trapezio respectivamente:");
    scanf("%f %f %f", &bm, &bM, &h);
    if(bm > 0.0 && bM > 0.0){
        printf("A area do trapezio eh igual a: %f", ((bm + bM)*h)/2);
    }
    else{
        printf("Algum valor eh invalido");
    }
    return 0;
}
*/

/*Exercicio 18
int main(){
    int menu;
    float x, y;
    printf("Escolha uma dessas operacoes: 1 = soma\n 2 = subtracao\n 3 = multiplicacao\n 4 = divisao\n");
    scanf("%d", &menu);
    switch(menu){
    case 1:
        printf("Digite dois valores numericos: ");
        scanf("%f %f", &x, &y);
        printf("O valor dessa soma eh: %f", x+y);
        break;
    case 2:
        printf("Digite dois valores numericos: ");
        scanf("%f %f", &x, &y);
        printf("O valor dessa subtracao eh: %f", x-y);
        break;
    case 3:
        printf("Digite dois valores numericos: ");
        scanf("%f %f", &x, &y);
        printf("O valor dessa multiplicacao eh: %f", x*y);
        break;
    case 4:
        printf("Digite dois valores numericos: ");
        scanf("%f %f", &x, &y);
        printf("O valor dessa divisao eh: %f", x/y);
        break;
    }
    return 0;
}
*/

/*Exercicio 19
int main(){
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    if(x%3==0 && x%5!=0){
        printf("Esse numero eh divisivel por 3 e nao eh por 5");
    }
    else{
        if(x%3!=0 && x%5==0){
            printf("Esse numero eh divisivel por 5 e nao eh por 3");
        }
        else{
            printf("Esse numero eh divisivel por 3 e 5 simultaneamente ou por nenhum dos dois");
        }
    }
    return 0;
}
*/

/*Exercicio 20
int main(){
    float A, B, C;
    printf("Digite o valor dos tres lados do triangulo: ");
    scanf("%f %f %f", &A, &B, &C);
    if(A <= 0.0 || B <= 0.0 || C <= 0.0){
        printf("Algum valor nao eh valido");
    }
    else{
        if(A >= B+C || B >= A+C || C >= A+B){
            printf("Algum valor nao eh valido");
        }
        else{
            if(A == B && A == C && B == C){
                printf("O triangulo eh equilatero");
            }
            else{
                if(A == B || A == C || B == C){
                    printf("O triangulo eh isosceles");
                }
                else{
                    printf("O triangulo eh escaleno");
                }
            }
        }
    }
    return 0;
}
*/

/*Exercicio 21
int main(){
    int menu;
    float x, y;
    printf("Escolha uma dessas operacoes: 1 = Soma de 2 numeros\n 2 = Diferenca entre 2 numeros\n 3 = Produto entre dois numeros\n 4 = Divisao entre dois numeros\n");
    scanf("%d", &menu);
    switch(menu){
    case 1:
        printf("Digite dois valores numericos: ");
        scanf("%f %f", &x, &y);
        printf("O valor dessa soma eh: %f", x+y);
        break;
    case 2:
        printf("Digite dois valores numericos: ");
        scanf("%f %f", &x, &y);
        if(x >= y){
            printf("A diferenca entre esse dois numeros eh: %f", x-y);
        }
        else{
            printf("A diferenca entre esses dois numeros eh: %f", y-x);
        }
        break;
    case 3:
        printf("Digite dois valores numericos: ");
        scanf("%f %f", &x, &y);
        printf("O produto da multiplicacao desses dois numeros eh: %f", x*y);
        break;
    case 4:
        printf("Digite dois valores numericos: ");
        scanf("%f %f", &x, &y);
        if(y == 0){
            printf("O divisor nao pode ser zero");
        }
        else{
            printf("O resultado da divisao desses dois numeros eh: %f", x/y);
        }
        break;
    default:
        printf("A opcao escolhida nao eh valida");
    }
    return 0;
}
*/

/*Exercicio 22
int main(){
    int idade, tempo;
    printf("Escreva a idade e o tempo de trabalho do trabalhador: ");
    scanf("%d %d", &idade, &tempo);
    if(idade >= 65){
        printf("Pode se aposentar");
    }
    else{
        if(tempo >= 30){
            printf("Pode se aposentar");
        }
        else{
            if(idade >= 60 && tempo >= 25){
                printf("Pode se aposentar");
            }
            else{
                printf("Nao pode se aposentar");
            }
        }
    }
    return 0;
}
*/

/*Exercicio 23
int main(){
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);
    if(ano%400 == 0){
        printf("O ano eh bissexto");
    }
    else{
        if(ano%4 == 0 && ano%100 != 0){
            printf("O ano eh bissexto");
        }
        else{
            printf("O ano nao eh bissexto");
        }
    }
    return 0;
}
*/

/*Exercicio 24
int main(){
    int x;
    float y;
    printf("Digite o valor do produto: ");
    scanf("%f", &y);
    printf("Agora selecione o estado de destino: 1-MG\n 2-SP\n 3-RJ\n 4-MS\n");
    scanf("%d", &x);
    switch(x){
    case 1:
        printf("O preco final do pruduto eh: %f", y+y*0.07);
        break;
    case 2:
        printf("O preco final do pruduto eh: %f", y+y*0.12);
        break;
    case 3:
        printf("O preco final do pruduto eh: %f", y+y*0.15);
        break;
    case 4:
        printf("O preco final do pruduto eh: %f", y+y*0.08);
        break;
    }
    return 0;
}
*/

/*Exercicio 25
int main(){
    float a, b, c, t, x1, x2;
    printf("Digite os valores de a, b e c correspondentes a equacao de segundo grau respectivamente: ");
    scanf("%f %f %f", &a, &b, &c);
    t = (b*b)-4*a*c;
    if(a == 0){
        printf("Nao eh equacao de segundo grau");
    }
    else{
        if(t < 0){
            printf("Nao existe raiz");
        }
        else{
            if(t == 0){
                printf("Raiz unica: %f", ((-b)+ t)/2*a);
            }
            else{
                printf("Duas raizes: %f %f", ((-b)+ t)/2*a, ((-b)- t)/2*a );
            }
        }
    }
    return 0;
}
*/

/*Exercicio 26
int main(){
    float k, l, x;
    printf("Escreva a distancia em km percorrida e a quantidade de litros de gasolina gastos respectivamente: ");
    scanf("%f %f", &k, &l);
    x = k/l;
    if(x < 8){
        printf("Venda o carro!");
    }
    else{
        if(x > 14){
            printf("Super economico!");
        }
        else{
            printf("Economico!");
        }
    }
    return 0;
}
*/

/*Exrcicio 27
int main(){
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    switch(idade){
    case 5:
        printf("Infantil A");
        break;
    case 6:
        printf("Infantil A");
        break;
    case 7:
        printf("Infantil A");
        break;
    case 8:
        printf("Infantil B");
        break;
    case 9:
        printf("Infantil B");
        break;
    case 10:
        printf("Infantil B");
        break;
    case 11:
        printf("Juvenil A");
        break;
    case 12:
        printf("Juvenil A");
        break;
    case 13:
        printf("Juvenil A");
        break;
    case 14:
        printf("Juvenil B");
        break;
    case 15:
        printf("Juvenil B");
        break;
    case 16:
        printf("Juvenil B");
        break;
    case 17:
        printf("Juvenil B");
        break;
    default:
        printf("Senior");
        break;
    }
    return 0;
}
*/

/*Exercicio 29
int main(){
    int menu;
    float x, y ,z;
    printf("Digite tres valores numericos: ");
    scanf("%f %f %f", &x, &y, &z);
    printf("Escolha uma opcao de medias: 1- Geometrica\n 2-Ponderada\n 3-Harmonica\n 4-Aritmetica\n");
    scanf("%d", &menu);
    switch(menu){
    case 1:
        printf("A media geometrica eh: %f", cbrt(x*y*z));
        break;
    case 2:
        printf("A media ponderada eh: %f", ((1*x)+(2*y)+(3*z))/3 );
        break;
    case 3:
        printf("A media harmonica eh: %f", 1/((1/x)+(1/y)+(1/z)));
        break;
    case 4:
        printf("A media aritmetica eh: %f", (x+y+z)/3);
        break;
    }
    return 0;
}
*/

/*Exercicio 30
int main(){
    float x, y, z;
    printf("Escreva tres numeros: ");
    scanf("%f %f %f", &x, &y, &z);
    if(x < y && y < z){
        printf("%f %f %f", x, y, z);
    }
    else{
        if(x < z && z < y){
        printf("%f %f %f", x, z, y);
        }
        else{
            if(y < x && x < z){
            printf("%f %f %f", y, x, z);
            }
            else{
                if(y < z && z < x){
                printf("%f %f %f", y, z, x);
                }
                else{
                    if(z < x && x < y){
                    printf("%f %f %f", z, x, y);
                    }
                    else{
                    printf("%f %f %f", z, y, x);
                    }
                }
            }
        }
    }
    return 0;
}
*/

/*Exercicio 31
int main(){
    float x, y;
    printf("Escreva a altura e peso da pessoa respectivamente: ");
    scanf("%f %f", &x, &y);
    if(x < 1.20 && y <= 60){
    printf("A");
    }
    else{
        if(x < 1.20 && y <= 60){
        printf("A");
        }
        else{
            if(x < 1.20 && y > 60 || y <= 90 ){
            printf("D");
            }
            else{
                if(x < 1.20 && y > 90){
                printf("G");
                }
                else{
                    if(x >= 1.20 || x <= 1.70 && y <= 60){
                    printf("B");
                    }
                    else{
                        if(x >= 1.20 || x <= 1.70 && y > 60 || y <= 90 ){
                        printf("E");
                        }
                        else{
                            if(x >= 1.20 || x <= 1.70 && y > 90){
                            printf("H");
                            }
                            else{
                                if(x > 1.70 && y <= 60){
                                printf("C");
                                }
                                else{
                                    if(x < 1.70 && y > 60 || y <= 90 ){
                                    printf("F");
                                    }
                                    else{
                                        printf("I");
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
*/

/*Exercicio 32
int main(){
    int x;
    float y;
    printf("Digite o numero de produtos comprados: ");
    scanf("%f", &y);
    printf("Escolha o codigo do pedido: 100-Cachorro Quente\n 101-Bauru Simples\n 102-Bauru com Ovo\n 103-Hamburguer\n 104-Cheeseburguer\n 105-Suco\n 106-Refrigerante\n");
    scanf("%d", &x);
    switch(x){
    case 100:
        printf("Valor eh: %f", y*1.20);
        break;
    case 101:
        printf("Valor eh: %f", y*1.30);
        break;
    case 102:
        printf("Valor eh: %f", y*1.50);
        break;
    case 103:
        printf("Valor eh: %f", y*1.20);
        break;
    case 104:
        printf("Valor eh: %f", y*1.70);
        break;
    case 105:
        printf("Valor eh: %f", y*2.20);
        break;
    case 106:
        printf("Valor eh: %f", y*1.00);
        break;
    }
}
*/

/*Exercicio 33
int main(){
    float x;
    printf("Digite o valor do produto: ");
    scanf("%f", &x);
    if(x < 50.0){
        printf("O novo valor do produto com reajuste eh: %f", x+x*0.05);
    }
    else{
        if(x > 100.0){
            printf("O novo valor do produto com reajuste eh: %f", x+x*0.15 );
        }
        else{
            printf("O novo valor do produto com reajuste eh: %f", x+x*0.10);
        }
    }
    return 0;
}
*/

/*Exercicio 34
int main(){
    int x;
    float y;
    printf("Digite o valor da nota e o numero de faltas do aluno respectivamente: ");
    scanf("%d %f", &x, &y);
    if(x <= 20 && 0.0 <= y <= 3.9){
        printf("E");
    }
    else{
        if(x <= 20 && 4.0 <= y <= 4.9){
        printf("D");
        }
        else{
            if(x <= 20 && 5.0 <= y <= 7.4){
            printf("C");
            }
            else{
                if(x <= 20 && 7.5 <= y <= 8.9){
                printf("B");
                }
                else{
                    if(x <= 20 && 9.0 <= y <= 10.0){
                    printf("A");
                    }
                    else{
                        if(x > 20 && 0.0 <= y <= 3.9){
                        printf("E");
                        }
                        else{
                            if(x > 20 && 4.0 <= y <= 4.9){
                            printf("E");
                            }
                            else{
                                if(x > 20 && 5.0 <= y <= 7.4){
                                printf("D");
                                }
                                else{
                                    if(x > 20 && 7.5 <= y <= 8.9){
                                    printf("C");
                                    }
                                    else{
                                        printf("B");

                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
*/

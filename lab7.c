#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Exercicio 1
int main(){
    char str[100];
    printf("Digite uma string: ");
    gets(str);
    printf("A string eh : ");
    puts(str);
    return 0;
}
*/

/*Exercicio 2
int main(){
    char str[100];
    int i, cont = 0;
    printf("Digite uma string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == '1')
            cont++;
    }
    printf("O numero de 1's eh: %d", cont);
    return 0;
}
*/

/*Exercicio 3
int main(){
    char str[100], c;
    int i, j;
    printf("Digite uma string: ");
    gets(str);
    for(i = 0, j = strlen(str); i < j/2; i++){
        c = str[i];
        str[i] = str[j-1-i];
        str[j-1-i] = c;
    }
    printf("A string invertida eh : %s", str);
    return 0;
}
*/

/*Exercicio 4
int main(){
    char str[100], c;
    int i, cont = 0;
    printf("Digite uma string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            cont++;
    }
    printf("A string possui %d vogais\n", cont);
    printf("Escolha um caracter para substituir as vogais: ");
    scanf("%c", &c);
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            str[i] = c;
    }
    printf("A string final eh %s", str);
    return 0;
}
*/

/*Exercicio 5
int main(){
    char str[100];
    int i;
    printf("Digite uma string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++){
        str[i] += 32;
    }
    printf("A string final eh: %s", str);
}
*/

/*Exercicio 6
int main(){
    char str[100];
    int i;
    printf("Digite uma string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++){
        str[i] -= 32;
    }
    printf("A string final eh: %s", str);
}
*/

/*Exercicio 7
int main(){
    char str[100];
    int i;
    printf("Digite uma string: ");
    gets(str);
    printf("A string possui %d caracters\n", strlen(str));
    for(i = 0; str[i] != '\0'; i++)
        if(str[i] == ' '){
            str[i] = str[i+1];
            i++;
        }
    printf("A string final eh: %s", str);
    return 0;
}
*/

/*Exercicio 8
int main(){
    char str[100], L1, L2;
    int i;
    printf("Digite uma string: ");
    gets(str);
    printf("Digite a letra que deseja substituir: ");
    scanf("%c", &L1);
    fflush(stdin);
    printf("Digite a letra que vai ser a substituta: ");
    scanf("%c", &L2);
    for(i = 0; str[i] != '\0'; i++)
        if(str[i] == L1)
            str[i] = L2;
    printf("A string final eh: %s", str);
    return 0;
}
*/

/*Exercicio 9
int main(){
    char str[5][100];
    float x[5];
    int i, j;
    for(i = 0; i < 5; i++){
    printf("Digite o modelo do carro: ");
    gets(str[i]);
    printf("Digite a quilometragem que ele faz com um litro: ");
    scanf("%f", &x);
    fflush(stdin);
    }
    str[j][100] = str[0];
    x[j] = x[0];
    for(i = 1; i < 5; i++){
        if(x[i] > x[j]){
            x[j] = x[i];
            str[j][100] = str[i];
        }
    }
    printf("O carro mais economico eh: %s\n", str[j]);
    for(i = 0; i < 5; i++){
        printf("O carro %s comsome %f litros para percorrer 1000 quilometros\n", str[i], x[i]);
    }
    return 0;
}
*/

/*Exercicio 10
int main(){
    char str[100];
    float x;
    printf("Digite o nome da mercadoria: ");
    gets(str);
    printf("Digite o valor da mercadoria: ");
    scanf("%f", &x);
    printf("A mercadoria %s de valor total %f recebeu um desconto de %f e tem o valor final de %f", str, x, x*0.1, x-x*0.1);
    return 0;
}
*/

/*Exercicio 11
int main(){
    char s[100];
    int i, j;
    printf("Digite a string: ");
    gets(s);
    printf("Digite os valores nao negativos de i e j: ");
    scanf("%d %d", &i, &j);
    printf("%s\[", s);
    for(; i <=j; i++)
        printf("%d", i);
    printf("\]");
    return 0;
}
*/

/*Exercicio 12
int main(){
    char str[100];
    int i;
    printf("Digite a frase a ser codificada: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ' ')
            str[i] = str[i];
        else
            str[i] = str[i] - 29;
    }
    printf("A mensagem codificada eh: ");
    puts(str);
    return 0;
}
*/

/*Exercicio 13
int main(){
    char str[100];
    int i, j, cont = 0;
    printf("Digite a palavra: ");
    gets(str);
    j = strlen(str)-1;
    for(i = 0; i <= j; i++){
        if(str[i] != str[j])
            cont++;
        j--;
    }
    if(cont == 0)
        printf("A palavra %s eh um palindromo", str);
    else
        printf("A palavra %s nao eh um palindromo", str);
    return 0;
}
*/

/*Exercicio 14
int main(){
    char str1[100], str2[100];
    int i, j = 0, N;
    printf("Digite a primeira palavra: ");
    gets(str1);
    printf("Digite a segunda palavra: ");
    gets(str2);
    printf("Digite o valor de caracteres que quer concatenar: ");
    scanf("%d", &N);
    for(i = 0; i < '\0'; i++)
        str1[i] = str1[i];
    for(i = i; i <= N; i++){
        str1[i] = str2[j];
        j++;
    }
    str1[i+1] = '\0';
    puts(str1);
    return 0;
}
*/

/*Exercicio 15
int main(){
    char str1[21], str2[21], str3[41], c1 , c2;
    int x = 0, i, cont = 0, ori = 0, tam = 0;
    do{
    do{
        printf("Escolha uma opcao:\n");
        printf("1 - Ler uma string S1\n2 - Imprimir o tamanho da string S1\n3 - Comparar a string S1 com uma nova string S2 e imprimir o resultado da comparacao\n4 - Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenacao\n5 - Imprimir a string S1 de forma reversa\n6 - Contar quantas vezes um dado caractere aparece na string S1.\n7 - Substituir a primeira ocorrencia do caractere C1 da string S1 pelo caractere C2.\n8 - Verificar se uma string S2 eh substring de S1.\n9 - Retornar uma substring da string S1\n10 - SAIR.\n");
        scanf("%d", &x);
        fflush(stdin);
    }while(x < 1 || x > 10);
    switch(x){
        case 1:
            gets(str1);
            break;
        case 2:
            printf("%d\n", strlen(str1));
            break;
        case 3:
            gets(str2);
            printf("%d\n",strcmp(str1, str2));
            break;
        case 4:
            gets(str2);
            strcat(str3, str1);
            strcat(str3, str2);
            printf("%s\n", str3);
            break;
        case 5:
            printf("%s\n", strrev(str1));
            break;
        case 6:
            scanf("%c", &c1);
            for(i = 0; str1[i] != '\0'; i++)
                if(str1[i] == c1);
                    cont++;
            printf("%d\n", cont);
            break;
        case 7:
            scanf("%c", &c1);
            fflush(stdin);
            scanf("%c", &c2);
            for(i = 0; str1[i] != '\0'; i++){
                if(str1[i] == c1);
                    str1[i] = c2;
                break;
            }
            puts(str1);
            printf("\n");
            break;
        case 8:
            gets(str2);
            strstr(str1, str2);
            break;
        case 9:
            printf("Digite de qual posicao se originara a substring: ");
            scanf("%d", &ori);
            printf("Digite quantas posicoes essa substring tera: ");
            scanf("%d", &tam);
            for(i = 0; i < tam; i++){
                str2[i] = str1[ori];
                ori++;
            }
            puts(str2);
            printf("\n");
            break;
    }
    }while(x != 10);
    return 0;
}
*/

/*Exercicio 16
int main(){
    char str[] = {7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530};
    int i, j, maior = 0;
    str[j] = str[0];

    for(i = 0; str[i] != '\0'; i++){
            if(str[i]*str[i+1]*str[i+2]*str[i+3]*str[i+4] > maior){
                maior = str[i]*str[i+1]*str[i+2]*str[i+3]*str[i+4];
                str[j] = str[i];
            }
    }
    printf("A sequencia de digitos eh %s %s %s %s %s", str[j], str[j+1], str[j+2], str[j+3], str[j+4]);
    return 0;
}
*/

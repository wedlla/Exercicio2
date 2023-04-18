/*01. Faça um programa que receba um número e imprima ele caso seja maior que 20.
#include<stdio.h>

int main(){
    int valor;

    printf("Digite um numero:\n");
    scanf("%d", &valor);

    if(valor>20){
        printf("Valor = %d", valor);

    }else

    printf("Menor que 20\n");

return 0;
}

02. Faça um programa que receba dois números. Calcule a soma dos dois números. Caso a
soma seja maior que 10, imprima o resultado da soma.

#include<stdio.h>
int main(){

int n1,n2,soma;

printf("Digite dois numeros\n");
scanf("%d %d", &n1,&n2);
soma = n1 + n2;

if(soma>10){
    printf("Soma = %d", soma);

}else
printf("Soma menor que 10");


return 0;
}

03. Faça um programa que receba um número e imprima se ele é par ou ímpar

#include<stdio.h>

int main(){

int valor;

printf("Digite um numero\n");
scanf("%d", &valor);

if(valor % 0){

    printf("Numero par", valor);
}else
printf("Numero impar");

return 0;

}
04. Faça um programa que receba um número e imprima se ele é positivo, negativo ou
nulo (zero).

#include<stdio.h>

int main(){
    float valor;

    printf("Digite um numero\n");
    scanf("%f", &valor);

    if(valor<0){
        printf("Numero negativo", valor);

    }
    else
        {
     if(valor>0){
        printf("Numero positivo", valor);
     }
    else{
        printf("Numero nulo", valor);
    }

    }

    return 0;
}
05. Faça um programa que receba dois números e efetue a soma deles. Caso o valor
somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8; caso
o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.

#include<stdio.h>

int main(){

    int n1,n2,soma;

    printf("Digite dois numeros\n");
    scanf("%d %d", &n1,&n2);
    soma = n1 + n2;

    if(soma>20){
        printf("Soma = %d", soma+8);
    }
    else
        {
        printf("Soma = %d", soma-5);
    }

    return 0;
}
06. Faça um programa que receba um número. Caso o número seja positivo, imprima sua
raiz; caso contrário, imprima seu quadrado

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
 float valor,raiz,quadrado;

 printf("Digite um numero\n");
 scanf("%f", &valor);

 if(valor>0){

 printf("\nA RAIZ QUADRADA DO NUMERO E:%f",sqrt(valor));
}else{
printf("\nO QUADRADO DO NUMERO E:%f",pow(valor,2));

 }

    return 0;
}
07. Faça um programa que receba um número e imprima a mensagem: “é múltiplo de 3”
ou “não é múltiplo de 3”.

#include<stdio.h>
#include<stdlib.h>

int main(){

int valor;
printf("Digite um numero\n");
scanf("%d", &valor);

if(valor%3==0){
    printf("E multiplo de 3", valor);

}else{
    printf("Nao e multiplo de 3", valor);
}
return 0;
}
08. Faça um programa que receba um número a e um número b. Verifique se a é divisível
por b ou não e imprima na tela essa informação

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;
    printf("Digite dois numeros\n");
    scanf("%d %d", &a,&b);

    if(a%b==0){
        printf("a e divisivel por b");
    }else{
        printf("a nao e divisivel por b");
    }
    return 0;
}
09. Faça um programa que receba dois inteiros diferentes. Imprima na tela o maior e o
menor número.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;
    printf("Digite dois numeros\n");
    scanf("%d %d", &a,&b);

 if (a > b){
    printf("O valor maior e:%d\nO valor menor é %d", a, b);
    }else{
         printf("O valor maior e:%d\nO valor menor é %d", b, a);
    }
    return 0;
}
10. Faça um programa que receba quatro números e imprima o maior e o menor número.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1,n2,n3,n4,menor,maior;
    printf("Digite quatros numeros\n");
    scanf("%d %d %d %d", &n1,&n2,&n3,&n4);

    menor=n1;
    maior=n1;

    if(menor>n2)
        menor=n2;
    if(menor>n3)
        menor=n3;
    if(menor>n4)
        menor=n4;
    if(maior<n2)
        maior=n2;
    if(maior<n3)
        maior=n3;
    if(maior<n4)
        maior=n4;
    printf("Menor:%d\nMaior:%d\n",menor,maior);


    return 0;
}
11. Faça um programa que receba três números e imprima-os em ordem crescente.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n1,n2,n3,aux;
    printf("Digite quatros numeros\n");
    scanf("%d %d %d", &n1,&n2,&n3);
    if(n1>n2&&n1>n3&&n2>n3){
        printf("Ordem crescente:%d %d %d\n",n3,n2,n1);
    }
    else if(n1>n2&&n1>n3&&n3>n2){
    printf("Ordem crescente:%d %d %d\n",n2,n3,n1);
    }
    else if(n2>n1&&n2>n3&&n1>n3){
        printf("Ordem crescente:%d %d %d\n",n3,n1,n2);
    }
    else if(n2>n3&&n2>n1&&n3>n1){
        printf("Ordem crescente:%d %d %d\n",n1,n3,n2);
    }
    else if(n3>n1&&n3>n2&&n1>n2){
        printf("Ordem crescente:%d %d %d\n",n2,n1,n3);
    }
    else
        printf("Ordem crescente:%d %d %d\n",n1,n2,n3);

    return 0;
}
12. Faça um programa que receba um inteiro e imprima se ele se encontra entre 20 e 90
ou não

#include<stdio.h>
#include<stdlib.h>

int main(){
    int valor;
    printf("Digite um numero\n");
    scanf("%d", &valor);

    if(valor>20&&valor<90){
        printf("o numero se encontra entre 20 e 90");
    }
    else{
        printf("o numero nao se encontra entre 20 e 90");
    }
    return 0;
}
15. Faça um programa que receba a idade de uma pessoa e imprima sua classe eleitoral
(facultativo, obrigatório ou não-eleitor).*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int idade;
    printf("Digite a idade\n");
    scanf("%d", &idade);

    if(idade>=18&&idade<=65){
        printf("Eleitor obrigatorio\n");
    }
    else if(idade>=16&&idade<18||idade>65){
        printf("Eleitor facultativo\n");
    }else{
        printf("Nao eleitor\n");
    }

    return 0;
}








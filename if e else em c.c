#include <stdio.h>
int main(){
    int quant;                                         // variavel
    printf("Digite um numero inteiro qualquer \n");      // escreva Digite...
    scanf("%i", &quant);                                      // leia a variavel quant
    printf("Voce digitou a quantidade = %i \n", quant);  // escreva Você dig... e mostre a variavel
    if (quant > 10) {                                    // condição SE
        printf("MAIOR \n");                               // SE quant > 10, escrever MAIOR
    }
    else {
        if (quant ==10){
            printf("IGUAL \n");
        }
        else {
            printf("MENOR \n");
        }
    }
    printf("Final do programa");
return 0;
}


#include <stdio.h>

int main(){
    float altura = 0;
    printf("Qual sua altura?: ");
    scanf("%f", &altura);
    
    float peso;
    printf("Qual o seu peso?:");
    scanf ("%f", &peso);
    float imc = 0;
    imc = peso/ (altura*altura);
    printf("seu imc é: %.2f\n",imc);
    
    if(imc<18.5){
        printf("peso abaixo do normal");
    } else if(imc>18.5 && imc<=24.9){
        printf("peso normal");
    }
    else if(imc>=25 && imc<=29.9){
        printf("sobrepeso");
    } 
    else if(imc>=30 && imc<=34.9 ){
        printf("obesidade grau 1 ");
    }
    else if (imc >= 35 && imc <= 39.99){
        printf("obsedidade grau 1");
    }
    else{
        printf("Obesidade grau 3");
    }
    
    return 0;
}


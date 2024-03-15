#include <stdio.h>

int resultado = 0;
int valor1,valor2,opcao,i;

int valorPrincipal(){
if (resultado == 0){
  printf ("Digite o valor principal: ");
  scanf  ("%d",&valor1);
}
  else valor1 = resultado;
  }

int zerarResultado(){
   if (resultado != 0){
    char resposta;
    while ((resposta != 's')&&(resposta != 'S')&&(resposta != 'n')&&(resposta != 'N')){
printf ("\nZerar resultado?(S/N): ");
scanf  (" %c",&resposta);
    if (resposta == 's'||resposta == 'S'){
            resultado = 0;
            printf ("ok, zerado\n\n");
        }
    else if (resposta == 'n'||resposta == 'N'){
            printf ("ok, valor registrado: %d\n\n",resultado);
    }
    else printf ("digite s ou n\n");
   }
  } else printf ("\n");
}

int soma(){
valorPrincipal();
 printf ("Valor a somar: ");
 scanf  ("%d",&valor2);
  resultado = valor1 + valor2;
 printf ("Resultado da soma: %d\n",resultado);
 zerarResultado();
}

int subtracao(){
 valorPrincipal();
 printf ("Valor a subtrair: ");
 scanf  ("%d",&valor2);
 resultado = valor1 - valor2;
 printf ("Resultado da subtracao: %d\n",resultado);
 zerarResultado();
}

int multiplicacao(){
 valorPrincipal();
 printf ("Multiplicar por: ");
 scanf  ("%d",&valor2);
 resultado = valor1 * valor2;
 printf ("Resultado da multiplicacao: %d\n",resultado);
 zerarResultado();
}

int divisao(){
 valorPrincipal();
 printf ("Dividir por: ");
 scanf  ("%d",&valor2);
 if (valor2 == 0) {
    printf ("impossivel dividir por 0\n\n");
   }
 else {
 resultado = valor1 / valor2;
 printf ("Resultado da divisao: %d\n",resultado);
 zerarResultado();
 }
}

int fatorial(){
 valorPrincipal();
 if (valor1 == 0){
    resultado = 1;
    printf ("0 fatorial = 1\n");
 }
 else {
        resultado = valor1;
    for (i = 1; i<valor1; i++){
        resultado*=valor1-i;
    }
    printf ("%d fatorial = %d\n",valor1,resultado);
 }
 zerarResultado();
}

int potencia(){
 valorPrincipal();
  printf ("Valor do expoente: ");
  scanf  ("%d",&valor2);
    if (valor2 == 1){
    resultado = valor1;
    printf ("%d elevado a 1 = %d",valor1,valor1);
   }
    else if (valor2 == 0){
    resultado = 1;
    printf ("%d elevado a 0 = 1",valor1);
   }
    else if (valor2 < 0){
    printf ("Impossivel : valor nao inteiro\n");
   }
    else {
       resultado = valor1;
    for (i=1; i<valor2; i++){
        resultado*=valor1;
   }
    printf ("%d elevado a %d = %d",valor1,valor2,resultado);
  }
 zerarResultado();
}
int main (){
 printf ("||CALCULADORA DE NUMEROS INTEIROS||\n\n");
    while (opcao != 7){
printf ("Selecione uma opcao:\n");
printf ("\t1 - Soma\n");
printf ("\t2 - Subtracao\n");
printf ("\t3 - Multiplicacao\n");
printf ("\t4 - Divisao\n");
printf ("\t5 - Fatorial(Apaga o valor registrado)\n");
printf ("\t6 - Potenciacao\n");
printf ("\t7 - Sair\n");
printf ("Opcao: ");
scanf  ("%d",&opcao);

switch (opcao){
case 1:
    soma();
    break;

case 2:
    subtracao();
    break;

case 3:
    multiplicacao();
    break;

case 4:
    divisao();
    break;

case 5:
    fatorial();
    break;

case 6:
    potencia();
    break;

case 7:
    printf ("\nFalou!\n");
    break;
}
}
return 0;
}

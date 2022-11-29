#include<stdio.h>
#include<stdlib.h>

int main(){
 int litros;
 float valorAlcool = 2.90, somaAlcool1, somaDesconto1, somaAlcool2, somaDesconto2;
 float somaDesconto3, valorGasolina = 3.30, somaGasolina1, somaDesconto4, somaGasolina2;
 char combustivel;


 printf ("Qual combustivel? \nTecle A para Alcool ou G para gasolina.\n");
 scanf ("%c", &combustivel);

 printf ("Quantos litros voce quer colocar?\n");
 scanf ("%d", &litros);

  if (combustivel == 'A' || combustivel == 'a') {

   if (litros <= 20) {
    somaDesconto1 =  (valorAlcool * 0.03);
    somaAlcool1 = (valorAlcool - somaDesconto1) * litros;

    printf ("Voce vai pagar %f.", somaAlcool1);
   }
   else if (litros > 20 ) {
       somaDesconto2 =  (valorAlcool * 0.05);
        somaAlcool2 = (valorAlcool - somaDesconto2) * litros;

   printf ("Voce vai pagar %f.", somaAlcool2);
   }
   };

 if (combustivel == 'G' || combustivel == 'g') {

 if (litros <= 20) {
    somaDesconto3 =  (valorGasolina * 0.04);
    somaGasolina1 = (valorGasolina - somaDesconto3) * litros;

    printf ("Voce vai pagar %f.", somaGasolina1);
   }

   else if (litros > 20 ) {
       somaDesconto4 =  (valorGasolina * 0.05);
        somaGasolina2 = (valorGasolina - somaDesconto4) * litros;

   printf ("Voce vai pagar %f.", somaGasolina2);
 return 0;
}
};
}

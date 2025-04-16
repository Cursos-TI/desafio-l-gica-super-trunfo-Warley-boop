#include <stdio.h>

int numero1, numero2;
float pib1, pib2;

printf("Bem vindo a comparação de 2 atributos das cartas!\n")
printf("Aqui estão os dois atributos de cada carta, defina os valores:")

printf ("Japão \n");

printf ("PIB: \n");
scanf ("%d", &pib1);

printf ("Número de pontos turísticos: \n");
scanf ("%d", &numero1);


printf ("Suíça \n");

printf ("PIB: \n");
scanf ("%d", &pib2);

printf ("Número de pontos turísticos: \n");
scanf ("%d", &numero2);

char* resultado1 = (pib1 > pib) ? "Japão tem PIB maior" : "Suíça tem PIB maior";
printf ("Vencedor: %s\n", resultado1)

char* resultado2 = (pib1 > pib) ? "Japão tem mais pontos turísticos" : "Suíça tem mais pontos turísticos";
printf ("Vencedor: %s\n", resultado2)


//Depois, usamos o switch
switch(Resultado){
case(resultado1):
printf("o Vencedor em PIB é %s.\n");
break;
caso (resultado2):
printf("o Vencedor em pontos turísticos é %s.\n");
break;
default:
printf("Há empate!\n")
}


    return 0;
}

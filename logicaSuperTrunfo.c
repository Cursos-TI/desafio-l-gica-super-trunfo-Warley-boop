#include <stdio.h>

char estado1, estado2, codigo1, codigo2, cidade1, cidade2;
int populacao1, populacao2, numero1, numero2;
float area1, area2, pib1, pib2;



printf ("Carta 1 \n");
printf ("Código: \n");
scanf ("%d", &codigo1);

printf ("Nome: \n");
scanf ("%s", &cidade1);

printf ("População: \n");
scanf ("%f", &populacao1);

printf ("Área: \n");
scanf ("%d", &area1);

printf ("PIB: \n");
scanf ("%d", &pib1);

printf ("Número de pontos turísticos: \n");
scanf ("%d", &numero1);


printf ("Carta 2 \n");
printf ("Código: \n");
scanf ("%d", &codigo2);

printf ("Nome: \n");
scanf ("%s", &cidade2);

printf ("População: \n");
scanf ("%f", &populacao2);

printf ("Área: \n");
 scanf ("%d", &area2);

printf ("PIB: \n");
scanf ("%d", &pib2);

printf ("Número de pontos turísticos: \n");
scanf ("%d", &numero2);

int carta1 = 20000;
int carta2 = 21000;

switch (Carta1)
{
case 20000:
printf("A carta 1 possui atributos melhores que a carta 2.\n");
break;

case 21000:
printf("A carta 2 possui atributos melhores que a carta 1.\n");
break;
default
printf("Ambas cartas possuem os mesmos atributos\n")


    return 0;
}

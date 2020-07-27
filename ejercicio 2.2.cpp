#include<stdio.h>
#include<stdlib.h>
#include<OperacionesMatematicasSimples.h>

main()
{ 
int a,b;

printf("\nEJERCICIO 2.2 \n\n");
printf("Proceda a ingresar los valores enteros deseados");

printf("\nValor de A: ");
scanf("%d",&a);

printf("Valor de B: ");
scanf("%d",&b);

printf("\nLa Suma de los valores de A y B es: %d",suma(a,b));
printf("\nLa Resta de los valores de A y B es: %d",resta(a,b));
printf("\nLa Multiplicacion de los valores de A y B es: %d",multiplicacion(a,b));
if(b==0){
	printf("\nNo se pudo efectuar la division");
} else{
	printf("\nLa Division de los valores de A y B es: %.2f",division(a,b));
}
printf("\n\n");
system("pause");
}

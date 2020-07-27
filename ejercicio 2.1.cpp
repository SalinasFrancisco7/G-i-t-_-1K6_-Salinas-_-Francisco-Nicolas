#include<stdio.h>
#include<stdlib.h>

int fibo(int n)
{
    if(n == 0 || n == 1)
       return n;
    else
       return fibo(n - 2) + fibo(n - 1);
}

int main()
{
    printf("\n  FIBONACCI \n\n");
	
    int i, num ;
    
    do
    {
        printf("Ingrese un numero entero y positivo: ");
        scanf("%d",&num);
		printf("No se tan hijo de puta e ingrese un numero correcto: ");
		scanf("%d",&num);
    } while(num < 0);

    printf("\nLa serie es: \n\n\t");

    for(i=0; i<num; i++)
    {
       if(fibo(i) != 0)
          printf(", "); 

        printf("%d", fibo(i));
    }
    return 0;
}

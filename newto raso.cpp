/*** MÉTODO DE NEWTON aplicado a la función y = f(x) = X^2 - 2. Para Obtener el valor donde se anula 
// la función es decir, en cual valor de --- x ---, --- f(x) = 0 ---, que naturalmente es en:
// la raíz cuadrada de 2, aproximadamente - - - 1.41424 - - -
/********************************
/* Este código fuente fue elaborado por el docente Ingeniero Paul Alexander Angarita Jiménez
paul.angarita@correounivalle.edu.co
********************************
Docente de la Universidad del Valle, Zarzal, Valle del Cauca, Colombia, para la asignatura de
Algoritmia y Programación versión 2020-II en época de pandemia Sars-CoV-2

Puede utilizar el presente código a su gusto para modificarlo según sus objetivos. 
Le agradecería si mantiene mis créditos, pero no se encuentra obligado a hacerlo.
Disfrútelo! Enjoy! */

#include <stdio.h>
#include <math.h>
#include <conio.h>

int			IntMaximosIntentos,intentos,n=0;
float		floatRaizInicial,Xnp1=0,Xn=0,FdeXn=0,DerivadaFdeXn=0,error=0,tolerancia=0.001 ;

 
main()

   {

       int a, b;

       printf("Ingrese el valor estimado de la raiz inicial X0:\n");

       scanf("%f", &floatRaizInicial);

       printf("Ingrese el valor del numero maximo de intentos:\n");

       scanf("%d", &IntMaximosIntentos);

		Xn=floatRaizInicial;
		 
     
		do{
		//Aquí puede depositar su función --- f(x) --- si la va a cambiar.
		FdeXn=Xn*Xn-2; ;
		
		//Aquí puede depositar la derivada de su función --- f'(x) --- si la va a cambiar.
		DerivadaFdeXn=2*Xn;
		
		//Este es el algoritmo principal
		Xnp1=Xn-(FdeXn/DerivadaFdeXn);
		//Este es el algoritmo principal
		
		error=Xn-Xnp1;		
		
		if(error<0)
		error=Xnp1-Xn;
		intentos++;
		if(intentos==IntMaximosIntentos)
		error=tolerancia;
		Xn=Xnp1;
		
		}while(error>tolerancia);
		
		printf("\n La raiz mas aproximada es %f, con %d intentos", Xnp1,intentos);
        getch();
 

   }

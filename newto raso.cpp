/*** M�TODO DE NEWTON aplicado a la funci�n y = f(x) = X^2 - 2. Para Obtener el valor donde se anula 
// la funci�n es decir, en cual valor de --- x ---, --- f(x) = 0 ---, que naturalmente es en:
// la ra�z cuadrada de 2, aproximadamente - - - 1.41424 - - -
/********************************
/* Este c�digo fuente fue elaborado por el docente Ingeniero Paul Alexander Angarita Jim�nez
paul.angarita@correounivalle.edu.co
********************************
Docente de la Universidad del Valle, Zarzal, Valle del Cauca, Colombia, para la asignatura de
Algoritmia y Programaci�n versi�n 2020-II en �poca de pandemia Sars-CoV-2

Puede utilizar el presente c�digo a su gusto para modificarlo seg�n sus objetivos. 
Le agradecer�a si mantiene mis cr�ditos, pero no se encuentra obligado a hacerlo.
Disfr�telo! Enjoy! */

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
		//Aqu� puede depositar su funci�n --- f(x) --- si la va a cambiar.
		FdeXn=Xn*Xn-2; ;
		
		//Aqu� puede depositar la derivada de su funci�n --- f'(x) --- si la va a cambiar.
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

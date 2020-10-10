 

#include<stdio.h>
#include<stdlib.h>

int main() {
    int opcion;
	char temp[10];

 do {
 	printf("1) numero telefonico  yenni");
 	printf(" : opcion 1\n");
 	
 	printf("2)  numero telefonico profesor algoritmia");
 	printf(" :opcion  2\n");
 	
 	printf("3)  numero telefonico  armando");
 	printf(" :opcion  3\n");
 	
 	printf("4)  salir\n");
 	fgets(temp,10,stdin);
 	opcion= atoi(temp);
 	//leer
 	 switch(opcion) {
 	 	case 1:
 	 		printf(" el numero es 3128922067 1\n ",opcion);
 	 	break;
 	 	case 2:
 	 		printf(" el numero es 3194865154  2\n",opcion);
 	 	break;
 	 	case 3:
 	 		printf(" el numero es 31684597851 3\n",opcion);
 	 	break;	
 	    case 4:
 	    break;
 	 	default:
 	 		printf("opcion incorrecta\n");	
 	 	break;
 	 	
 	 }
 	    
}while (opcion!= 4);

}

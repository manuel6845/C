

 #include<iostream>
 #include<iomanip>
 #include<stdlib.h>
 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 #include<fstream> 
 using namespace std;
 void escribir();
int main()
 {
 	 escribir();
	system("pause");
	
 	const int v = 340 ;
 	int t,d;
 	
 	system("color 0b");
 	
 	printf("Introduzca los valores \n\n");
 	printf("Valor de Tiempo (en segundos): ");
 	scanf ("%d", &t ); 
 	
 	d=((t*v)/2);
 	
 	printf("\nD(en metros)= %d\n\n", d); 
 	
 
 	system("pause");
 	
	
	
	return 0 ;
}

void escribir()
{
	using namespace std;
	float d,t;
	ofstream archivo; 
	string frase; 
	

	archivo.open("Tabla de valores de variables",ios::out);  
	if(archivo.fail()){  
		
       cout<<"no se puede abrir el archivo";
       exit(1);
	}
      cout<<"\nIngrese su nombre y codigo correspondiente para el encabezado:"<<endl;
   getline(cin,frase);
   
   archivo<<frase; 
   archivo<<"\n\nLa siguientes son las variables definidas de la ecuación en el siguiente orden: \n\n t(segundos):\n\n d(metros):\n\n"<<endl;
   archivo<<t<<endl;
   archivo<<d<<endl;
   archivo.close(); 
   
	
}


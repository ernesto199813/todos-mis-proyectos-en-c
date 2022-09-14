//Guia 4-Ejercicio 15//

#include<stdio.h>

#include<stdlib.h>


/* Programa que muestra los números entre el 100 y el 0  */

//Validacion para entero y flotante//
int b = 1;

int validFormat(const char*, void*);


void clearBuf (void);


int main(){

	
int i,salir;

do{

	
for(i=100; i>=0; i--){
	
if(i==100){printf("\nLos numeros en orden decreciente son  los siguientes:");
}
	
printf("\t(%i)",i);	
}
	
getch();

system("cls");

do{

printf("Desea salir del programa oprima el 2 ");

printf("\nDesea continuar con el programa seleccione otro numero: ");

if(validFormat("%i", & salir)) continue;

b=salir<0;

}while(b);

}while(salir!=2);
	
return 0;}

int validFormat(const char* tipo, void* validar)
{
b=1;

if(!scanf(tipo, validar))
{


system("cls");

clearBuf();

return 1;
}
    
if(getchar() != '\n')
{
	
system("cls");

clearBuf();

return 1;
	}
		  
system("cls");
return 0;
}

void clearBuf()
{
int ch;

while((ch = getchar()) != '\n' && ch != EOF);
}


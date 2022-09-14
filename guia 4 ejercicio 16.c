//Guia 4-Ejercicio 16//

#include<stdio.h>

#include<stdlib.h>

/* Programa que cuenta los numeros de 3 en 3 y realiza la suma de todos los numeros desde 3 hasta 99  */

//Validacion para entero y flotante//
int b = 1;

int validFormat(const char*, void*);


void clearBuf (void);


int main(){

	
int i,aux=0,salir;

do{

	
for(i=3; i<=99; i=i+3){
	
if(i==3){printf("\nLos numeros son los siguientes:");
}
	
printf("\t(%i)",i);	

aux=aux+i;

}

printf("\nEl resultado de la suma es %i",aux);	

aux=0;

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



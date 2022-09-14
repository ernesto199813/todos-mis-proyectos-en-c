//Guia 2-Ejercicio 1 //

#include<stdio.h>

#include<stdlib.h>

/* Programa para hallar el area de un triangulo ingresando por menu su base y su altura */ 


/*funcion void para validar numeros enteros y flotantes  */

void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main (){

int salir;

float area , base=0 ,altura=0 ;	
    
do{
	 	

do {
printf("Ingrese la base del triangulo: ");
	
if(validFormat("%f", &base)) continue;

if(base>=1 && base<=10000){

b=base<1; }

}while(b);	
	
do {

printf("Ingrese la altura del triangulo: ");
	
if(validFormat("%f", &altura)) continue;

if(altura>=1 && altura<=10000){


b=altura<1;}

}while(b);

	
area=(base*altura)/2;
	
	
printf("El area del triangulo es %2.f\n", area);	

getch();

system("cls");

do{

printf("Desea salir del programa oprima el 2 ");

printf("\nDesea continuar con el programa seleccione otro numero: ");

if(validFormat("%i", & salir)) continue;

b=salir<0;

}while(b);

}while(salir!=2);

		
return 0;
}



int validFormat(const char* tipo, void* validar)
{
b=1;//reseteamos la comprobacion de la opcion
//Si la funci�n scanf retorna 0, fue porque hubo una falla en la lectura..
if(!scanf(tipo, validar))
{
//Limpiamos el b�fer del teclado para que la pr�xima lectura se lleve a cabo.
clearBuf();
system("cls");
return 1;
}
//Si no encontramos un salto de l�nea en el b�fer, es porque el usuario no cumpli� con el formato.
if(getchar() != '\n')
{
//Volvemos a limpiar el b�fer para la pr�xima lectura.
clearBuf();
system("cls");
return 1;
}
system("cls");
return 0;
}

void clearBuf()
{
int ch;
//Limpia el b�fer del teclado hasta encontrar un salto de l�nea o fin del archivo
while((ch = getchar()) != '\n' && ch != EOF);}

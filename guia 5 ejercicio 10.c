//Guia 5-Ejercicio 10//

#include<stdio.h>

#include<stdlib.h>

/*Programa para convertir una cadena de caracteres a un entero largo*/



int validar_caracter(char Numero[]);

/*funcion void para validar numeros enteros y flotantes  */

void clearBuf(void);
int validFormat(const char*, void*);
int b=1;


int main(){

long numero,n,salir;


char Numero[8];

do{


do{

printf("Ingrese un numero: ");

scanf("%s", & Numero);

n=validar_caracter(Numero);

}while(n==0);


numero=atoi(Numero);

system("cls");

printf("%i\n", numero);

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

int validar_caracter(char Numero[])
{	
int i;
if((strlen(Numero)) > 8){

system("cls");	
return 0;}

for(i=0; i<strlen(Numero); i++){
	
if(!isdigit(Numero[i])){
			
system("cls");
return 0;
}}
return 1;
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

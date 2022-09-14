//Guia 4-Ejercicio 30//

#include<stdio.h>

#include<stdlib.h>

/* Programa en el cual se ingresa un valor en teclado y este se multiplica por los numeros del 1 al 10  */

/*funcion void para validar numeros enteros y flotantes  */

void clearBuf(void);

int validFormat(const char*, void*);

int b=1;

int main (){

int numero,i,multiplicacion,salir;

do{


do{
	
printf("Ingrese un valor: ");

if(validFormat("%i", & numero))continue;

if(numero>=1 && numero<=100000){


b=numero<1;}
	
}while(b);

for(i=1;i<=10;i++){
	
multiplicacion=numero*i;	
	
printf("%i*%i=%i\n",numero,i,multiplicacion);		
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
b=1;//reseteamos la comprobacion de la opcion

//Si la función scanf retorna 0, fue porque hubo una falla en la lectura..
if(!scanf(tipo, validar))
{
//Limpiamos el búfer del teclado para que la próxima lectura se lleve a cabo.
clearBuf();
system("cls");
return 1;}
    
//Si no encontramos un salto de línea en el búfer, es porque el usuario no cumplió con el formato.
if(getchar() != '\n'){
//Volvemos a limpiar el búfer para la próxima lectura.
clearBuf();

system("cls");

return 1;}
system("cls");
return 0;
}

void clearBuf()
{
    
int ch;
//Limpia el búfer del teclado hasta encontrar un salto de línea o fin del archivo
while((ch = getchar()) != '\n' && ch != EOF);}

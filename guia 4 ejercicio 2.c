//Guia 4-Ejercicio 2//

#include<stdio.h>

#include<stdlib.h>



/*Programa para ingresar por teclado un numero y determinar si es mayor que cero se eleva al cuadrado y se imprime su resultado, si no muestra un mensaje de error   */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;


int main(){

/*n1=numero 1 */	

int salir;

float n1,cuadrado;

do{

	
do{

printf("Ingrese el valor numero 1: ");

if(validFormat("%f", & n1)) continue;

if(n1>=1 && n1<=9999){


b=n1<1;}

if(n1<=0 && n1>-9999){
	
printf("Error el numero debe ser mayor de cero");

getch();

system("cls");	
	
}
	    
}while(b);


cuadrado=n1*n1;

printf("El cuadrado del numero es %.2f", cuadrado);

cuadrado=0;

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


//Guia 4-Ejercicio 6//

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include<math.h>

/*Programa que nos permite introduccir un numero por teclado y nos informa si ese numero es positivo o negativo */


/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main(){

int numero,salir;


do{


do {

printf("Ingrese un numero:");


if(validFormat("%i", & numero)) continue;

if(numero>=-9999 && numero<=9999){


if(numero<0){
	
b=numero>1;

}else{ 

b=numero<1;
}}

	    
    
}while(b);


if(numero>0){
	
printf("El numero es positivo",numero);
}else{ printf("El numero es negativo");
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

return 0;
}

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



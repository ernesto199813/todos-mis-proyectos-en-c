//Guia 4-Ejercicio 7//

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include<math.h>

/*programa que nos permite introducir un n�mero por teclado y nos informe si es par o impar */


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
}else{ b=numero<1;
}}

}while(b);

numero=numero%2;

if(numero==0){
	
printf("El numero es par ",numero);
}else{ printf("El numero es impar");
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

//Si la funci�n scanf retorna 0, fue porque hubo una falla en la lectura..
if(!scanf(tipo, validar))
{
//Limpiamos el b�fer del teclado para que la pr�xima lectura se lleve a cabo.
clearBuf();
system("cls");
return 1;}
    
//Si no encontramos un salto de l�nea en el b�fer, es porque el usuario no cumpli� con el formato.
if(getchar() != '\n'){
//Volvemos a limpiar el b�fer para la pr�xima lectura.
clearBuf();

system("cls");

return 1;}
system("cls");
return 0;
}

void clearBuf()
{
    
int ch;
//Limpia el b�fer del teclado hasta encontrar un salto de l�nea o fin del archivo
while((ch = getchar()) != '\n' && ch != EOF);}



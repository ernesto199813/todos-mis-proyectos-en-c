//Guia 5-Ejercicio 2//

#include<stdio.h>

#include<stdlib.h>


/*Programa para calcular el area de un triangulo ingresando por teclado el valor de la base y el valor de la altura  */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;


int main(){

int salir;

float base=0,altura=0,area=0;


do{

do{

printf("Ingrese el valor de la base del triangulo: ");

if(validformat("%f", & base )) continue;

if(base>=1 && base<=9999){


b=base<0;}

}while(b);

do{

printf("Ingrese el valor de la altura del triangulo: ");

if(validformat("%f", & altura )) continue;

if(altura>=1 && altura<=9999){


b=altura<0;}

}while(b);

area=(base*altura)/2;

printf("El area del triangulo es: %.2f ",area);

getch();

system("cls");

do{

printf("Desea salir del programa oprima el 2 ");

printf("\nDesea continuar con el programa seleccione otro numero: ");

if(validformat("%i", & salir)) continue;

b=salir<0;

}while(b);

}while(salir!=2);


return 0; 
}



int validformat(const char* tipo, void* validar)
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


//Guia 5-Ejercicio 1//

#include<stdio.h>

#include<stdlib.h>

#include<math.h>

/*Programa para calcular el area y longitud de una circunferencia en la cual se ingresa por teclado el valor del radio */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;


int main(){

int salir;

float longitud=0,area=0,radio,pi=3.1415;


do{

do{

printf("Ingrese el radio de la circunferencia: ");

if(validformat("%f", & radio)) continue;

if(radio>=1 && radio<=9999){


b=radio<0;}

}while(b);



longitud=2*radio*pi;

area=pi*pow(radio,2);


printf("La longitud de la circunferencia es: %f ",longitud);

printf("\nEl area de la circunferencia es: %f ",area);

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


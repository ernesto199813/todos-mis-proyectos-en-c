//Guia 4-Ejercicio 34//

#include<stdio.h>

#include<stdlib.h>



/*Programa para determinar cual es el mayor y el menor numero de 5 numeros introduccidos por teclado */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;


int main(){

/*i=contador */
int i,numero,numero_mayor=0,numero_menor=0,salir;



do{


for(i=1;i<=5;i++){

do{

printf("Ingrese el numero %i: ",i);

if(validformat("%i", & numero)) continue;

if(numero>=1 && numero<=1000){


b=numero<1;}

}while(b);

if(numero>numero_mayor){
	
numero_mayor=numero;	
	
}

if(numero_menor==0 && numero>=0||numero<numero_menor)

{
numero_menor= numero;}



}

printf("El numero mayor es %i",numero_mayor);

printf("\nEl numero menor es %i",numero_menor);

numero_mayor=0;

numero_menor=0;

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


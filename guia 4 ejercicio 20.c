//Guia 4-Ejercicio 20//

#include<stdio.h>

#include<stdlib.h>

/* Programa que nos permite contar los multiplos de 3 desde la unidad hasta el numero introduccido por teclado*/

/*funcion void para validar numeros enteros y flotantes  */

void clearBuf(void);

int validFormat(const char*, void*);

int b=1;


int main (){

/*i=contador, residuo= variable que utilizaremos para dividir cada numero entre 3 y determinar si su residuo 0 y eso nos dira cuales son los multiplos de 3   */
	
int i;

int numero,residuo,salir; 

do{


do{
	
printf("Ingrese un valor: ");

if(validFormat("%i", & numero))continue;

if(numero>=1 && numero<=9999){


b=numero<1;}

}while(b);

if(numero>=3){

printf("Los multiplos de 3 son :\t");

for(i=1;i<=numero;i++){
	
residuo=i%3;

if(residuo==0){
		
printf("\n%i",i);}

}}else{ printf("El numero no tiene multiplos de 3");}
	

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

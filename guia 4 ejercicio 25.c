//Guia 4-Ejercicio 25//

#include<stdio.h>

#include<stdlib.h>

/* Programa que nos permite registrar los empleados de una fabrica su peso y saber cuantos pesan hasta 80 kg */

/*funcion void para validar numeros enteros y flotantes  */

void clearBuf(void);

int validFormat(const char*, void*);

int b=1;


int main (){
	
int i,numero,cp1=0,cp2=0,salir;

float peso[200];

do{


do{
	
printf("Ingrese el numero de empleados: ");

if(validFormat("%i", & numero))continue;

b=numero<1;	
	
}while(b);

for(i=1;i<=numero;i++){
	
do{
	
printf("\nEl peso del empleado %i en kg: ", i);

if(validFormat("%f", & peso[i]))continue;

if(peso[i]>=1 && peso[i]<=9999){


b=peso[i]<1;}	
	
}while(b);

if(peso[i]<80){
	
cp1++;	
}

if(peso[i]>80){
	
cp2++;	
}}

printf("\nLos empleados que pesan menos de 80 kg son: %i", cp1);

printf("\nLos empleados que pesan mas de 80 kg son: %i", cp2);	

cp1=0;

cp2=0;

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

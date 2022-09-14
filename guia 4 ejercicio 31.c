// Guia 4-Ejercicio 31//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* programa para ingresar 2 números por teclado, se imprime  los números naturales que hay entre ambos empezando por el más pequeño, contar 

cuántos números hay y cuántos de ellos son pares. */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;


int main(){

/*num1=numero 1 , num2=numero 2 , numax=el valor maximo entre numero 1 y numero 2 , numin= el valor minimo entre numero 1 y numero 2 ,numero_par=se hara una division entre el

valor (2) y si el residuo es 0 el numero es par, i=contador, cp=contador de numeros pares , ci=contador de la cantidad total de numeros */	
 
int num1,num2,numax,numin,numero_par,i,cp=0,ci=0,salir;

do{


do{
	
printf("Ingrese un valor: ");

if(validformat("%i", & num1)) continue;	


if(num1>=0 && num1<=1000){

b=num1<0;}

else{

b=num1>0;}	
	
}while(b);	
	
do{
	
printf("Ingrese otro valor: ");

if(validformat("%i", & num2)) continue;	

if(num2>=0 && num2<=1000){

b=num2<0;}

else{

b=num2>0;}	
	
}while(b);	
		
if(num1>num2){

numin=num2;
	
numax=num1;}

if(num2>num1||num1==num2){
	
numax=num2;

numin=num1;

}

printf("Los numeros naturales son: ");

for(i=numin;i<=numax;i++){
	
printf("%i  ",i);	
	

numero_par=i%2;

if(numero_par==0){
	
cp++;}

if(i<=numax){
	
ci++;}	
}

printf("\nLa cantidad de numeros pares es %i",cp);

printf("\nLa cantidad total de numeros es %i\n",ci);

cp=0;

ci=0;

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


//Guia 4-Ejercicio 1//

#include<stdio.h>

#include<stdlib.h>


/* Programa en el cual se ingresan 5 numeros y se calcula su media */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);

int validFormat(const char*, void*);
int b=1;

int main(){

int i,salir;

float media,suma=0,numero[5];


do{


for(i=1;i<=5;i++){
	
do{

printf("Ingrese el valor numero %i: ",i);

if(validFormat("%f", & numero[i])) continue;


if(numero[i]>=-9999 && numero[i]<=9999){


if(numero[i]>0){

b=numero[i]<1;}else{ b=numero[i]>1;}}
	    
	    
}while(b);
  
	
suma=suma+numero[i];	
			
}

 	
media=(suma)/5;

printf("Su media es %.2f",media);

suma=0;

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

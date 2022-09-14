//Guia 4-Ejercicio 11//

#include<stdio.h>

#include<stdlib.h>



/*Programa para ingresar por teclado un numero y determinar que dia de la semana es y un ciclo repetitivo para que el usuario pueda seguir preguntando o terminar el programa */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;


int main(){

/*n1=numero 1 , opc=opcion */	

int n1,opc;
	
	
do {
	
do{

printf("Ingrese un solo numero ");

if(validFormat("%i", & n1)) continue;


if(n1>=1 && n1<=7){

b=n1<1;}
	    
}while(b);


if(n1>=1 && n1<=7){

if(n1==1){

printf("\nEL dia lunes es el numero  %i\n",n1 );}  

if(n1==2){

printf("\nEL dia martes es el numero  %i\n",n1 );}

if(n1==3){

printf("\nEL dia miercoles es el numero  %i\n",n1 );}

if(n1==4){

printf("\nEL dia jueves es el numero  %i\n",n1 );}

if(n1==5){

printf("\nEL dia viernes es el numero  %i\n",n1 );}

if(n1==6){

printf("\nEL dia sabado es el numero  %i\n",n1 );}

if(n1==7){

printf("\nEL dia domingo es el numero  %i\n",n1 );}

system("pause");

system("cls");
}

do{

printf("Desea salir del programa oprima el 2 ");

printf("\nDesea continuar con el programa seleccione otro numero: ");

if(validFormat("%i", & opc)) continue;

b=opc<1;
	    
}while(b);


 }while(opc!=2);

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


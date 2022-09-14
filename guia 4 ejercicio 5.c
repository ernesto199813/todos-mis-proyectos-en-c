//Guia 4-Ejercicio 5//

#include<stdio.h>

#include<stdlib.h>

#include<math.h>

/*programa que calcula la superficie de un triángulo a partir del ingreso de su base y altura */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;


int main(){

/*SDT=superficie de un triangulo */	
float SDT,altura,base;

int salir;

do{

	
do {

printf("Ingrese la base del triangulo:");


if(validFormat("%f", & base)) continue;

if(base>=-9999 && base<=9999){

if(base<0){

b=base>1;
}else{ 

b=base<1;
}}

}while(b);	
		
	
do {

printf("Ingrese la altura del triangulo: ");


if(validFormat("%f", & altura)) continue;

if(altura>=-9999 && altura<=9999){


if(altura<0){
	
b=altura>1;

}else{ 

b=altura<1;

}}

}while(b);	


SDT=base*(altura/2);	

printf("La superficie del triangulo es: %.2f", SDT);	
	
SDT=0;

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


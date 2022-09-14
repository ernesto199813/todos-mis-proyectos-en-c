//Guia 3-Ejercicio 19//

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

/* programa en el cual se va a ingresar por teclado un numero entero positivo y realizara diferentes operaciones matematicas dependiendo del valor del numero */

/*funcion void para validar numeros enteros y flotantes  */

void clearBuf(void);
int validFormat(const char*, void*);
int b=1;



int main (){
	
int numerovalido=0,salir;

do{

do {

printf("Ingrese un numero entero: ");
	
if(validFormat("%i", & numerovalido)) continue;

if(numerovalido>=1 && numerovalido<=10000){


b=numerovalido<1;}

}while(b);




if (numerovalido>=55 && numerovalido<=75){
	
numerovalido=numerovalido+7;

printf("El valor del numero es %i\n", numerovalido);	
	
}	
	
if (numerovalido>=150 && numerovalido<=320){
	
numerovalido=numerovalido-8;

printf("El valor del numero es %i\n", numerovalido);	
	
}		
	

if (numerovalido>=500){
	
numerovalido=numerovalido*20;

printf("El valor del numero es %i\n", numerovalido);	
	
}		

if(numerovalido<55|| numerovalido>=76 && numerovalido<=149||numerovalido>=321 && numerovalido<=499){
		
printf("Este numero no esta en el rango\n", numerovalido);	
	
}

numerovalido=0;

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
return 1;
}
//Si no encontramos un salto de línea en el búfer, es porque el usuario no cumplió con el formato.
if(getchar() != '\n')
{
//Volvemos a limpiar el búfer para la próxima lectura.
clearBuf();
system("cls");
return 1;
}
system("cls");
return 0;
}

void clearBuf()
{
int ch;
//Limpia el búfer del teclado hasta encontrar un salto de línea o fin del archivo
 while((ch = getchar()) != '\n' && ch != EOF);}

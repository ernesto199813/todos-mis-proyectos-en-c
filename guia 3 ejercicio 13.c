//Guia 3-Ejercicio 13//

#include<stdio.h>

#include<stdlib.h>

#include<string.h>


/*Programa para calcular el valor del perimetro , ingresando por teclado a,b,c que representan los lados de un triangulo  */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main (){
	
/* A=valor de a , B=valor de b y C=valor de c  */		
float A,B,C,perimetro;

int salir;


do{


do{

printf("Ingrese el valor de A: ");

if(validFormat("%f", & A)) continue;

if(A>=1 && A<=100000){


b=A<1;}
	    
}while(b);
  
do{

printf("Ingrese el valor de B: ");

if(validFormat("%f", & B)) continue;

if(B>=1 && B<=100000){


b=B<1;}
	    
}while(b);

do{

printf("Ingrese el valor de C: ");
	
if(validFormat("%f", & C)) continue;

if(C>=1 && C<=100000){


b=C<1;}
	    
}while(b);	
	
	
perimetro=(A+B+C)/2;
	
printf("El valor del perimetro es %.2f",perimetro);
	
perimetro=0;

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

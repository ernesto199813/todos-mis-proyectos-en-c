//Guia 3-Ejercicio 17//

#include<stdio.h>

#include<stdlib.h>

#include<math.h>

/*Programa para calcular las dos raices de una ecuacion de segundo grado , ingresando por pantalla el valor de A,B Y C */

/*funcion void para validar numeros enteros y flotantes  */

void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main(){

/*A=valor de a   B=valor de b  C=valor de c  R1=primera raiz   R2=segunda raiz  */
	
float A,B,C,R1,R2;

int salir;

do{


do{

printf("Ingrese el valor de A: ");

if(validFormat("%f", & A)) continue;

if(A>=-99999 && A<=99999){


if(A>0){

b=A<1;}
else{ b=A>1;}}
	    
}while(b);

do{

printf("Ingrese el valor de B: ");

if(validFormat("%f", & B)) continue;

if(B>=-99999 && B<=99999){


if(B>0){

b=B<1;}
else{ b=B>1;}}
	    
}while(b);	
		
do{

printf("Ingrese el valor de C: ");

if(validFormat("%f", & C)) continue;

if(C>=-99999 && C<=99999){


if(C>0){

b=C<1;}
else{ b=C>1;}}
	    
}while(b);


R1=(-B+sqrt(pow(B,2)-4*A*C))/2*A;	

R2=(-B-sqrt(pow(B,2)-4*A*C))/2*A;

if(B*B>=4*A*C||-4*A*C>0){


printf("\nEl resultado de la primera raiz es %.2f",R1);

printf("\nEl resultado de la segunda raiz es %.2f",R2);}

else{ printf("\nError raiz imaginaria");}

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

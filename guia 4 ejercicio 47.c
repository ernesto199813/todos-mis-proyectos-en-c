//Guia 4-Ejercicio 47//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

/*Programa  que calcula la fecha de pascua para los a�os 2003 y 2004.*/

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;


int main()
{
	
/*AN=a�o */

int AN,salir;
    

int A=0,B=0,C=0,D=0,E=0,N=0;
 
do{
  
do{


printf("Ingrese un a%co: ",164);

if(validformat("%i", & AN))continue;

if(AN>=1 && AN<=2021){

b=AN<1;}

}while(b);
	

    
if(AN>=1 && AN<=1000000){



A = AN%19;

B = AN % 4;

C = AN % 7;

D = (19 * A + 24) % 30;

E = (2 * B + 4 * C + 6 * D + 5) % 7;

N = 22 + D + E;

if(N < 32){

printf("En el a%co %i pascua cayo el dia %i de marzo\n\n\n",164, AN, N);}
	
else{

printf("En el a%co %i pascua cayo el dia %i de abril\n\n\n",164, AN, N - 31);}

getch();

system("cls");

do{

printf("Desea salir del programa oprima el 2 ");

printf("\nDesea continuar con el programa seleccione otro numero: ");

if(validformat("%i", & salir)) continue;

b=salir<0;

}while(b);}else{salir=1;
}

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


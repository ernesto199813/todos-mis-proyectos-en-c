//Guia 4-Ejercicio 23//

#include<stdio.h>

#include<stdlib.h>



/*Programa para ingresar por teclado 2 numeros e intercambiar sus valores   */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;


int main(){
/* n1=numero 1 y n2= numero 2*/ 	
int n1,n2,aux=0,salir;

do{


do{
printf("Ingrese el primer numero ");


if(validformat("%i", & n1))continue;

if(n1>=-9999 && n1<=9999){

	
if(n1>0){

b=n1<1;}else{ b=n1>1;}}
	    
}while(b);	
	
	
do{
	
	
printf("Ingrese el segundo  numero ");

if(validformat("%i", & n2))continue;

if(n2>=-9999 && n2<=9999){

	
if(n2>0){

b=n2<1;}else{ b=n2>1;}}
	    
}while(b);	
	

aux=n1;

n1=n2;

n2=aux;


printf("El valor de [n1] es %i",n1);


printf("\nEl valor de [n2] es %i",n2);	

aux=0;

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


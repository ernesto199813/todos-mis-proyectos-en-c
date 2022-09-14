//Guia 4-Ejercicio 21//

#include<stdio.h>

/* Programa que nos permite contar los numeros primos desde 0 hasta 100 */

/*funcion void para validar numeros enteros y flotantes  */

void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main (){

/*i y j =contador */
	
int i,j,numero=0,salir;


do{


for(i=2; i <=100; i++){ 

for(j=2; j <= i; j++){


if(i%j==0){ 

numero++;}}
		
if(numero==1){
	
printf("%i\t", i);}
		
numero = 0;}
	
printf("\n\n");

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


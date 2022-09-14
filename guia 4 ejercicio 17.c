//Guia 4-Ejercicio 17//

#include<stdio.h>

#include<stdlib.h>

/* programa que muestra los multiplos de 2 y 3 desde el 0 hasta el 100*/

/*funcion void para validar numeros enteros y flotantes  */

void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main (){
	
int i,V2,V3,salir;

do{

	
	
for(V2=0;V2<=100;V2++){
	

i=V2%2;
if(i==0){
	
if(V2==0){
	
printf("Los multiplos de dos son:");	
}	
	
printf("\t%i",V2);	
}}
	
for(V3=1;V3<=100;V3++){
	

i=V3%3;
if(i==0){
	
if(V3==3){
	
printf("\n\nLos multiplos de tres son:");	
}	
	
printf("\t%i",V3);	
}		
}	

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

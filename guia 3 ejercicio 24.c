//Guia 3-Ejercicio 24//

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include<ctype.h>

/* programa para ingresar por teclado una letra y determinar si es minuscula y mayuscula */


int validarletra( char letra[]);

/* se utilizara esta funcion para  validar que los datos ingresados solo sean numeros en las variables float de retirar y depositar   */

void clearBuf(void);
int validFormat(const char*, void*);

int b=1;



int main(){
	
char letra[1];

int salir;

do{


do{

printf("Ingrese una sola letra:");

scanf("%s", & letra);

if(validarletra(letra)) continue ;

b=strlen(letra)>1;

}while(b);
	

if(isupper(letra[0])) printf("La letra '%s' es mayuscula\n\n", letra);


else printf("La letra '%s' es minuscula\n\n", letra);

getch();

system("cls");

do{

printf("Desea salir del programa oprima el 2 ");

printf("\nDesea continuar con el programa seleccione otro numero: ");

if(validFormat("%i", & salir)) continue;

b=salir<0;

}while(b);

}while(salir!=2);	

return 0;}


int validarletra( char letra[]){
	
system("cls");

int  i;

for(i=0;i<strlen(letra);i++){
	
	
if(!isalpha(letra[i]))return 1;	
	
}	
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


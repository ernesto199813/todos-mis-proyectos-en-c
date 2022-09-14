//Guia 5-Ejercicio 12//

#include<stdio.h>

#include<stdlib.h>

#include<ctype.h>

/*Programa donde se ingresa una palabra em minuscula y convertirla a mayuscula  */


/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras */
int validar_caracter(char Letra[]);

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;

int main(){


int  salir,l,indice;

char Letra[20];

do{

do{
	
printf("Ingrese una palabra en minuscula: ");

scanf("%s", & Letra);

l=validar_caracter(Letra);	
	
}while(l==0);


for(indice=0; Letra[indice]!= '\0'; ++indice){
	
Letra[indice] = toupper(Letra[indice]);}

system("cls");

printf("Su palabra en mayuscula es: %s",Letra);

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




int validar_caracter(char Letra[])
{	
int i;

for(i=0; i<strlen(Letra); i++){
	
if(!isalpha(Letra[i])){
			
system("cls");
return 0;
}}
return 1;
}

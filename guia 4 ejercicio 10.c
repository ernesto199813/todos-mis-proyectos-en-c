//Guia 4-Ejercicio 10//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*Programa para Calcular cuantos a, e, i, o, u se han ingresados  */


//validacion para letras //
int validarC(char cadena[]);

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;


int main()
{

char letra[100];  

int f=0,j=0, n,a=0,e=0,i=0,o=0,u=0,salir; 

do{



printf("Bienvenido al contador de letras solo se puede ingresar 1 letra a la ves y este termina al registrar 20 caracteres");

printf("\n\npresione una tecla para continuar.................  ");

getch();

system("cls");
	
for(f= 1;f<=20;f++){

do{

system("cls");

printf("Ingrese el caracter numero %i: ",f);

scanf("%s", & letra);
	    
n=validarC(letra);

system("cls");

}while(n==0);
    
	
for(j=0;j<strlen(letra);j++){

if(letra[j]=='a'){a++;}

if(letra[j]=='e'){e++;}
		
if(letra[j]=='i'){i++;}
		
if(letra[j]=='o'){o++;}
		
if(letra[j]=='u'){u++;}
		
j++;}}	
	
printf("cantidad de letras a ingresadas: %i\n\n", a);

printf("cantidad de letras e ingresadas: %i\n\n", e);

printf("cantidad de letras i ingresadas: %i\n\n", i);

printf("cantidad de letras o ingresadas: %i\n\n", o);

printf("cantidad de letras u ingresadas: %i\n\n", u);
	
	
a=0;

e=0;

i=0;

o=0;

u=0;	
	
	
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



int validarC(char cadena[])
{	

int i;

if((strlen(cadena))>1)
{

system("cls");
		
return 0;}

for(i=0; i<strlen(cadena); i++){

if(!isalpha(cadena[i])){
		
system("cls");		

return 0;}}

return 1;
}

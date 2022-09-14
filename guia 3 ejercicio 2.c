//guia 3-ejercicio 2//

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

/*Programa para calcular el promedio de un alumno e imprimir su nombre en pantalla , ingrese por teclado su nombre ,edad y tres calificaciones  */ 


/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int validar_caracter(char Nombre[]);

int main(){
	
char Nombre[10];

/*n1=nota 1 , n2=nota 2 y n3= nota 3, n servira para validar el Nombre */
int error, promedio,n1,n2,n3,edad,nombre,n,salir;

do{


do {

printf("Ingrese su nombre ");

scanf("%s", & Nombre);

n=validar_caracter(Nombre);
	    
}while(n==0);
/*
nombre=(Nombre);

fflush(stdin);*/

do {
printf("\nIngrese su edad ");

if(validFormat("%i", & edad)) continue;

if(edad>=1 && edad<=150){


b=edad<1;}
	    
}while(b);

do {
printf("\nIngrese su primera nota: ");

if(validFormat("%i", & n1)) continue;

if(n1>=1 && n1<=20){


b=n1<1;}
	    
}while(b);
	
do {	
printf("\nIngrese su segunda nota: ");

if(validFormat("%i", & n2)) continue;

if(n2>=1 && n2<=20){


b=n2<1;}
	    
}while(b);		
	
do {	
printf("\nIngrese su tercera nota: ");

if(validFormat("%i", & n3)) continue;

if(n3>=1 && n3<=20){


b=n3<1;}
	    
}while(b);

	
promedio=(n1+n2+n3)/(3);
	
if(n1>=1 && n1<=20 && n2>=1 && n2<=20 && n3>=1 && n3<=20){
	
printf("\nEl nombre del alumno es %s", nombre);	
	
printf("\nSu media es %i",promedio);}

promedio=0;

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

int validar_caracter(char Nombre[])
{	
int i;
if((strlen(Nombre)) > 8)
{
system("cls");
		
return 0;
}
for(i=0; i<strlen(Nombre); i++)
{
if(!isalpha(Nombre[i]))
{
					
			

system("cls");
return 0;
}
		
}
	return 1;
}


//Guia 4-Ejercicio 45//

#include<stdio.h>

#include<stdlib.h>



/*Programa donde se ingresa el numero de legajo de un alumno , su nombre y su promedio y se determina cuantos alumnos aprobaron , cuantos presentan examen en diciembre y 

cuantos rinden examen en marzo */

/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras en nombre */
int validar_caracter(char Nombre[]);

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;


int main(){


int alumnos,i,salir,numero_de_legajo=0,VM=0,A=0,B=0,C=0;

float promedio[11],resultado=0;

char Nombre[10][10],VC[1000];

/* n es una letra que sirve para validar el nombre*/
 
int n,a;

do{


do{

printf("Ingrese la cantidad total de numeros de legajos en el curso(esto es equivalente a la cantidad de alumnos que se registraran): ");

if(validformat("%i", & numero_de_legajo)) continue;

if(numero_de_legajo>=1 && numero_de_legajo<=150){


b=numero_de_legajo<1;}

}while(b);

for(i=1;i<=numero_de_legajo;i++){
	
do {

printf("Ingrese el nombre del alumno de numero de legajo %i: ",i);

scanf("%s", & VC);

n=validar_caracter(VC);
	    
}while(n==0);

strcpy(Nombre[i], VC);

system("cls");

	
do{

printf("Ingrese el promedio del alumno de numero de legajo %i(min=1 y max=10):",i);

if(validformat("%f", & promedio[i])) continue;

if(promedio[i]>=1 && promedio[i]<=10){


b=promedio[i]<1;}

}while(b);	


if(promedio[i]>=7 && promedio[i]<=10){
	
A++;	

}

if(promedio[i]>=4 && promedio[i]<7){
	
B++;	

}

if(promedio[i]>=1 && promedio[i]<4){
	
C++;	

}		
	
if(promedio[i]>resultado){
	
resultado=promedio[i];	

VM=i;
	
}}

printf("Cantidad de alumnos aprobados:%i",A);

printf("\nCantidad de alumnos que rinden examen en diciembre :%i",B);

printf("\nCantidad de alumnos que rinden examen en marzo :%i",C);

printf("\nEl alumno %s de numero de legajo %i es el que tiene mejor promedio con: %.2f ",Nombre[VM],VM,resultado );

resultado=0;

VM=0;

A=0;

B=0;

C=0;

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

int validar_caracter(char Nombre[])
{	
int i;
if((strlen(Nombre)) > 8){

system("cls");	
return 0;}

for(i=0; i<strlen(Nombre); i++){
	
if(!isalpha(Nombre[i])){
			
system("cls");
return 0;
}}
return 1;
}

int validar_caracter1(char Apellido[])
{	
int i;
if((strlen(Apellido)) > 10){

system("cls");	
return 0;}

for(i=0; i<strlen(Apellido); i++){
	
if(!isalpha(Apellido[i])){
			
system("cls");
return 0;
}}
return 1;
}

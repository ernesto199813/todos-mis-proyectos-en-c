//Guia 4-Ejercicio 35//

#include<stdio.h>

#include<stdlib.h>



/*Programa para determinar cual es el alumno mas alto de una clase ,introduciendo por teclado ,nombre ,apellido y altura e imprimiendo por pantalla el alumno mas alto */

/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras en nombre */
int validar_caracter(char Nombre[]);

/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras en apellido */
int validar_caracter1(char Apellido[]);

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;


int main(){

/* VM=valor mayor  */
int alumnos,i,VM=0,salir;

float altura[100],resultado=0;

char Nombre[10][10], Apellido[10][10],SDE[1000];

/* n es una letra que sirve para validar el nombre*/
 
int n,a;

do{


do{

printf("Ingrese la cantidad de alumnos a anotar: ");

if(validformat("%i", & alumnos)) continue;

if(alumnos>=1 && alumnos<=9999){


b=alumnos<1;}

}while(b);

for(i=1;i<=alumnos;i++){
	
do {

printf("Ingrese el nombre del alumno numero %i: ",i);

scanf("%s", & SDE);

n=validar_caracter(SDE);
	    
}while(n==0);

strcpy(Nombre[i], SDE);

system("cls");

do {

printf("Ingrese el apellido del alumno numero %i: ",i);

scanf("%s", & SDE);

a=validar_caracter1(SDE);
	    
}while(a==0);

strcpy(Apellido[i], SDE);

system("cls");

	
do{

printf("Ingrese la altura en metros del alumno %i:",i);

if(validformat("%f", & altura[i])) continue;

if(altura[i]>=1 && altura[i]<=4){


b=altura[i]<1;}

}while(b);	
		
	
if(altura[i]>resultado){
	
resultado=altura[i];	

VM=i;
	
}}


printf("La persona mas alta es %s %s con %.2f metros\n",Nombre[VM],Apellido[VM],resultado );

resultado=0;

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

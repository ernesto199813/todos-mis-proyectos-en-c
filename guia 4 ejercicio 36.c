//Guia 4-Ejercicio 36//

#include<stdio.h>

#include<stdlib.h>



/*Programa para determinar el promedio de un alumno el cual ve 6 materias , se ingresa por teclado el nombre del alumno y sus 6 notas */

/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras en nombre */
int validar_caracter(char Nombre[]);

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;


int main(){

/* i=contador , n=se utiliza para validar que los caracteres sean letras y no se pueda colocar numeros o simbolos  */

int nombre,j,n,salir;

float promedio=0,nota;

char Nombre[8];



do{


do {

printf("Ingrese su nombre: ");

scanf("%s", & Nombre);

n=validar_caracter(Nombre);
	    
}while(n==0);

nombre=(Nombre);

system("cls");

for(j=1;j<=6;j++){
	
do{

printf("Ingrese la nota %i: ", j);

if(validformat("%f", & nota )) continue;


if(nota>=1 && nota<=20){

b=nota<1;}

}while(b); 

promedio=nota+promedio;}


printf("El promedio de el alumno %s es %.2f",Nombre, promedio/6);

promedio=0;

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


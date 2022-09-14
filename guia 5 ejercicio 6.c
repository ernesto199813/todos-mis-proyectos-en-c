//Guia 5-Ejercicio 6//

#include<stdio.h>

#include<stdlib.h>


/*Programa donde se ingresa el nombre,edad,nota 1 ,nota 2 y nota 3 y se dice el promedio de ese alumno y se imprime el nombre de ese alumno  */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;

/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras en nombre */
int validar_caracter(char Nombre[]);

int main(){


int  edad, salir,n,nombre;

float nota_1=0,nota_2=0,nota_3=0,promedio=0;

char Nombre[8];



do{

do{
	
printf("Ingrese su nombre: ");

scanf("%s", & Nombre);

n=validar_caracter(Nombre);	
	
}while(n==0);

nombre=(Nombre);

system("cls");



do{

printf("Ingrese su edad: ");

if(validformat("%i", & edad )) continue;

if(edad>=1 && edad<=130){

b=edad<1;}

}while(b);

do{

printf("Ingrese su nota 1: ");

if(validformat("%f", & nota_1 )) continue;

if(nota_1 >=1 && nota_1 <=20){

b=nota_1<1;}

}while(b);

do{

printf("Ingrese su nota 2: ");

if(validformat("%f", & nota_2 )) continue;

if(nota_2 >=1 && nota_2 <=20){

b=nota_2<1;}

}while(b);

do{

printf("Ingrese su nota 3: ");

if(validformat("%f", & nota_3 )) continue;

if(nota_3 >=1 && nota_3 <=20){

b=nota_3<1;}

}while(b);


promedio=(nota_1+nota_2+nota_3)/3;

printf("El alumno %s tiene un promedio de %.2f",nombre,promedio);



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

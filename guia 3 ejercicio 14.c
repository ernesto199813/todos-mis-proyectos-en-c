//Guia 3-Ejercicio 14//

#include<stdio.h>

#include<stdlib.h>

#include<string.h>


/*Programa para calcular el promedio de un alumno en dos materias , se le pide al usuario ingresar por teclado nombre , nota en pascal y nota en visual basic  */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras en nombre */
int validar_caracter(char Nombre[]);




int main(){

/*COP=calificaciones obtenidad en pascal  COV=calificaciones obtenida en visual basic , n es una letra para validar a nombre  */	
int COP,COV,nombre,n,promedio,salir;

char Nombre[8];	

do{


do {

printf("Ingrese su nombre ");

scanf("%s", & Nombre);

n=validar_caracter(Nombre);
	    
}while(n==0);

nombre=(Nombre);

system("cls");


do{

printf("Calificacion obtenida en pascal: ");

if(validFormat("%i", & COP)) continue;

if(COP>=1 && COP<=20){

b=COP<1;}
	    
}while(b);
  
do{

printf("Calificacion obtenida en visual basic: ");

if(validFormat("%i", & COV)) continue;

if(COV>=1 && COV<=20){

b=COV<1;}
	    
}while(b);


promedio=(COP+COV)/2;

printf("%s",nombre);
printf(" su promedio es %i",promedio);

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
}
		
}
return 1;
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

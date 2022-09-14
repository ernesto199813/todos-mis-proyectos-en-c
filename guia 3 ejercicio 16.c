//Guia 3-Ejercicio 16//

#include<stdio.h>

#include<stdlib.h>




/*Programa para calcular la division de dos numeros ingresados por teclado  */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main(){

/*n1=primer valor y n2= segundo valor  */
float n1,n2,resultado;

int salir;

do{


do{

printf("Ingrese el primer valor ");

if(validFormat("%f", & n1)) continue;

if(n1>=1 && n1<=100000){

b=n1<1;}
	    
}while(b);

do{

printf("Ingrese el segundo valor ");

if(validFormat("%f", & n2)) continue;

if(n2>=1 && n2<=100000){

b=n2<1;}
	    
}while(b);	
	
	
resultado=n1/n2;	
	
printf("El resultado es %.2f", resultado);	


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

//Guia 3-Ejercicio 10//

#include<stdio.h>

#include<stdlib.h>


/*programa para calcular el valor de  Z y V , ingresando por teclado el valor de X y Y  */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main (){

/* Z=valor de z V=valor de v  X=valor de x  Y=valor de y */
float Z,V,X,Y;

int salir;

do{


do{

printf("Ingrese el valor de X: ");

if(validFormat("%f", & X)) continue;

if(X>=1 && X<=10000){


b=X<1;}
	    
}while(b);

do{

printf("Ingrese el valor de Y: ");

if(validFormat("%f", & Y)) continue;

if(Y>=1 && Y<=10000){

b=Y<1;}
	    
}while(b);


Z= (X+Y)/2;

V=(X*Y)-(2*X);


printf("Z es %.2f",Z);

printf("\nV es %.2f",V);



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

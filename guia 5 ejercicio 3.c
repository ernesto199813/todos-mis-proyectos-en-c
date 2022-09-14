//Guia 5-Ejercicio 3//

#include<stdio.h>

#include<stdlib.h>


/*Programa para calcular el area de un rectangulo y su perimetro ingresando por teclado el valor de el ancho y el valor de el largo del rectangulo */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;


int main(){

int salir;

float perimetro=0,area=0,ancho=0,largo=0;


do{

do{

printf("Ingrese el valor del ancho del rectangulo: ");

if(validformat("%f", & ancho )) continue;

if(ancho>=1 && ancho<=9999){


b=ancho<0;}

}while(b);

do{

printf("Ingrese el valor del largo del rectangulo: ");

if(validformat("%f", & largo )) continue;

if(largo>=1 && largo<=9999){


b=largo<0;}

}while(b);


perimetro=(2*ancho)+(2*largo);

area=ancho*largo;


printf("El perimetro del rectangulo es: %.2f ",perimetro);

printf("\nEl area del rectangulo es: %.2f ",area);

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

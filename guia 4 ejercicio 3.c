//Guia 4-Ejercicio 3//

#include<stdio.h>

#include<stdlib.h>



/*Programa para ingresar 10 numeros por teclado y determinar cuanto de ellos son mayores o menores a cero  */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;


int main(){

/*i=contador */	

int i,salir,mayor_cero=0,menor_cero=0;

float numero;



do{


for(i=1;i<=10;i++){
	
	
do{

printf("Ingrese el valor numero %i: ",i);

if(validFormat("%f", & numero )) continue;

if(numero>=-9999 && numero<=9999){


if(numero>0){


b=numero<1;}    

if(numero<0){


b=numero>1;}    

}

}while(b);	

if(numero>0){
	
mayor_cero++;	
	
	
}else{
	
menor_cero++;}}

	
printf("Cantidad de numeros mayores a cero es %i",mayor_cero);

printf("\nCantidad de numeros menores a cero es %i",menor_cero);

mayor_cero=0;

menor_cero=0;

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

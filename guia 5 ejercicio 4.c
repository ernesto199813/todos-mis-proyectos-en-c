//Guia 5-Ejercicio 4//

#include<stdio.h>

#include<stdlib.h>


/*Programa para calcular la suma,resta y multiplicacion de dos numeros  */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;


int main(){

int salir;

float suma=0,resta=0,multiplicacion=0,numero_1=0,numero_2=0;


do{

do{

printf("Ingrese el primer valor: ");

if(validformat("%f", & numero_1 )) continue;

if(numero_1>=-9999 && numero_1<=9999){



if(numero_1>=0){

b=numero_1<0;

}else{
	
b=numero_1>0;	
	
}}

}while(b);

do{

printf("Ingrese el segundo valor: ");

if(validformat("%f", & numero_2 )) continue;

if(numero_2>=-9999 && numero_2<=9999){

if(numero_2>=0){

b=numero_2<0;

}else{
	
b=numero_2>0;	
	
}}

}while(b);

suma=numero_1+numero_2;

resta=numero_1-numero_2;

multiplicacion=numero_1*numero_2;



printf("El resultado en la suma es: %.2f ",suma);

printf("\nEl resultado en la resta es: %.2f ",resta);

printf("\nEl resultado en la multiplicacion es: %.2f ",multiplicacion);

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

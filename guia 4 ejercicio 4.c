//Guia 4-Ejercicio 4//

#include<stdio.h>

#include<stdlib.h>

#include<math.h>

/*Programa que calcula la longitud de la circunferencia y el �rea del c�rculo,ingresando por teclado el valor del radio . */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;


int main(){
	
/* LDC= longitud de circunferencia* AC=area del circulo */
float radio,pi=3.1415,LDC,AC;

int salir;


do{


do{	
printf("Ingrese un valor para el radio: ");

if(validFormat("%f", & radio))continue ;

if(radio>=-9999 && radio<=9999 ){


if(radio>0){

b=radio<1;

}else{

b=radio>1;

}}

}while(b);

LDC=2*pi*radio;

AC=pi*pow(radio,2);
	
printf("La longitud de una circunferencia es: %.2f\n", LDC);	
	
printf("\nEl area del circulo es: %.2f", AC);

LDC=0;

AC=0;

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

//Guia 3-Ejercicio 7//

#include<stdio.h>

#include<stdlib.h>

/* Programa para convertir pulgadas a centimetros , ingresando por teclado la cantidad de pulgadas a convertir en centimetros */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main (){
	
float centimetros , pulgadas,salir;


do{


do{
 
printf("Ingrese un valor en pulgadas: ");

if(validFormat("%f", & pulgadas)) continue;

if(pulgadas>=1 && pulgadas<=10000){

b=pulgadas<1;}
	    
}while(b);

centimetros=2.54*pulgadas;


printf("El resultado en centimetros es %.2f ", centimetros);

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


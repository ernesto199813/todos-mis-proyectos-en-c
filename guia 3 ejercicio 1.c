//Guia 3-Ejercicio 1//

#include<stdio.h>

#include<stdlib.h>

/* Programa para sumar ,restar y mulplicar dos valores ingresados por teclado  */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main (){   


/*n1= numero 1 y n2= numero 2 */ 
int n1,n2 ,suma,resta,multiplicacion,salir;

do{


do {
printf("Ingrese un numero ");

if(validFormat("%i", & n1)) continue;

if(n1>=1 && n1<=10000){


b=n1<1;}
	    
}while(b);

do{

printf("Ingrese otro numero ");

if(validFormat("%i", & n2)) continue;

if(n2>=1 && n2<=10000){


b=n2<1;}
	    
}while(b);



suma=n1+n2;

resta=n1-n2;

multiplicacion=n1*n2;


printf("\nEl resultado de la suma es %i",suma);

printf("\nEl resultado de la resta es %i",resta);

printf("\nEl resultado de la multiplicacion es %i",multiplicacion);

suma=0;

resta=0;

multiplicacion=0;

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

//Si la funci?n scanf retorna 0, fue porque hubo una falla en la lectura..
if(!scanf(tipo, validar))
{
//Limpiamos el b?fer del teclado para que la pr?xima lectura se lleve a cabo.
clearBuf();
system("cls");
return 1;}
    
//Si no encontramos un salto de l?nea en el b?fer, es porque el usuario no cumpli? con el formato.
if(getchar() != '\n'){
//Volvemos a limpiar el b?fer para la pr?xima lectura.
clearBuf();

system("cls");

return 1;}
system("cls");
return 0;
}

void clearBuf()
{
    
int ch;
//Limpia el b?fer del teclado hasta encontrar un salto de l?nea o fin del archivo
while((ch = getchar()) != '\n' && ch != EOF);}

//Guia 3-Ejercicio 5//

#include<stdio.h>

#include<stdlib.h>


/* programa en el cual se ingresa por teclado un valor en centigrados y se muestra en pantalla el resultado en fahrenheit */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;



int main (){
	
int salir;	
	
/*C=centigrados y  F=fahrenheit */
float C,F; 

do{


do{

printf("ingrese la cantidad de centigrados ");

if(validFormat("%f", & C)) continue;

if(C>=1 && C<=10000){


b=C<1;}
	    
}while(b);	



F=(C*9)/5;

F=F+32;

printf("\nEl valor en centigrados es %f",C);

printf("\nEl valor en fahrenheit es %f", F);

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

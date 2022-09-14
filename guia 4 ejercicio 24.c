//Guia 4-Ejercicio 24//

#include<stdio.h>

#include<stdlib.h>


/*Programa para ingresar por teclado 1 numero y determinar su cuadrado y su cubo   */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;


int main(){
	
int numero,cuadrado,cubo,i,salir;

do{


do{
printf("Ingrese un valor: ");


if(validformat("%i", & numero))continue;

if(numero>=1 && numero<=1000){

if(numero>0){

b=numero<1;}}
	    
}while(b);	
	
	
printf("\tNUMERO\tCUADRADO  CUBO\n\n");


for(i= 1; i <=numero; i++)
{

cuadrado=pow(i,2);

cubo=pow(i,3);
		
		
printf("\t   %i\t   %i\t   %i\n\n", i, cuadrado, cubo);
		
}

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


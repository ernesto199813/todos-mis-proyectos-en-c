//Guia 4-Ejercicio 44//

#include<stdio.h>

#include<stdlib.h>

/*Programa para determinar si un a�o es biciesto o no , se introduce por teclado el a�o que se desea saber si es biciesto o no */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;



int main(){

/*A=a�o*/

int A,biciesto=0,salir;

do{


do{

printf("Ingrese un a%co: ",164);


if(validformat("%i", & A)) continue;

if(A>=1 && A<=2021){

b=A<1;}	

}while(b);
	
biciesto=A%4;

if(biciesto==0){
	
printf("El a%co %i es biciesto",164,A);	
	
	
}else{
	
printf("El a%co %i no es biciesto",164,A);	
	
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

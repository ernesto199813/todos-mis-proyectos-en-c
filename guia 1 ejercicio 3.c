// Guia 1- Ejercicio 3//

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/* Programa para determinar si un atleta es seleccionado para correr un maraton introducciendo su sexo , edad y tiempo de su ultima carrera */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;

int main(){


int sexo,edad,carrera,salir;

do{


do{

printf("Ingrese su sexo: ");
printf("\n1-hombre");
printf("\n2-Mujer\n");

if(validformat("%i", & sexo))continue;

if(sexo>=1 && sexo<=2){


b=sexo<1;}
	
}while(b);


do{

printf("ingrese su edad: ");

if(validformat("%i", & edad))continue;

if(edad>=1 && edad<=150){


b=edad<1;}

}while(b);
 

do{

printf("ingrese el tiempo de vuelta de su ultima carrera: ");

if(validformat("%i", & carrera)) continue;

if(carrera>=1 && carrera<=100000){

b=carrera<1;}
     
}while(b);
  


if(sexo==1 && edad<40 && carrera<=150||sexo==1 && edad>40 && carrera<=175||sexo==2 && carrera<=180  ){

printf("seleccionado");	
	
}

if(sexo==1 && edad<40 && carrera>150|| sexo==1 && edad>40 && carrera>175||sexo==2 && carrera>180){

printf("No seleccionado");}	

getch();

system("cls");

do{

printf("Desea salir del programa oprima el 2 ");

printf("\nDesea continuar con el programa seleccione otro numero: ");

if(validformat("%i", & salir)) continue;

b=salir<0;

}while(b);

}while(salir!=2);


return 0;}

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

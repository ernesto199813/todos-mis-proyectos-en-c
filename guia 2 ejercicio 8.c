//Guia 2-Ejercicio 8 //

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/* Programa para determinar si un atleta es seleccionado para correr un maraton , introducciendo su sexo , edad y tiempo de su ultima carrera  */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;



int main(){
	
int sexo,salir,edad,tiempo;	
	
do{
	
	
do {
printf("Ingrese su sexo: ");

printf("\n1-Hombre");

printf("\n2-Mujer\n");


if(validFormat("%i", & sexo)) continue;

if(sexo>=1 && sexo<=2){
	
b=sexo<1;

}
}while(b);


do {
printf("Ingrese su edad: ");

if(validFormat("%i", & edad)) continue;

if(edad>=1 && edad<=150){
	
b=edad<1;

}
}while(b);

do {
printf("Ingrese el tiempo efectuado en su ultimo maraton: ");

if(validFormat("%i", & tiempo)) continue;

if(tiempo>=1 && tiempo<=10000){
	
b=tiempo<1;

}
}while(b);

if(sexo==1 && edad<40 && tiempo<150||sexo==1 && edad>=40 && tiempo<175||sexo==2 && tiempo<180){
	
	
printf("Seleccionado");	
	
}else{
	
printf("no ha sido seleccionado");	
}


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


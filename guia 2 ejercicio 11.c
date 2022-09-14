//Guia 2-Ejercicio 11//

#include<stdio.h>

#include<stdlib.h>

/* programa en el cual se puede calcular los dias que tendra un mes dependiendo de los datos ingresados por teclado los cuales seran el año y el mes */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main(){

int anual, mes,dia,salir;

do{

do{

printf("Ingrese un a%co: ",164);

if(validFormat("%i", & anual)) continue;

if(anual>=1 && anual<=10000){


b=anual<1;}
	    
}while(b);

do{

printf("Ingrese un mes: ");

if(validFormat("%i", & mes)) continue;

if(mes>=1 && mes<=12){


b=mes<1;}
	    
}while(b);


anual=anual%4;

	
if(mes==1){

dia=31;
	
printf("Los dias que tiene enero son %i ",dia);}


if(mes==2 && anual==0){

dia=29;
	
printf("Los dias que tiene febrero son %i ",dia);}


if(mes==2 && anual>0){

dia=28;
	
printf("Los dias que tiene febrero son %i ",dia);}



if(mes==3){

dia=31;
	
printf("Los dias que tiene marzo son %i ",dia);}

if(mes==4){

dia=30;
	
printf("Los dias que tiene abril son %i ",dia);}


if(mes==5){

dia=31;
	
printf("Los dias que tiene mayo son %i ",dia);}

if(mes==6){

dia=30;
	
printf("Los dias que tiene junio son %i ",dia);}


if(mes==7){

dia=31;
	
printf("Los dias que tiene julio son %i ",dia);}


if(mes==8){

dia=31;
	
printf("Los dias que tiene agosto son %i ",dia);}

if(mes==9){

dia=30;
	
printf("Los dias que tiene septiembre son %i ",dia);}



if(mes==10){

dia=31;
	
printf("Los dias que tiene octubre son %i ",dia);}


if(mes==11){

dia=30;
	
printf("Los dias que tiene noviembre son %i ",dia);}



if(mes==12){

dia=31;
	
printf("Los dias que tiene diciembre son %i ",dia);}

if(mes<=0||mes>=13){
	
printf("\nError al ingresar un dato",mes);}

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

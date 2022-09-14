//Guia 4-Ejercicio 26//

#include<stdio.h>

#include<stdlib.h>

/* Programa que nos permite preguntarle al usuario la cantidad de boletas emitidas en las ultimas 24 horas , luego que nos diga a que empleado se le asigna esa boleta y 

el valor de la boleta */

/*funcion void para validar numeros enteros y flotantes  */

void clearBuf(void);

int validFormat(const char*, void*);

int b=1;

int main (){

//boleta=numero de boletas,i=contador,NDE=numero del empleado,VEV=valor en venta  //
	
int boleta,i,NDE,VEV,sum1=0,sum2=0,sum3=0,salir;


do{


do{
	
printf("Ingrese el numero de boletas emitidas en las ultimas 24 horas: ");

if(validFormat("%i", & boleta))continue;

if(boleta>=1 && boleta<=1000){

b=boleta <1;}
	
}while(b);

for(i=1;i<=boleta;i++){

do{

printf("Ingrese el numero del empleado en la boleta %i: ",i);

if(validFormat("%i", & NDE)) continue;

if(NDE>=1 && NDE<=3){

	
b=NDE<1;}}while(b);

do{

printf("Ingrese el valor en venta en la boleta %i: ",i);

if(validFormat("%i", & VEV)) continue;

if(VEV>=1 && VEV<=100000){


b=VEV<1;}


}while(b);

if(NDE==1){

VEV=VEV*0.05;
	
sum1=VEV+sum1;}

if(NDE==2){

VEV=VEV*0.05;
	
sum2=VEV+sum2;}

if(NDE==3){

VEV=VEV*0.05;
	
sum3=VEV+sum3;}

}	
	
printf("El vendedor 1 gano %i",sum1);	

printf("\nEl vendedor 2 gano %i",sum2);	

printf("\nEl vendedor 3 gano %i",sum3);	

sum1=0;

sum2=0;

sum3=0;

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

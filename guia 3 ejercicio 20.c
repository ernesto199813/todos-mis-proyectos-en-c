//Guia 3-Ejercicio 20//

#include<stdio.h>

#include<stdlib.h>

#include<conio.h>

#include<math.h>

#include<string.h>


/* Programa para calcular varias operaciones , la primera sera ingresar tres numeros por teclado y el programa detectara cual es el menor , la segunda ingresara un valor en 

centigrados y seran convertidos en fahrenheit y el tercero se ingresara un valor a,b y c para obtener un valor k  */ 

/*funcion void para validar numeros enteros y flotantes  */

void clearBuf(void);
int validFormat(const char*, void*);
int b=1;



int main (){
	


/*opc=opciones */

int opc,salir,i,numero[4],valor_menor=0,A,B,C;

float centigrados,farenheit,P,K;

do{


do {
	
printf("1-Ingrese 3 numeros diferentes y calcular cual es el menor de ellos\n");

printf("\n2-Ingrese un valor en grados centigrados para convertirlo en farenheint\n");

printf("\n3-Calcular el valor de k si se ingresan A,B y C\n");
	
if(validFormat("%i", & opc)) continue;

if(opc>=1 && opc<=3){

b=opc<1; }

}while(b);	
	

switch(opc){
	
case 1:


for(i=1;i<=3;i++){
	


do {
printf("Ingrese el valor %i: ",i);
	
if(validFormat("%i", & numero[i])) continue;

if(numero[i]>=1 && numero[i]<=10000){

b=numero[i]<1; }

}while(b);	
	
	
if(valor_menor==0 && numero[i]>0||numero[i]<valor_menor){
	
	
valor_menor=numero[i];	
	
}}

printf("El menor de los 3 numeros es: %i",valor_menor);
	
break;	
	
case 2:


do {
printf("Ingrese un valor en centigrados: ");
	
if(validFormat("%f", & centigrados)) continue;

if(centigrados>=1 && centigrados<=10000){

b=centigrados<1; }

}while(b);	
	
	
farenheit=(centigrados*1.8)+32;
	
		
printf("El resultado en grados farenheit es :%.2f",farenheit);

break;	
	
	
case 3:	
	

do {
printf("Ingrese el valor de A: ");
	
if(validFormat("%i", & A)) continue;

if(A>=1 && A<=10000){

b=A<1; }

}while(b);	
	
do {
printf("Ingrese el valor de B: ");
	
if(validFormat("%i", & B)) continue;

if(B>=1 && B<=10000){

b=B<1; }

}while(b);

do {
printf("Ingrese el valor de C: ");
	
if(validFormat("%i", & C)) continue;

if(C>=1 && C<=10000){

b=C<1; }

}while(b);


P=(A+B+C)/2;

K=sqrt(P*(P-A)*(P-B)*(P-C));
	

printf("El valor de k es:%.2f",K);

	
break;	

}
 
valor_menor=0;
 
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
return 1;
}
//Si no encontramos un salto de línea en el búfer, es porque el usuario no cumplió con el formato.
if(getchar() != '\n')
{
//Volvemos a limpiar el búfer para la próxima lectura.
clearBuf();
system("cls");
return 1;
}
system("cls");
return 0;
}

void clearBuf()
{
int ch;
//Limpia el búfer del teclado hasta encontrar un salto de línea o fin del archivo
 while((ch = getchar()) != '\n' && ch != EOF);}


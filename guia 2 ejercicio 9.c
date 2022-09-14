// Guia 2-Ejercicio 9//

#include<stdio.h>

#include<stdlib.h>

/* Programa para determinar si es un triangulo es equilatero , isoceles o escaleno , ingresando por teclado 3 valores que representan los lados de el triangulo*/ 

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main()
{
	
/* nv1=longitud del triangulo 1,nv2=longitud del triangulo 2 y nv3=longitud del triangulo 3   */

int salir;
	
float nv1, nv2, nv3;
	
do{
	
	
do{
	
printf("Ingrese la primera longitud del triangulo: ");

if(validFormat("%f", & nv1)) continue;

b=nv1<1;
	    
}while(b);
	

do{
		
printf("Ingrese la segunda longitud del triangulo: ");

if(validFormat("%f", & nv2)) continue;

b=nv2<1;
	    	    
}while(b);
	

do{
	
printf("Ingrese la tercera longitud del triangulo: ");

if(validFormat("%f", & nv3)) continue;

b=nv3<1;
	
}while(b);
	

	
if(nv1 < 180 && nv2 < 180 && nv3 < 180){
	
if(nv1==nv2 && nv1 == nv3|| nv2==nv3){

printf("Triangulo equilatero\n\n");}
		
if(nv1==nv2 && nv3!=nv1 && nv3!=nv2|| nv2==nv3 && nv1!=nv2 && nv1!=nv3  ||nv1==nv3 && nv2!=nv1 && nv2!=nv3){
	
printf("Triangulo isosceles\n\n");}
		
if(nv1!=nv2 && nv1!=nv3 && nv2!=nv3 && nv3!=nv2)

{printf("Triangulo escaleno\n\n");}}
	
else{printf("No corresponde a un triangulo\n\n");}
		
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

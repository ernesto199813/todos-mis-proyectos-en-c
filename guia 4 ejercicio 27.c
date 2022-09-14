//Guia 4-Ejercicio 27//

#include<stdio.h>

#include<stdlib.h>

/* Programa en el cual se ingresan los lados del triangulo y dependiendo del valor de los lados nos dira que tipo de triangulo se forma  */

/*funcion void para validar numeros enteros y flotantes  */

void clearBuf(void);

int validFormat(const char*, void*);

int b=1;

int main (){

int numero1,numero2,numero3,total,salir;

do{


do{
	
printf("Ingrese el valor del lado  1: ");

if(validFormat("%i", & numero1))continue;

if(numero1>=1 && numero1<=9999){


b=numero1<1;}
	
}while(b);


do{
	
printf("Ingrese el valor del lado 2: ");

if(validFormat("%i", & numero2))continue;

if(numero2>=1 && numero2<=9999){


b=numero2<1;}
	
}while(b);



do{
	
printf("Ingrese el valor del lado 3: ");

if(validFormat("%i", & numero3))continue;

if(numero3>=1 && numero3<=9999){


b=numero3<1;}
	
}while(b);


total=numero1+numero2+numero3;

if(total>=3 && total<=180){
	
if(numero1==numero2 && numero1==numero3 && numero2==numero3){
	
printf("\nEs un triangulo equilatero");	
	
}	
	

if(numero1==numero2 && numero1==numero3 && numero2!=numero3||numero2==numero1 && numero2==numero3 && numero1!=numero3||
numero3==numero2 && numero3==numero1 && numero1!=numero2){
	
printf("\nEs un triangulo isosceles");	
	
}	
	
if(numero1!=numero2 && numero1!=numero3 && numero2!=numero3){
	
printf("\nEs un triangulo escaleno");	
	
}	
	
}else{
	
printf("\nNo es un triangulo");	
	
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

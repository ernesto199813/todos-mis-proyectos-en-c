//Guia 4-Ejercicio 22//

#include<stdio.h>

#include<stdlib.h>



/*Programa para ingresar por teclado 10 numeros y realizar la suma de todos los numeros positivos y realizar el producto de todos los numeros negativos   */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;


int main(){
	
int i,n1,suma=0,multiplicacion=0,aux=1,salir;


do{


for(i=1;i<=10;i++){

do{
		
printf("Ingrese el numero [%i]",i);
	
if(validformat("%i", & n1))continue;

if(n1>=-99999 && n1<=99999){


if(n1>0){

b=n1<1;}else{if(n1!=0){

b=n1>1;}}}
	    
}while(b);	
	
if(n1 > 0){
			
suma = suma + n1;}
	
else if(n1 < 0 ){
		

aux= aux * n1;
					
multiplicacion = aux;	
			
}}

printf("\nLa suma de los numeros positivos es %i",suma);


printf("\nEl producto de los numeros negativos es %i",multiplicacion);	

suma=0;

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


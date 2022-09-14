//Guia 3-Ejercicio 18//

#include<stdio.h>

#include<stdlib.h>

/*Programa para calcular el mayor de los valores entre tres numeros ingresados por teclado  */


/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main(){
/*N1=valor 1 , N2=valor 2 y  N3=valor 3  */	
float N1,N2,N3;

int salir;

do{


do{

printf("\nIngrese el valor 1: ");

if(validFormat("%f", & N1)) continue;

if(N1>=1 && N1<=100000){

b=N1<1;}
	    
}while(b);

do{

printf("\nIngrese el valor 2: ");

if(validFormat("%f", & N2)) continue;

if(N2>=1 && N2<=100000){

b=N2<1;}
	    
}while(b);	
		
do{

printf("\nIngrese el valor 3: ");

if(validFormat("%f", & N3)) continue;

if(N3>=1 && N3<=100000){

b=N3<1;}
	    
}while(b);

if(N1>N2 && N1>N3){
	
printf("\nEl valor mayor es %.2f", N1);	
	
}

if(N2>N1 && N2>N3){
	
printf("\nEl valor mayor es %.2f", N2);	
	
}

if(N3>N2 && N3>N1){
	
printf("\nEl valor mayor es %.2f", N3);	
	
}

if(N1==N2 && N1==N3 && N2==N3){
	
printf("\nNingun valor es mayor ");	
	
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

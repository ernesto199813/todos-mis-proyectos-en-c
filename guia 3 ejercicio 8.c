//Guia 3-Ejercicio 8//

#include<stdio.h>

#include<stdlib.h>

/*Programa para calcular el valor de k,r y m ingresando por teclado dos numeros */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main (){  

/*n1=numero 1 , n2=numero 2 k=valor de k , r=valor de r y m= valor de m   */
float N1,N2,K,R,M,salir;

do{


do{

printf("Ingrese un numero ");

if(validFormat("%f", & N1)) continue;

if(N1>=1 && N1<=10000){

b=N1<1;}
	    
}while(b);

do{

printf("Ingrese otro numero ");

if(validFormat("%f", & N2)) continue;


if(N2>=1 && N2<=10000){

b=N2<1;}
	    
}while(b);

K=N1+N2;

R=K-12;

M=R-20;



printf("\nEl valor de K es %f", K);

printf("\nEl valor de R es %f", R);

printf("\nEl valor de M es %f", M);


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

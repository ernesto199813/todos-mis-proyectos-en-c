//Guia 2-Ejercicio 10//

#include<stdio.h>

#include<stdlib.h>

/* programa que le enviara un mensaje a la pantalla dependiendo de su calificacion , ingresando por teclado su calificacion */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;


int main (){
	
int salir;	
	
float nota; 


do{


do{

printf("Ingrese su calificacion: ");

if(validFormat("%f", & nota)) continue;

if(nota>=1 && nota<=10){


b=nota<1;}
	    
}while(b);



if( nota>=1 && nota<=4){
	
	
printf("Suspendido\n",nota);	
}
	
if( nota>=5 && nota<=6){
	
	
printf("Aprobado\n",nota);	
}	
	
	
if( nota>=7 && nota<=8){
	
printf("Notable\n",nota);	
}	
	
if( nota==9){
	
	
printf("Sobresaliente\n",nota);	
}	

if( nota==10){
	
	
printf("Matricula de honor\n",nota);	
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

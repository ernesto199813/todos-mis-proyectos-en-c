//Guia 3-Ejercicio 21//

#include<stdio.h>

#include<stdlib.h>

/*Programa para calcular yardas , pulgadas , centimetros y metros ,ingresando por teclado solo valores en pies */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main(){
	
float pies,centimetros,yardas,pulgadas,metros;
/*opc=opciones  */
int opc,salir;

do{



do{

printf("Que conversion desea realizar:");

printf("\n1-desea convertir pies a yardas");

printf("\n2-desea convertir pies a pulgadas");

printf("\n3-desea convertir pulgadas a centimetros");

printf("\n4-desea convertir centimetros a metros\n");

if(validFormat("%i", & opc)) continue;

if(opc>=1 && opc<=4){

b=opc<1;}
	    
}while(b);



do{

printf("\nIngrese un valor en (pies): ");

if(validFormat("%f", & pies)) continue;

if(pies>=1 && pies<=10000){


b=pies<1;}
	    
}while(b);	

switch(opc){
	
case 1: yardas=0.3333*pies;

 printf("\nEl resultado en yardas es %.2f",yardas);break;


case 2: pulgadas=12*pies;

printf("\nEl resultado en pulgas es %.2f",pulgadas);break;


case 3: pulgadas=12*pies;

centimetros=pulgadas*2.54;


printf("\nEl resultado en centimetros es %.2f",centimetros);break;


case 4: pulgadas=12*pies;

centimetros=pulgadas*2.54;

metros=centimetros*0.01;

printf("\nEl resultado en metros es %.2f", metros);break;
	
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

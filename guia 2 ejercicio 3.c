// guia 2-Ejercicio 3//

#include<stdio.h>

#include<stdlib.h>

/*Programa que calcula su indice de masa corporal , introducciendo por teclado su peso y su altura  */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;


int main(){
	
int resultado,salir;	
/*imc=indice de masa corporal  */
float peso , altura,imc;

do{
	
	
do{
	
printf("Ingrese su peso en (KG): ");	
	
if(validFormat("%f", & peso)) continue;

if(peso>=1 && peso<=1000){


b=peso<1; }

}while(b);


do{


printf("Ingrese su altura en (CM):  ");

if(validFormat("%f", & altura)) continue;

if(altura>=1 && altura<=400){


b=altura<1;} 

}while(b);


altura=altura/100;

imc=(peso)/(altura*altura);

printf("Su indice de masa corporal es :%2f\n", imc);


if (imc<=18.5){
	
printf("\nusted tiene un peso inferior al normal este va desde (menos de 18.50 IMC en adelante)\n ", resultado);
}

if (imc>=18.5 && imc<=24.9){
	
printf("\nusted tiene un peso  normal este va desde (18.50 a 24.90 de IMC)\n", resultado);
}
if (imc>=25 && imc<=29.90){
	
printf("\nusted tiene un peso superior al normal este va desde (25.00 a 29.90 de IMC)\n ", resultado);
}
if (imc>=30){
	
printf("\nusted tiene obesidad este va desde (30 de IMC en adelante )\n ", resultado);
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

//Guia 2-Ejercicio 4//

#include<stdio.h>

#include<stdlib.h>


/*Programa para calcular el salario de un trabajador, ingresando por teclado las horas trabajadas y la tarifa  */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main(){

/*HT= horas trabajadas */
int HT,salir;

float tarifa, salario = 0;

do{

	
do{
	
printf("Ingrese las cantidades de horas: ");
if(validFormat("%i", & HT)) continue;

if(HT>=1 && HT<=10000){

b=HT<1; }


}while(b);
	
do{
	
printf("Ingrese el valor de tarifa: ");
if(validFormat("%f", & tarifa)) continue;

if(tarifa>=1 && tarifa<=10000){


b=tarifa<1; 
}

}while(b);
	
	
	
if(HT >= 40)
{
	
	
tarifa = tarifa * 1.5;

salario = HT * tarifa;
		
printf("El salario del trabajador es: %.2f\n\n", salario);
}
	
else 
{

salario = tarifa * HT;
		
printf("El salario del trabajador es: %.2f\n\n", salario);
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

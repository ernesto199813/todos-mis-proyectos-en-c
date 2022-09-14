//Guia 4-Ejercicio 33//

#include<stdio.h>

#include<stdlib.h>



/*Programa para determinar el promedio de milimetros de lluvia , el dia que llovio mas y el dia que llovio menos */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;


int main(){

/* i=contador ,cantidad_mm=cantidad de milimetros , mayores =  dia de mayor lluvia , menores=dia de menor lluvia,mayor_dia=el dia que cae mayor cantidad de  lluvia ,

menor_dia= el dia que cae menor cantidad de lluvia */

int i,mes,dia,cantidad_mm,mayores=0,promedio=0,menores=0,mayor_dia=0,menor_dia=0,salir;

do{


do{

printf("Ingrese un mes: ");

if(validformat("%i", & mes)) continue;


if(mes>=1 && mes<=12){

b=mes<1;}

}while(b);

if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){
	
dia=31;	
	
}

if(mes==2){
	
dia=28;	
	
}

if(mes==4||mes==6||mes==9||mes==11){
	
dia=30;	
	
}

for(i=1;i<=dia;i++){
	
do{

printf("Ingrese la cantidad de milimetros de lluvia en el dia %i: ",i);

if(validformat("%i", & cantidad_mm)) continue;

if(cantidad_mm>=1 && cantidad_mm<=100000){


b=cantidad_mm<1;}

}while(b);	

promedio=promedio+cantidad_mm;

if(cantidad_mm>mayores){
	
mayores=cantidad_mm;

mayor_dia=i;}
	
if(cantidad_mm>0 && menores==0||cantidad_mm<menores){
	
	
menores=cantidad_mm;	
	
menor_dia=i;	
}	
		
}


printf("\nEl dia de mayor lluvia es el dia %i ",mayor_dia);

printf("\nEl promedio de lluvias en milimetros es %i ",promedio/dia);

printf("\nEl dia de menor lluvia es el dia %i ",menor_dia);

promedio=0;

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

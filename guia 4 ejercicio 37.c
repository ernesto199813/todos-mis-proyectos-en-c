//Guia 4-Ejercicio 37//

#include<stdio.h>

#include<stdlib.h>



/*Programa para determinar el dia con mayor temperatura y el dia con menor temperatura , se imprimira un mensaje con la mayor temperatura y el dia que ocurrio y otro mensaje

con la menor temperatura y el dia que ocurrio */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;


int main(){

/* i=contador , mayores = mayor temperatura , menores=menor temperatura , temperatura_max=temperatura maxima , temperatura_min=temperatura minima , mayor_dia=variable donde 

se guardara el dia con la mayor temperatura , menor_dia= variable donde se guardara el dia con la menor temperatura */

int i,mes,dia,temperatura,mayores=0,menores=0,temperatura_min=0,temperatura_max=0,mayor_dia=0,menor_dia=0,salir;

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

printf("Ingrese la temperatura en el dia %i: ",i);

if(validformat("%i", & temperatura)) continue;

if(temperatura>=1 && temperatura<=10000){


b=temperatura<1;}

}while(b);	


if(temperatura>mayores){

mayores=temperatura;

mayor_dia=i;}
        
if(temperatura>0 && menores==0||temperatura<menores){

menores=temperatura;

menor_dia=i;}

if(temperatura>temperatura_max){
	
temperatura_max=temperatura;	
	
}

if(temperatura>0 && temperatura_min==0 ||temperatura<temperatura_min){
	
temperatura_min=temperatura;	
	
}


}


printf("\nEl dia con  mayor temperatura es el dia  %i con una temperatura de  %i",mayor_dia, temperatura_max);


printf("\nEl dia con  menor temperatura es el dia  %i con una temperatura de  %i",menor_dia,temperatura_min);

temperatura_min=0;

temperatura_max=0;

mayor_dia=0;

menor_dia=0;

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

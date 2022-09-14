//Guia 2-Ejercicio 5//

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

/* programa para calcular el numero de dias que han pasado en el 2013, introducciendo un dia y un mes por teclado*/

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;


int main (){

/* ND=numero de dias , d y m son variables que se van a usar validar a dias y a mes  */	
int dia , mes ,ND,salir; 


do {

do {
printf("Ingrese un dia: ");

if(validFormat("%i", & dia)) continue;

if(dia>=1 &&  dia<=31){
	
b=dia<1;

}
}while(b);

do {
printf("Ingrese un mes: ");

if(validFormat("%i", & mes)) continue;

if(mes>=1 &&  mes<=12){
	
b=mes<1;

}
}while(b);


if(mes==1 && dia>0 && dia<=31){
	
ND=ND+dia;	
	
printf("El numero de dias que han pasado son:%i",ND);}	

if(mes==2 && dia>0 && dia<=28){
	
ND=31;	
	
ND=ND+dia;	
	
printf("El numero de dias que han pasado son:%i",ND);}	
	
if(mes==3 && dia>0 && dia<=31){
	
ND=59;	
	
ND=ND+dia;	
	
printf("El numero de dias que han pasado son:%i",ND);}		
	
if(mes==4 && dia>0 && dia<=30){
	
ND=90;	
	
ND=ND+dia;	
	
printf("El numero de dias que han pasado son:%i",ND);}		
	
if(mes==5 && dia>0 && dia<=31){
	
ND=120;	
	
ND=ND+dia;	
	
printf("El numero de dias que han pasado son:%i",ND);}		

if(mes==6 && dia>0 && dia<=30){
	
ND=151;	
	
ND=ND+dia;	
	
printf("El numero de dias que han pasado son:%i",ND);}	

if(mes==7 && dia>0 && dia<=31){
	
ND=181;	
	
ND=ND+dia;	
	
printf("El numero de dias que han pasado son:%i",ND);}	

if(mes==8 && dia>0 && dia<=31){
	
ND=212;	
	
ND=ND+dia;	
	
printf("El numero de dias que han pasado son:%i",ND);}	

if(mes==9 && dia>0 && dia<=30){
	
ND=243;	
	
ND=ND+dia;	
	
printf("El numero de dias que han pasado son:%i",ND);}	

if(mes==10 && dia>0 && dia<=31){
	
ND=273;	
	
ND=ND+dia;	
	
printf("El numero de dias que han pasado son:%i",ND);}

if(mes==11 && dia>0 && dia<=30){
	
ND=304;	
	
ND=ND+dia;	
	
printf("El numero de dias que han pasado son:%i",ND);}	

if(mes==12 && dia>0 && dia<=31){
	
ND=334;	
	
ND=ND+dia;	
	
printf("El numero de dias que han pasado son:%i",ND);}

if(mes<0 || mes>12|| dia<0|| dia>31||mes==2 && dia>28||mes==4 && dia>30||mes==6 && dia>30||mes==9 && dia>30||mes==11 && dia>30 ){
	
printf("\nError al ingresar un dato", mes);	
	
	
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

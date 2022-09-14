//Guia 4-Ejercicio 38//

#include<stdio.h>

#include<stdlib.h>



/*Programa para determinar cual de las 20 participantes en un concurso de belleza tiene el mejor puntaje general,Puntaje acumulado por todas las participantes en Cultura 

general, en Inteligencia y en Belleza De los tres puntajes acumulados en el ítem anterior cual fue el menor */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;

/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras en nombre */
int validar_caracter(char Nombre[]);

/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras en apellido */
int validar_caracter1(char Apellido[]);

int main(){

/*PPI=puntos por inteligencia,PCG=puntos por cultura general,PPB=puntos por belleza,PG=puntaje general */

int i,PPI,PCG,PPB,n,a,PG[3],puntaje_maximo=0,max=0,puntaje_belleza=0,puntaje_inteligencia=0,puntaje_cultura=0,aux=0,salir;

char Nombre[10][10],Apellido[10][10],AC[1000];


do{


for(i=1;i<=2;i++){


do {

printf("Ingrese el nombre de la participante %i: ",i);

scanf("%s", & AC);

n=validar_caracter(AC);
	    
}while(n==0);

strcpy(Nombre[i], AC);

system("cls");

do {

printf("Ingrese el apellido de la participante %i: ",i);

scanf("%s", & AC);

a=validar_caracter1(AC);
	    
}while(a==0);

strcpy(Apellido[i], AC);

system("cls");


do{
	
printf("Ingrese los puntos por inteligencia de la participante (min=1 y max=10) %i: ",i);
	
if(validformat("%i", & PPI)) continue;

if(PPI>=1 && PPI<=10){

b=PPI<1;}
	
}while(b);

do{
	
printf("Ingrese los puntos por cultura general de la participante (min=1 y max=10) %i: ",i);
	
if(validformat("%i", & PCG)) continue;

if(PCG>=1 && PCG<=10){

b=PCG<1;}
	
}while(b);

do{
	
printf("Ingrese los puntos por belleza de la participante (min=1 y max=10) %i: ",i);
	
if(validformat("%i", & PPB)) continue;

if(PPB>=1 && PPB<=10){

b=PPB<1;}
	
}while(b);

PG[i]=0;

PG[i]=(PPB+PCG+PPI)/3;


if(PG[i]>puntaje_maximo){
	
puntaje_maximo=PG[i];	

max=i;}

puntaje_belleza=puntaje_belleza+PPB;

puntaje_inteligencia=puntaje_inteligencia+PPI;

puntaje_cultura=puntaje_cultura+PCG;

if(puntaje_belleza<puntaje_inteligencia && puntaje_belleza<puntaje_cultura){
	
aux=1;}

if(puntaje_inteligencia<puntaje_belleza && puntaje_inteligencia<puntaje_cultura){
	
aux=2;}

if(puntaje_cultura<puntaje_inteligencia && puntaje_cultura<puntaje_belleza){
	
aux=3;}

if(puntaje_belleza==puntaje_inteligencia && puntaje_belleza==puntaje_cultura && puntaje_inteligencia==puntaje_cultura ){
	
aux=4;}



}

printf("La participante con mayor puntaje general es %s %s con: %i\n",Nombre[max],Apellido[max],puntaje_maximo);	

printf("\nPuntos acumulados por todas las participantes en cultura general: %i",puntaje_cultura);

printf("\nPuntos acumulados por todas las participantes en belleza: %i",puntaje_belleza);

printf("\nPuntos acumulados por todas las participantes en inteligencia: %i",puntaje_inteligencia);

if(aux==1){
	
printf("\nEl item menor es belleza\n");}

if(aux==2){
	
printf("\nEl item menor es inteligencia\n");}

if(aux==3){
	
printf("\nEl item menor es cultura general\n");}

if(aux==4){
	
printf("\nExisten varios item menores\n");}


puntaje_maximo=0;

max=0;

puntaje_belleza=0;

puntaje_inteligencia=0;

puntaje_cultura=0;

aux=0;

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

int validar_caracter(char Nombre[])
{	
int i;
if((strlen(Nombre)) > 10){

system("cls");	
return 0;}

for(i=0; i<strlen(Nombre); i++){
	
if(!isalpha(Nombre[i])){
			
system("cls");
return 0;
}}
return 1;
}

int validar_caracter1(char Apellido[])
{	
int i;
if((strlen(Apellido)) >10){

system("cls");	
return 0;}

for(i=0; i<strlen(Apellido); i++){
	
if(!isalpha(Apellido[i])){
			
system("cls");
return 0;
}}
return 1;
}

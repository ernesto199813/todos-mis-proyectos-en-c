//Guia 3-Ejercicio 11//

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

/*programa para calcular el saldo gastado por una persona , ingresando por teclado su nombre, telefono y costo de la llamada telefonica  */


/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras en nombre y numeros enteros en numero */
int validar_caracter(char Nombre[]);

int validar_numero1(char Numero[]);

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main (){

/*CML=cantidad de minutos consumidos las letras n y nu ayudan a validar las funciones de nombre y numero  */
int nombre,numero,CML,n,nu,salir;

char Nombre[9],Numero[15];

do{

	
do {

printf("Ingrese su nombre ");

scanf("%s", & Nombre);

n=validar_caracter(Nombre);
	    
}while(n==0);

nombre=(Nombre);
	
system("cls");
	
if(nombre){

do{

printf("Ingrese su numero de telefono "); 

scanf("%s", & Numero);

nu=validar_numero(Numero);


}while(nu==0);

numero=atoi(Numero);}

system("cls");

do{

printf("Ingrese la cantidad de minutos consumidos ");

if(validFormat("%i", & CML)) continue;

if(CML>=1 && CML<=10000 ){

b=CML<1;}
	    
}while(b);



CML=CML*820;

printf("%s",nombre);    

printf(" su costo de llamada es %i BSF",CML);


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


int validar_caracter(char Nombre[])
{	
int i;
if((strlen(Nombre)) > 15){
	
system("cls");
		
return 0;}

for(i=0; i<strlen(Nombre); i++){
	
if(!isalpha(Nombre[i])){
		
		
system("cls");
return 0;
}
		
}
return 1;
}


int validar_numero(char Numero[])
{	
int i;
if( ((strlen(Numero))!=11)){
	
system("cls");
		
return 0;}

for(i=0; i<strlen(Numero); i++){
	
if(!(isdigit(Numero[i]))){


system("cls");
return 0;
}
		
}
return 1;
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

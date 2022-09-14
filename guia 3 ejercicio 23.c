//Guia 1 - Ejercicio 23 //

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

/* Este es un programa que simula ser una cuenta de banco donde se puede realizar :(consulta de saldo , deposito y retiro)*/

/* se utilizara esta funcion para  validar que los datos ingresados solo sean numeros en numero y clave   */
int validar_numero (char numero[]);

int validar_numeros(char clave[]);	

/* se utilizara esta funcion para  validar que los datos ingresados solo sean numeros en las variables float de retirar y depositar   */

void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main(){
	
/* opc=opciones , clv=clave que sera la predeterminada que es (1234) , saldo=la cantidad de saldo que disponemos en la cuenta que es 520000 , 
n1=primera variable para validar su ingreso de clave n2=segunda variable para validar con respecto a el menu de opciones   */		
	
int opc, clv,saldo=520000,n1,n2 ,salir;

char numero[2],clave[5];

float retirar , depositar ;	
	
do{

	
do {
printf("Ingrese una clave de 4 digitos(min=1000 y max=9999): ");
	
if(validFormat("%i", & clv)) continue;

if(clv>=1000 && clv<=9999){

b=clv<1; }

}while(b);	

system("cls");



do{
	
printf(" Menu de opciones\n");

printf("\n1. Consultar saldo\n");

printf("\n2. Retiro\n");

printf("\n3. Deposito\n");

scanf("%s",& numero); n2=validar_numero(numero); } while(n2==0);


opc=atoi(numero);	

system("cls");

switch(opc){
	
case 1: printf("su saldo es:%i\n ",saldo);
	
 break;

case 2: 

do{

printf("Cuanto dinero desea retirar ");

if(validFormat("%f", & retirar)) continue;

if(retirar>=1 && retirar<=saldo){


b=retirar<1;}
	    
}while(b);



if(saldo>retirar||saldo==retirar){

saldo=saldo-retirar;

retirar=0;
printf("\nsu saldo restante es de: %i\n",saldo);}

if(retirar>saldo){
		
printf("\nusted no dispone de fondos suficientes\n", saldo);
}

break;



case 3:	

do{

printf("Cuanto dinero desea  depositar "); 
if(validFormat("%f", & depositar)) continue;

if(depositar>=1 && depositar<=100000){


b=depositar<1;}
	    
}while(b);


saldo=saldo+depositar;


printf("su saldo total es de: %i\n",saldo);break;
	
default:printf("\nNo ingreso una operacion valida\n");
break;	
	
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


int validar_numero (char numero[]){

int i ;

for(i=0; i<strlen(numero);i++){
	
	
if(!(isdigit(numero[i]))){
	
	
printf("\nIngresa solo numeros\n");	

getch();

system("cls");
return 0;}}

return 1; 
}

int validar_numeros(char clave[]){

int i ;

for(i=0; i<strlen(clave);i++){
	
	
if(!(isdigit(clave[i]))){
	
	
printf("\nIngresa solo numeros\n");	

getch();

system("cls");
return 0;}}

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


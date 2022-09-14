//Guia 3-Ejercicio 15//

#include<stdio.h>

#include<stdlib.h>

#include<string.h>


/*Programa para calcular el gasto mensual total y quincenal , ingresando por teclado el gasto mensual de luz , agua , telefono y condominio y el nombre del usuario */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras en nombre */
int validar_caracter(char Nombre[]);


int main(){
/* n es una letra que sirve para validar a nombre */	
int nombre, n;

char Nombre[8];	
/*GM=gasto mensual  y GQ=gasto quincenal  */ 
float luz,agua,condominio,telefono,GM,GQ,salir;
	
do{

	
do {
printf("Ingrese su nombre ");

scanf("%s", & Nombre);

n=validar_caracter(Nombre);
	    
}while(n==0);

nombre=(Nombre);

system("cls");
	
do{
	
printf("Ingrese el gasto mensual de luz ");
if(validFormat("%f", & luz )) continue;

if(luz>=1 && luz<=100000){

	
b=luz<1;}
	
}while(b);	
	
do{
	
printf("Ingrese el gasto mensual de agua ");
if(validFormat("%f", & agua )) continue;

if(agua>=1 && agua<=100000){

	
b=agua<1;}
	
}while(b);	

do{
	
printf("Ingrese el gasto mensual de telefono ");
if(validFormat("%f", & telefono )) continue;

if(telefono>=1 && telefono<=100000){

b=telefono<1;}
	
}while(b);	
	
do{
	
printf("Ingrese el gasto mensual de condominio ");
if(validFormat("%f", & condominio )) continue;

if(condominio>=1 && condominio<=100000){

	
b=condominio<1;}
	
}while(b);		
	
	
GM=luz+agua+telefono+condominio;

GQ=GM/2;	
	
printf("%s",nombre);

printf("Su gasto mensual es de %.2f", GM);

printf("\nSu gasto quincenal es de %.2f",GQ);	
	
GM=0;

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
if((strlen(Nombre)) > 8){
	
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

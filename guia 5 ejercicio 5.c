//Guia 5-Ejercicio 5//

#include<stdio.h>

#include<stdlib.h>


/*Programa donde se ingresa el nombre,edad ,monto de asignacion mensual y monto de deduccion mensual y se dice la ganancia neta mensual,quincenal y semanal  */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;

/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras en nombre */
int validar_caracter(char Nombre[]);

int main(){


int  edad, salir,n,nombre;

/*MDAM=monto de asignacion mensual,MDDM= monto de deduccion mensual,SNM=sueldo neto mensual, SNQ= sueldo neto quincenal , SNS= sueldo neto semanal  */
float MDAM=0,MDDM=0,SNM=0,SNQ=0,SNS=0;

char Nombre[8];



do{

do{
	
printf("Ingrese su nombre: ");

scanf("%s", & Nombre);

n=validar_caracter(Nombre);	
	
}while(n==0);

nombre=(Nombre);

system("cls");



do{

printf("Ingrese su edad: ");

if(validformat("%i", & edad )) continue;

if(edad>=1 && edad<=130){

b=edad<1;}

}while(b);

do{

printf("Ingrese el monto de asignacion mensual: ");

if(validformat("%f", & MDAM )) continue;

if(MDAM>=1 && MDAM<=9999){


b=MDAM<0;}

}while(b);

do{

printf("Ingrese el monto de deduccion mensual: ");

if(validformat("%f", & MDDM )) continue;

if(MDDM>=1 && MDDM<=9999){

b=MDDM<0;}

}while(b);


SNM=MDAM-MDDM;

SNQ=SNM/2;

SNS=SNM/4;

printf("El listados de sueldos netos de %s es:",nombre);

printf("\nEl sueldo neto mensual es: %.2f ",SNM);

printf("\nEl sueldo neto quincenal es: %.2f ",SNQ);

printf("\nEl sueldo neto semanal es: %.2f ",SNS);

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

//Si la funci�n scanf retorna 0, fue porque hubo una falla en la lectura..
if(!scanf(tipo, validar))
{
//Limpiamos el b�fer del teclado para que la pr�xima lectura se lleve a cabo.
clearBuf();
system("cls");
return 1;}
    
//Si no encontramos un salto de l�nea en el b�fer, es porque el usuario no cumpli� con el formato.
if(getchar() != '\n'){
//Volvemos a limpiar el b�fer para la pr�xima lectura.
clearBuf();

system("cls");

return 1;}
system("cls");
return 0;
}

void clearBuf()
{
    
int ch;
//Limpia el b�fer del teclado hasta encontrar un salto de l�nea o fin del archivo
while((ch = getchar()) != '\n' && ch != EOF);}

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
}}
return 1;
}

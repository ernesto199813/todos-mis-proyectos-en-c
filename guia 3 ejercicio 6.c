//Guia 3-Ejercicio 6//

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

/* Programa para calcular el sueldo neto mensual y el sueldo neto mensual nuevo que tiene un incremento de 30% , ingresando por teclado nombre,edad,sexo ,monto de asignaciones 
mensuales y monto de deducciones mensuales */

/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras en nombre */
int validar_caracter(char Nombre[]);

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main (){
	
char Nombre[10];	
	
int edad, sexo,nombre,n,salir;	
	
float MAM ,MDM,SN,SNN;	

do{

	
do {

printf("Ingrese su nombre ");

scanf("%s", & Nombre);

n=validar_caracter(Nombre);
	    
}while(n==0);

nombre=(Nombre);

system("cls");

do {
printf("Ingrese su edad ");

if(validFormat("%i", & edad)) continue;

if(edad>=1 && edad<=150){


b=edad<1;}
	    
}while(b);

do {
printf("Ingrese su sexo\n");

printf("\n1-Hombre");
printf("\n2-Mujer ");

if(validFormat("%i", & sexo)) continue;

if(sexo>=1 && sexo<=2){


b=sexo<1;}
	    
}while(b);


do {
printf("Ingrese su monto de asignaciones mensuales  ");

if(validFormat("%f", & MAM)) continue;

if(MAM>=1 && MAM <=10000){


b=MAM<1;}
	    
}while(b);

do {
printf("Ingrese su monto de deducciones mensuales ");

if(validFormat("%f", & MDM)) continue;

if(MDM>=1 && MDM<=10000){


b=MDM<1;}
	    
}while(b);


SN=MAM-MDM;

SNN=SN*0.3+SN;

printf("Empleado %s",nombre);

printf("\nSu sueldo neto mensual es %.2f",SN);

printf("\nSu sueldo neto mensual nuevo es %.2f",SNN);

	
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


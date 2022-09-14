//Guia 3-Ejercicio 3//

#include<stdio.h>

#include<stdlib.h>

/* programa para determinar el sueldo neto mensual, quincenal , semanal de un empleado , ingresando por teclado su nombre ,edad , monto de asignaciones mensual y 
monto de deduccion semanal  */ 

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int validar_caracter(char Nombre[]);

int main (){

/* n servira para validar el Nombre */
int edad ,nombre,n,salir;	
	
char Nombre[10];	

/*AM=monto de asignaciones mensuales y DS=monto de deducciones semanales */
float AM,DS,mensual,quincenal,semanal;

do{


do{
	
printf("Ingrese su nombre ");	
	
scanf("%s", & Nombre);

n=validar_caracter(Nombre);

}while(n==0);

nombre=(Nombre);

system("cls");

do{

printf("Ingres su edad ");	
	
if(validFormat("%i", & edad)) continue;

if(edad>=1 && edad<=150){


b=edad<1;}
	    
}while(b);


do{
printf("Ingrese el monto de asignaciones mensuales ");	
	
if(validFormat("%f", & AM)) continue;

if(AM>=1 && AM<=10000){

b=AM<1;}
	    
}while(b);

do{	
printf("Ingrese el monto de deducciones semanales ");	
	
if(validFormat("%f", & DS)) continue;

if(DS>=1 && DS<=10000){

b=DS<1;}
	    
}while(b);



if(AM>=0 && AM<=100000 && DS>=0 && DS<25000 && edad>=1 && edad<=130) {

mensual=AM-(4*DS);

quincenal=(AM/2)-(2*DS);

semanal=(AM/4)-DS;

system("cls");

printf("%s\n",nombre);
	
printf("\nSu sueldo neto mensual es: %f",mensual);	
	
printf("\nSu sueldo neto quincenal es: %f",quincenal);

printf("\nSu sueldo neto semanal es: %f", semanal); }


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

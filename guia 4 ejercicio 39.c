//Guia 4-Ejercicio 39//

#include<stdio.h>

#include<stdlib.h>



/*Programa para calcular el salario semanal de cada trabajador de una empresa desde la tarifa horaria y el numero de horas trabajadas ademas del nombre*/

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;

/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras en nombre */
int validar_caracter(char Nombre[]);

int main(){

/*n=variable para poder validar los nombres , NDHT=numero de horas trabajadas*/

int salario_semanal,tarifa_horaria,NDHT,nombre,n,salir;

char Nombre[8];


do{

do {

printf("Ingrese su nombre: ");

scanf("%s", & Nombre);

n=validar_caracter(Nombre);
	    
}while(n==0);

nombre=(Nombre);

system("cls");


do{

printf("ingrese el sueldo por hora (min=1 y max=10000): ");

if(validformat("%i", & tarifa_horaria)) continue;

if(tarifa_horaria>=1 && tarifa_horaria<=10000){


b=tarifa_horaria<1;}

}while(b);

do{

printf("numero de horas trabajadas(min=1 y max=168): ");

if(validformat("%i", & NDHT)) continue;

if(NDHT>=1 && NDHT<=168){


b=NDHT<1;}

}while(b);

salario_semanal=tarifa_horaria*NDHT;


printf("El salario semanal de %s es %i ",nombre,salario_semanal);

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

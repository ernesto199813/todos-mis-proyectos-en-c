//Guia 4-Ejercicio 32//

#include<stdio.h>

#include<stdlib.h>



/*Programa para determinar cuantos hombres ganan menos de 400 y cuantas mujeres ganan mas de 500 , introduciendo por teclado ,legajo , sueldo y su sexo */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;


int main(){

/*i=contador , gananmas=contador para contar a las mujeres que ganan mas de 500, gananmenos=contador para los hombres que ganan menos de 400*/
int legajo,i,empleados,sueldo,sexo,gananmas=0,gananmenos=0,salir;

do{


do{

printf("Ingrese la cantidad de empleados de la empresa: ");

if(validformat("%i", & empleados)) continue;

if(empleados>=1 && empleados<=1000){

b=empleados<1;}

}while(b);

for(i=1;i<=empleados;i++){

do{
	
printf("ingrese su numero de legajo ,persona registrada numero %i: ", i);

if(validformat("%i", & legajo)) continue;

if(legajo>=1 && legajo<=empleados){


b=legajo<1;}
	
}while(b);
	
do{	
printf("ingrese su sueldo: ");

if(validformat("%i", & sueldo)) continue;

if(sueldo>=1 && sueldo<=100000){


b=sueldo<1;}
	
}while(b);
		
do{	
printf("ingrese su sexo\n");

printf("\n1-hombre");

printf("\n2-mujer\t");

if(validformat("%i", & sexo)) continue;

if(sexo==1 || sexo==2){

b=sexo<1;}
	
}while(b);

if(sexo==2 && sueldo>500){
	
gananmas++;	
	
}

if(sexo==1 && sueldo<400){
	
gananmenos++;	
	
}}

printf("Los hombres que ganan menos de 400 son %i\n", gananmenos);
	
printf("Las mujeres que ganan mas de 500 son %i", gananmas);

gananmas=0;

gananmenos=0;

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


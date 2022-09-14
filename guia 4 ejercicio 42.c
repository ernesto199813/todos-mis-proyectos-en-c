//Guia 4-Ejercicio 42//

#include<stdio.h>

#include<stdlib.h>



/*Programa para calcular el salario semanal de cada trabajador de una empresa desde la tarifa horaria y el numero de horas trabajadas ademas del nombre y la cantidad de 

empleados a los que se le calculo el salario,el empleado con el mejor salio y el empleado con el peor salario*/

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;

/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras en nombre */
int validar_caracter(char Nombre[]);

int main(){

/*n=variable para poder validar los nombres , NDHT=numero de horas trabajadas,i=contador*/

int salario_semanal[1000],tarifa_horaria,NDHT,n,salir,mayor_salario=0,menor_salario=0,aux=0,aux2=0,empleados,i,suma_de_salarios=0;

char Nombre[10][10],VC[1000];

float promedio_salario=0;

do{


do{

printf("Ingrese la cantidad de empleados que tiene su empresa(min=1 y max=1000): ");

if(validformat("%i", & empleados)) continue;

if(empleados>=1 && empleados<=1000){


b=empleados<1;}

}while(b);



for(i=1;i<=empleados;i++){


do {

printf("Ingrese el nombre del empleado numero %i: ",i);

scanf("%s", & VC);

n=validar_caracter(VC);
	    
}while(n==0);

strcpy(Nombre[i], VC);

system("cls");


do{

printf("ingrese el sueldo por hora del empleado numero %i (min=1 y max=10000): ",i);

if(validformat("%i", & tarifa_horaria)) continue;

if(tarifa_horaria>=1 && tarifa_horaria<=10000){


b=tarifa_horaria<1;}

}while(b);

do{

printf("numero de horas trabajadas del empleado numero %i (min=1 y max=168): ",i);

if(validformat("%i", & NDHT)) continue;

if(NDHT>=1 && NDHT<=168){

b=NDHT<1;}

}while(b);



salario_semanal[i]=tarifa_horaria*NDHT;

if(salario_semanal[i]>mayor_salario){
	
mayor_salario=salario_semanal[i];

aux=i;	
		
}


if(salario_semanal[i]>=0 && menor_salario==0||salario_semanal[i]<menor_salario){
	
menor_salario=salario_semanal[i];

aux2=i;	
		
}


suma_de_salarios=suma_de_salarios+salario_semanal[i];


}

for(i=empleados;i<=empleados;i++){

promedio_salario=suma_de_salarios/i;

printf("Nombre de la persona: %s\n",Nombre[i]);

printf("\nLa tarifa horaria es de: %i\n",tarifa_horaria);

printf("\nNumero de horas trabajadas: %i\n",NDHT);

printf("\nEl salario semanal es: %i \n",salario_semanal[i]);

printf("\nCantidad de empleados a los que se le calculo el salario: %i\n",i);

printf("\nEl empleado con el mayor salario es %s con %i\n",Nombre[aux],mayor_salario);

printf("\nEl empleado con el menor salario es %s con %i\n",Nombre[aux2],menor_salario);}

printf("\nEl costo de la empresa en salarios es: %i\n",suma_de_salarios);

printf("\nEl salario promedio es: %.2f\n",promedio_salario);

suma_de_salarios=0;

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



//Guia 4-Ejercicio 29//

#include<stdio.h>

#include<stdlib.h>


/*Programa donde se ingresa el valor hora del empleado,el nombre del empleado, la antig�edad y la cantidad de horas trabajadas en el mes.

Se Imprime el recibo correspondiente con el nombre, la antig�edad, el valor hora, el total a cobrar en bruto, el total de descuentos y el valor a cobrar.  */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;

/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras en nombre */
int validar_caracter(char Nombre[]);


int main(){

/*NDT=numero de telefono , CDMEL=cantidad de minutos en llamda ,n e i = sirven para validar datos   */

int edad, salir,n,nombre;

float VHE=0,ADE=0,CDM=0,TCB=0,TD=0,VC=0;

char Nombre[8];



do{

do{

printf("Ingrese el valor hora de el empleado:");

if(validformat("%f", & VHE )) continue;

if(VHE>=1 && VHE<=10000)
b=VHE<1;

}while(b);


do{
	
printf("Ingrese su nombre: ");

scanf("%s", & Nombre);

n=validar_caracter(Nombre);	
	
}while(n==0);

nombre=(Nombre);

system("cls");


do{

printf("Ingrese la antiguedad del empleado(en a%cos):",164);

if(validformat("%f", & ADE )) continue;

if(ADE>=1 && ADE<=100){

b=ADE<1;}

}while(b);



do{

printf("Ingrese la cantidad de horas trabajadas en el mes:");

if(validformat("%f", & CDM )) continue;

if(CDM>=1 && CDM<=744){

b=CDM<1;}

}while(b);


TCB=(ADE*30)+(CDM*VHE);

TD=TCB*0.13;

VC=TCB-TD;

printf("El usuario de nombre: %s",nombre);

printf("\nAntiguedad: %.2f",ADE);

printf("\nEl Valor hora: %.2f",VHE);

printf("\nEl total a cobrar en bruto: %.2f",TCB);

printf("\nEl total de descuento: %.2f",TD);

printf("\nEl valor a cobrar: %.2f",VC);

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


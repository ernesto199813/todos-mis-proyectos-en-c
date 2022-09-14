//Guia 4-Ejercicio 46//

#include<stdio.h>

#include<stdlib.h>



/*Programa con menu de opciones donde se pueden realizar operaciones como suma,resta,multiplicacion ,division y se muestra el resultado de esa operacion*/

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;



int main(){

int opc;

float A,B,suma=0,resta=0,multiplicacion=0,division=0,salir;

do{


do{

printf("Bienvenido al menu de opciones desea:\n");

printf("\n1-Sumar");

printf("\n2-Restar");

printf("\n3-Multiplicar");

printf("\n4-Division\n");


if(validformat("%i", & opc)) continue;

if(opc>=1 && opc<=4){
	
b=opc<1;	
}

if(opc>=1 && opc<=4){
	
	
do{

printf("Ingrese un valor:");

if(validformat("%f", & A)) continue;

if(A>=1 && A<=9999){


b=A<0;}

}while(b);
	
do{

printf("Ingrese otro valor:");

if(validformat("%f", & B)) continue;

if(B>=1 && B<=9999){

b=B<0;}

}while(b);	
}


}while(b);

switch(opc){
	
case 1: suma=A+B;

printf("El resultado en la suma es: %.2f",suma);

break;	


case 2:resta=A-B;

printf("El resultado en la resta es: %.2f",resta);

break;	



case 3:multiplicacion=A*B;

printf("El resultado en la multiplicacion es: %.2f",multiplicacion);

break;	

case 4:if(B!=0){
	
division=A/B;	

printf("El resultado en la division es: %.2f",division);

		
}else{printf("Valor indeterminado");}break;		
}

suma=0;

resta=0;

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

//Guia 3-Ejercicio 22//

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include<math.h>

/*Programa con menu de opciones donde en la primera opcion se puede calcular el valor de k introducciendo A por teclado , en la segunda opcion se ingresan A,B y C 

y se remplaza el valor de B en A y el valor de C en B  y la tercera opcion se ingresa nombre , edad,sexo  y nota del alumno por teclado y se muestra un mensaje en pantalla si a 

aprobado o reprobado */


/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras en nombre */
int validar_caracter(char Nombre[]);

int main(){

/*PR=promedio */	
float PR;

char Nombre[8];

/*A1 y A= valor de a , opc=opciones , n letra para validar a nombre B=valor de b y C= valor de c ,K=valor de k   */
int opc,A1,A,B,C,K,n,nombre,edad,sexo,salir;

do{


do{

printf("Que desea realizar");

printf("\n1-Ingresar el valor numerico de A para poder calcular K");

printf("\n2-Ingresar el valor de A,B y C e intercambian el valor de B en A y C en B  ");

printf("\n3-Ingresar Nombre,Edad ,Sexo y Nota de un alumno para notificarle si esta aprobado o reprobado\n");

if(validFormat("%i", & opc)) continue;

if(opc>=1 && opc<=3){

b=opc<1;}
	    
}while(b);


switch(opc){
	
case 1:do{

printf("\nIngrese el valor de A: ");

if(validFormat("%i", & A1)) continue;

if(A1>=1 && A1<=100000){
b=A1<1;


}

}while(b);
	
	
K=sqrt(A1);

printf("\nEl valor de K es %i",K);break;


case 2: 
do{

printf("\nIngrese el valor de A: ");

if(validFormat("%i", & A)) continue;

if(A>=1 && A<=100000){

b=A<1;
}
}while(b);

do{

printf("\nIngrese el valor de B: ");

if(validFormat("%i", & B)) continue;

if(B>=1 && B<=100000){

b=B<1;

}
}while(b);


do{

printf("\nIngrese el valor de C: ");

if(validFormat("%i", & C)) continue;

if(C>=1 && C<=100000){
	
b=C<1;
	    
}
}while(b);

A=B;

B=C;

printf("\nEl valor de A es %i",A); 

printf("\nEl valor de B es %i",B); break;


case 3: 

do {

printf("Ingrese su nombre ");

scanf("%s", & Nombre);

n=validar_caracter(Nombre);
	    
}while(n==0);

nombre=Nombre;

system("cls");

do {
printf("\nIngrese su edad ");

if(validFormat("%i", & edad)) continue;

if(edad>=1 && edad<=150){
	
b=edad<1;

}
}while(b);

do {
printf("Ingrese su sexo\n");

printf("\n1-Hombre");
printf("\n2-Mujer ");

if(validFormat("%i", & sexo)) continue;

if(sexo>=1 && sexo<=2){
	
b=sexo<1;

}
}while(b);



do {
printf("\nIngrese su promedio(rango de notas 1 a 10): ");

if(validFormat("%f", & PR)) continue;

if(PR>=1 && PR<=100000){

b=PR<1;
	    
}
}while(b);

if(PR>=1 && PR<=10 && sexo>=1 & sexo<=2 && edad>=1 && edad<=120){

	
if(PR>=1 && PR<=4){

printf(" usted esta reprobado con %.2f",PR);

}

if(PR>=5 && PR<=10 && sexo==1){

printf("El Hombre %s",nombre);

printf(" esta aprobado con %.2f",PR); }

if(PR>=5 && PR<=10 && sexo==2){

printf("La mujer %s",nombre);

printf(" esta aprobada con %.2f",PR); }

}


if(PR>10||sexo>2||edad>120){ printf("\nError ingrese una opcion valida");
}

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


return 0;}

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
if((strlen(Nombre)) > 8)
{
system("cls");
		
return 0;
}
for(i=0; i<strlen(Nombre); i++)
{
if(!isalpha(Nombre[i]))
{

system("cls");
return 0;
}
		
}
return 1;
}

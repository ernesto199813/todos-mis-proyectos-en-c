//Guia 3-Ejercicio 9//

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

/*programa para calcular la nota final de un alumno ingresando por teclado su nombre , sexo , edad , nota 1, nota 2 y nota 3 */

/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras en nombre */
int validar_caracter(char Nombre[]);

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;


int main(){

char Nombre[8];
/* n es una letra que sirve para validar el nombre*/ 
int nombre, edad,sexo,n,salir;

/* N1=nota 1 , N2=nota 2 , N3=nota 3 */ 
float N1,N2,N3,nota_final;

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

do{

printf("Ingrese su nota 1- ");

if(validFormat("%f", & N1)) continue;

if(N1>=1 && N1<=20){

b=N1<1;}
	    
}while(b);

do{

printf("Ingrese su nota 2- ");

if(validFormat("%f", & N2)) continue;

if(N2>=1 && N2<=20){


b=N2<1;}
	    
}while(b);

do{

printf("Ingrese su nota 3- ");

if(validFormat("%f", & N3)) continue;

if(N3>=1 && N3<=20){


b=N3<1;}
	    
}while(b);



N1=N1*0.4;

N2=N2*0.35;

N3=N3*0.25;


nota_final=N1+N2+N3;

printf("\nAlumno %s ",nombre);

printf("\nSu nota final es de %.2f",nota_final);




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



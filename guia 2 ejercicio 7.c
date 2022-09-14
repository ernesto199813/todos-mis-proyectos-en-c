//Guia 2-Ejercicio 7//

#include<stdio.h>

#include<stdlib.h>

#include<string.h>


/* programa para determinar si es un angulo recto , agudo o obtuso introducciendo por teclado los valores en grados */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;


int main (){

	
int grados,salir;

do{


do {
printf("Por favor introduzca un valor en grados : ");

if(validFormat("%i", & grados)) continue;

if(grados>=1 && grados<=100000){
	
b=grados<1;

}
}while(b);

	
if(grados==90){

printf("Es un angulo recto\n",grados);	
		
}	

if(grados>=0 && grados<90){

printf("Es un angulo agudo \n",grados);	
		
}	
if(grados>90 && grados<=360){

printf("Es un angulo obtuso\n",grados);	
		
}		

if(grados<0||grados>360){
	
	
printf("Error (angulo no valido)\n",grados);	
	
	
	
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
	
return 0;
}

int validar_numero(char Grados[]){	
int i ;
	
for(i==0;i<strlen(Grados);i++){
	
if(!(isdigit(Grados[i]))){
	
printf("\nIngrese solo numeros");
		
getch();

system("cls");
return 0;
}}
	
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


//Guia 4-Ejercicio 43//

#include<stdio.h>

#include<stdlib.h>



/*Programa en el cual se registra el numero de socio,nombre y apellido , edad , que deporte practica y el promedio de de edad en esos deportes, tambien se indica el numero de 

personas que practican tenis y paddel */

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);
int b=1;

/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras en nombre */
int validar_caracter(char Nombre[]);

/* se utilizara esta funcion para  validar que los datos ingresados solo sean letras en apellido */

int validar_caracter1(char Apellido[]);

int main(){

/* NDS=numero de socio, n y a = sirven para validar que solo se ingresen letras y opc= opciones */
int i,opc,NDS,edad,n,a,nombre,apellido,salir,tenis=0,paddel_c=0,paddel,futbol=0,hockey=0,rugby=0,voley=0,edad_tenis=0,edad_futbol=0,edad_hockey=0,edad_rugby=0,edad_voley=0,

edad_paddel=0;

char Nombre[8],Apellido[8];


do{

do{
	
printf("Ingrese su numero de socio: ");

if(validformat("%i", & NDS))continue;

b=NDS<1;	
		
}while(b);


do {

printf("Ingrese su nombre: ");

scanf("%s", & Nombre);

n=validar_caracter(Nombre);
	    
}while(n==0);

nombre=(Nombre);

system("cls");

do {

printf("Ingrese su apellido: ");

scanf("%s", & Apellido);

a=validar_caracter1(Apellido);
	    
}while(n==0);

apellido=(Apellido);

system("cls");

do{
	
printf("Ingrese su edad: ");

if(validformat("%i", & edad))continue;

if(edad>=1 && edad<=130){

b=edad<1;}	
		
}while(b);


do{

printf("Indique el tipo de deporte que practica:\n");

printf("\n1-Tenis");

printf("\n2-Rugby");

printf("\n3-Voley");

printf("\n4-Hockey");

printf("\n5-Futbol\n");

if(validformat("%i", & opc)) continue;

if(opc>=1 && opc<=5){
	
b=opc<1;	
}
}while(b);

do{
	
printf("Usted practica paddel: ");

printf("\n1-Si");

printf("\n2-No\n");


if(validformat("%i", & paddel))continue;

if(paddel>=1 && paddel<=2){

b=paddel<1;}	
				
		
		
}while(b);


if(opc==1){
	
tenis++;

edad_tenis=(edad_tenis+edad)/tenis;	
	
	
	
}

if(opc==2){
	
rugby++;

edad_rugby=(edad_rugby+edad)/rugby;	
	
}

if(opc==3){
	
voley++;

edad_voley=(edad_voley+edad)/voley;	
	
}


if(opc==4){
	
hockey++;

edad_hockey=(edad_hockey+edad)/hockey;	
	
}

if(opc==5){
	
futbol++;

edad_futbol=(edad_futbol+edad)/futbol;	
	
}




if(paddel==1){
	
paddel_c++;	

edad_paddel=(edad_paddel+edad)/paddel_c;
	
}

printf("personas que practican tenis: %i",tenis);

printf("\npersonas que practican paddel: %i",paddel_c);

printf("\npromedio de edad de las personas que practican tenis: %i",edad_tenis);

printf("\npromedio de edad de las personas que practican paddel: %i",edad_paddel);

printf("\npromedio de edad de las personas que practican rugby: %i",edad_rugby);

printf("\npromedio de edad de las personas que practican voley: %i",edad_voley);

printf("\npromedio de edad de las personas que practican hockey: %i",edad_hockey);

printf("\npromedio de edad de las personas que practican futbol: %i",edad_futbol);

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

int validar_caracter1(char Apellido[])
{	
int i;
if((strlen(Apellido)) > 8){

system("cls");	
return 0;}

for(i=0; i<strlen(Apellido); i++){
	
if(!isalpha(Apellido[i])){
			
system("cls");
return 0;
}}
return 1;
}

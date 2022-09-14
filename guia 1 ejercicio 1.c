//Guia 1 -Ejercicio 1//

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

/* Este es un programa que se utiliza para realizar una eleccion entre 3 candidatos*/

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validformat(const char*, void*);

int b=1;

int main (){
///////////////// declararemos la variable de opc=opciones para poder hacer un menu con varias alternativas ///////////////////////////////////////////////////////////////////	 	
int opc,cedula;
/////////////// declaramos las variables  p=votos de pedro ,m=votos de maria ,j=votos de juan  y vn= votos nulos  para hacer un contador/////////////////////////////////////
int p=0,m=0,j=0,vn=0; 	
///////////////////////////utilizaremos 4 auxiliares para almacenar la suma de los votos de cada una de las opciones///////////////////////////////////////////////////////
int aux1=0,aux2=0,aux3=0,aux4=0;
 
///////////////////////////utilizaremos el do while para poder realizar un ciclo de votaciones hasta que nosotros decidamos concluirlo ///////////////////////////////////


do{


do {
	
printf("Ingrese su cedula de identidad: ");

if(validformat("%i", & cedula))continue;	

if(cedula>=1 && cedula<=100000000){

b=cedula<1;

} }while(b);


do{


printf( "Elija por que candidato quiere votar:\n ");	
 
printf("1. Pedro\n ");

printf("2. Maria\n ");	
	
printf("3. Juan\n");	

printf(" 4. terminar elecciones\n");

printf(" 5. otro numero es un voto nulo\n");

if(validformat("%i", & opc))continue;


if(opc>=1 && opc<=100000){

b=opc<1;

}}while(b);

////////////////////////////////////////// se utilizara un switch para elaborar un menu con diferentes opciones a ejecutar  ////////////////////////////////////////////////////
switch(opc){

system("cls");	
case 1:if(opc==1){
p=p+1;
printf(" el candidato pedro tiene %d votos\n ",p);

aux1=p;
}

break;

system("cls");
case 2 :if(opc==2){
m=m+1;
printf("la candidata maria tiene %d votos\n ",m);

aux2=m;
}break;
system("cls");
case 3 :if(opc==3){ j=j+1;
	
 printf("El candidato juan tiene %d votos\n ",j);
 
aux3=j; }break;

default: if(opc!=1 && opc!=2 && opc!=3 && opc!=4){ 

vn=vn+1;
printf(" se han contabilizado %d votos nulos ",vn);	

aux4=vn;} break;

} 

getch();

system("cls");


}while(opc!=4);
//////////////////////////////////////////////////////////////////////////////////////////////	


printf("votos de Pedro %d\n",aux1);
printf("votos de Maria %d\n",aux2);
printf("votos de Juan %d\n",aux3);
printf("votos nulos %d\n",aux4);	

if(aux1>aux2 && aux1>aux3){
	
printf("\nEl candidato pedro gano las elecciones\n");
}

if(aux2>aux1 && aux2>aux3){
	
printf("\nLa  candidata Maria gano las elecciones\n");
}
if(aux3>aux2 && aux3>aux1){
	
printf("\nEl candidato Juan gano las elecciones\n");
}

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


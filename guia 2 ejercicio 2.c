//Guia 2-Ejercicio 2//

#include<stdio.h>

#include<stdlib.h>

/*Este es un programa que determina el monto de la compra ,el monto de descuento , el monto a pagar y el numero de unidades de obsequio , por pantalla se ingresa la cantidad 

de docenas y el precio por docena */ 

/*funcion void para validar numeros enteros y flotantes  */
void clearBuf(void);
int validFormat(const char*, void*);
int b=1;

int main(){
	

int docena,regalo,salir;
/*PT=precio total */
float precio,PT,pagar,descuento;

do{


do {

printf("Ingrese la cantidad de docenas que desea comprar: ");

if(validFormat("%i", & docena)) continue;

if(docena>=1 && docena<=10000){

b=docena<1; }


}while(b);


do{

printf("Ingrese el precio por docena: ");

if(validFormat("%f", & precio)) continue;

if(precio>=1 && precio<=10000){


b=precio<1; }

}while(b);	 



if(docena>=1 && docena<3){

PT=precio*docena;	
descuento=PT*0.1;	

regalo=0;

pagar=PT-descuento;

printf("El monto de la compra es  %.f ", PT);
	
printf("\nEl descuento del producto es %3f", descuento);	

printf("\nmonto a pagar %2f", pagar);

printf("\nLa cantidad de docenas regaladas %i\n",regalo);


}
if(docena>=3){

PT=precio*docena;	
descuento=PT*0.15;	

regalo=docena/3;
pagar=PT-descuento;

printf("El monto de la compra es  %.f\n ", PT);
	
printf("\nEl descuento del producto es %3f\n", descuento);	

printf("\nmonto a pagar %2f\n", pagar);

printf("\nLa cantidad de docenas regaladas %i\n",regalo);}


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

int validFormat(const char* tipo, void* validar)
{
	b=1;//reseteamos la comprobacion de la opcion
    //Si la función scanf retorna 0, fue porque hubo una falla en la lectura..
    if(!scanf(tipo, validar))
    {
        //Limpiamos el búfer del teclado para que la próxima lectura se lleve a cabo.
        clearBuf();
        system("cls");
        return 1;
    }
    //Si no encontramos un salto de línea en el búfer, es porque el usuario no cumplió con el formato.
    if(getchar() != '\n')
    {
        //Volvemos a limpiar el búfer para la próxima lectura.
        clearBuf();
        system("cls");
        return 1;
    }
    system("cls");
    return 0;
}

void clearBuf()
{
    int ch;
    //Limpia el búfer del teclado hasta encontrar un salto de línea o fin del archivo
    while((ch = getchar()) != '\n' && ch != EOF);}

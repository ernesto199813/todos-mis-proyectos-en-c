//guia 1-Ejercicio 4//

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

/*Programa para determinar cuanto se le tiene que pagar a un empleado dependiendo del dia que trabajo y si trabajo de dia o de noche*/


/* se utilizara esta funcion para  validar que los datos ingresados solo sean numeros en turno , opciones ,horasdia , horasnoche ,horas y salir    */

int validar_numero(char turn[]);

int validar_numero1(char opciones[]);

int validar_numero2(char horasdia[]);

int validar_numero3(char horasnoche[]);

int validar_numero4(char horas1[]);

int validar_numero5(char salir1[]);


int main (){

/*opc=opciones , hd=horas dia , hn=horas noche , ht=horas totales  */	
int  horas=0,opc,turno, hd,hn,P1=0,P2=0,P3=0,P4=0,P5=0,P6=0,P7=0,salir,ht=0;

/* caracter de turno,opciones,horasdia,horasnoche,horas1 y salir1 para validar  */	
char turn[4],opciones[7],horasdia[2],horasnoche[2],horas1[3],salir1[2];

/* valores enteros que serviran para operar en los if  */
int hs,op,tn,hd1,hn1,hr1,s;

do{



do{

printf("Ingrese en que turno trabajo ");

printf("\n1-Diurno ");

printf("\n2-Nocturno ");

printf("\n3-Ambos turnos\n");

scanf("%s",& turn);

tn=validar_numero(turn);

}while(tn==0);


turno=atoi(turn);



if(turno==1||turno==2 ||turno==3){

if(turno==1||turno==2){
do {

printf("\ningrese la cantidad de horas que trabajo: ");
scanf("%s",& horas1);

hr1=validar_numero4(horas1);}while(hr1==0);

horas=atoi(horas1);
  }



if(turno==3){


do {
printf("\ningrese horas cumplidas en horario diurno: ");
scanf("%s",& horasdia);

printf("\ningrese horas cumplidas en horario nocturno: ");		
scanf("%s",& horasnoche);	

hd1=validar_numero2(horasdia);
 
hn1=validar_numero3(horasnoche);

}while(hd1==0||hn1==0);

hd=atoi(horasdia);

hn=atoi(horasnoche);

ht=hd+hn;	

}



if(horas<=16 && horas>=1 ||ht>=1 && ht<=16 ){

do {


printf("\ningrese el dia de la semana que estuvo trabajando ");

printf("\n1- Lunes");

printf("\n2- Martes");

printf("\n3- miercoles");

printf("\n4- Jueves");

printf("\n5- viernes");

printf("\n6 - Sabados");

printf("\n7- Domingo\n");

scanf("%s",& opciones);

op=validar_numero1(opciones);

}while(op==0);

opc=atoi(opciones);

if(opc>=1 && opc<=7){



if(opc>=1 && opc<=6 && turno==1){ 

P1=1000*horas;

printf("\nEl pago que le corresponde por su trabajo es de  %i BSF\n",P1);

}

if(opc>=1 && opc<=6 && turno==2){ 

P2=1600*horas;

printf("\nEl pago que le corresponde por su trabajo es de  %i BSF\n",P2);


}

if(opc>=1 && opc<=6 && turno==3){ 


hd=hd*1000;
hn=hn*1600;
P5=hn+hd;

printf("\nEl pago que le corresponde por su trabajo es de  %i BSF\n",P5);
}


if(opc==7 && turno==1){
P3=1400*horas;

printf("\nEl pago que le corresponde por su trabajo es de  %i BSF\n",P3);

}

if(opc==7 && turno==2){

P4=2200*horas;

printf("\nEl pago que le corresponde por su trabajo es de  %i BSF\n",P4);

}	

if(opc==7 && turno==3){ 


hd=hd*1400;
hn=hn*2200;
P6=hn+hd;

printf("\nEl pago que le corresponde por su trabajo es de  %i BSF\n",P6);
}

	
 do {
 printf("\nDesea repetir el programa ingrese cualquier numero excepto el 2");

printf("\nDesea salir del programa oprima el (2)");

scanf("%s", & salir1); s=validar_numero5(salir1);  }while(s==0);

salir=atoi(salir1);

}}}




if(opc<1 || opc>7||turno<1 || turno>3||ht<1 && horas==0 || horas<1 && ht==0|| ht>16 && horas==0|| horas>16 && ht==0){
	printf("\ningrese un dato valido\n");
	 system("pause");}


system("cls");
}while(salir!=2);
		
return 0 ;	
}


int validar_numero(char turn[]){
	
int i;
	
for(i==0;i<strlen(turn);i++){
	
if(!(isdigit(turn[i]))){
	

system("cls");
return 0;
}}
	
return 1;	
}

int validar_numero1(char opciones[]){	
int i ;
	
for(i==0;i<strlen(opciones);i++){
	
if(!(isdigit(opciones[i]))){
	

system("cls");
return 0;
}}
return 1;	
}

int validar_numero2(char horasdia[]){	
int i ;
	
for(i==0;i<strlen(horasdia);i++){
	
if(!(isdigit(horasdia[i]))){
	

system("cls");
return 0;
}}
	
return 1;	
}

int validar_numero3(char horasnoche[]){	
int i ;
	
for(i==0;i<strlen(horasnoche);i++){
	
if(!(isdigit(horasnoche[i]))){
	

system("cls");
return 0;
}}
	
return 1;	
}


int validar_numero4(char horas1[]){	
int i ;
	
for(i==0;i<strlen(horas1);i++){
	
if(!(isdigit(horas1[i]))){
	
system("cls");
return 0;
}}
	
return 1;	
}


int validar_numero5(char salir1[]){	
int i ;
	
for(i==0;i<strlen(salir1);i++){
	
if(!(isdigit(salir1[i]))){
	
system("cls");
return 0;
}}
	
return 1;	
}

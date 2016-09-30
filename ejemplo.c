#include <stdio.h>

#define esBisiesto(year)((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)

int main(void){
char *dias[7]={"Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
int totalDias[] = {0,0,31,59,90,120,151,181,211,242,272,303,333};
int dia=0, mes=0 ,anio=0, auxViernes=0, diaSemana=0, bisiesto=0, inicio=1804, cantDias=0, i=0;

printf("Dame el dia: ");
scanf("%d",&dia);
printf("Dame el mes: ");
scanf("%d",&mes);
printf("Dame el anio: ");
scanf("%d",&anio);

for(; inicio <= anio; inicio++){
bisiesto = (esBisiesto(inicio)) ? 29 : 28;
auxViernes = diaSemana;
(bisiesto == 29) ? diaSemana +=2 : diaSemana++;
if(diaSemana >= 7){
if(bisiesto == 29)
if(auxViernes == 5)
diaSemana = 0;
else
diaSemana = 1;
else
diaSemana = 0;
}
}

bisiesto = (esBisiesto(anio)) ? 29 : 28;
if(bisiesto == 29)
dia++;
cantDias = totalDias[mes] += dia;

for(; i<= cantDias-1; i++){
auxViernes++;
if(auxViernes == 7)
auxViernes = 0;
}
(auxViernes==0) ? auxViernes=6 : auxViernes--;


printf("\n El %02d/%02d/%d fue %s", dia, mes, anio, dias[auxViernes]);

printf("\n\n");
return 0;
}

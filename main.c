#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define DIM 100
#define ESC 27


 typedef struct {

    char calle[30];
  char nro[6];
  char localidad[50];
  char provincia[40];
  char cpos[6];

  } stDomicilio;


int main()
{

    stDomicilio arreglo[DIM];
    int Validos=0;

    Validos=CargaDomicilios(arreglo,Validos,DIM);


    return 0;
}





stDomicilio CargaUnDomicilio()
{
    stDomicilio a;
    printf("Carga una calle \n");
    fflush(stdin);
    gets(a.calle);
    printf("Carga nro \n");
    scanf(&a.nro);
    printf("Ingrese una localidad\n");
    fflush(stdin);
    gets(a.localidad);
    printf("Carga una provincia \n");
    fflush(stdin);
    gets(a.provincia);
    printf("Carga un codigo postal \n");
    scanf(&a.cpos);

    return a;

}
int CargaDomicilios(stDomicilio a[],int v,int dim){

    char opcion=0;
    while(v<dim && opcion!=ESC){
        system("cls");
        a[v]=CargaUnDomicilio();
        v++;
        printf("\nPresione una tecla para continuar o ESC para salir");
        opcion=getch();
    }
        return v;

}

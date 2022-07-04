#include<stdio.h>
#include<conio.h>
int main()
{
    
    float litros, galones;
    int selector;

    printf("Programa conversión litros-galones, galones-litros\n\n");
    printf("------------------------------------------------------\n\n");
    printf("Selecciona 1.litro-galones o 2.galones-litros o 3.salir:\n\n");

    scanf("Escribe la opción: %d",&selector);
    
    
    if(selector==1)
    {
        printf("Introduzca los litros:");
        scanf("%f",&litros);
        galones=litros*0.264172;
        printf("\n\tEl resultado es:");
        printf("%f",&galones);
    }
    else if(selector==2)
    {
        printf("Introduzca los galones:");
        scanf("%f",&galones);
        litros=galones*3.7854;
        printf("\n\tEl resultado es:");
        printf("%f",&litros);

    }
    else
    {
        printf("\n\n\t\tDato no válido");
    }
        

    
    
    getche();
    printf("\n\nSeleccionó terminar.Adios");



}

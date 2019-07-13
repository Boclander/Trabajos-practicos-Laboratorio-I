#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int main()
{
    int opcion;
    int numeroA=0;
    int numeroB=0;
    int resultadoSuma;
    int resultadoResta;
    int resultadoMultiplicacion;
    float resultadoDivision;
    int resultadoFactoreoA=0;
    int resultadoFactoreoB=0;
    int validacion=0;
    do
    {

        printf("================================\n");
        printf("       >> CALCULADORA <<     \n");
        printf("================================\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("1.Ingresar primer operando: %d\n", numeroA);
        printf("\n");
        printf("2.Ingresar segundo operando: %d\n", numeroB);
        printf("\n");
        printf("3.Calcular todas las operaciones\n");
        printf("\n");
        printf("4.Informar resultados\n");
        printf("\n");
        printf("5.Salir\n");
        printf("\n");
        opcion=pedirEntero();

        switch(opcion)
        {
        case 1:
            system("cls");
            numeroA=pedirEntero();
            break;
        case 2:
            system("cls");
            numeroB=pedirEntero();
            break;
        case 3:
            system("cls");
            printf("================================\n");
            printf("    Calculando resultados..\n");
            printf("================================\n");
            printf("\n");
            resultadoSuma=sumar(numeroA, numeroB);
            resultadoResta=restar(numeroA, numeroB);
            resultadoMultiplicacion=multiplicar(numeroA, numeroB);
            if (numeroB != 0)                                                           //No se puede dividir por 0.
            {
                numeroA=(float)numeroA;                                                 //Convierte los numeros en float.
                numeroB=(float)numeroB;
                resultadoDivision=dividir(numeroA, numeroB);
            }
            if (numeroA >= 0)                                                           //No se pueden factorear numeros negativos.
            {
                resultadoFactoreoA=factorear(numeroA);
            }
            if (numeroB >= 0)
            {
                resultadoFactoreoB=factorear(numeroB);
            }
            validacion=1;                                                               //No se puede seleccionar la opcion 4
            break;                                                                      //antes que la 3.
        case 4:
            if (validacion == 1)
            {
            system("cls");
            printf("================================\n");
            printf("    Mostrando resultados\n");
            printf("================================\n");
            printf("\n");
            printf("El resultado de %d + %d es: %d\n", numeroA, numeroB, resultadoSuma);
            printf("\n");
            printf("El resultado de %d - %d es: %d\n", numeroA, numeroB, resultadoResta);
            printf("\n");
            printf("El resultado de %d * %d es: %d\n", numeroA, numeroB, resultadoMultiplicacion);
            printf("\n");
            if (resultadoDivision == 0)
            {
                printf("No se puede dividir un numero por 0\n");
            } else
            printf("El resultado de %d / %d es: %.2f\n", numeroA, numeroB, resultadoDivision);
            printf("\n");
            if (resultadoFactoreoA == 0)                                                    //Ningun numero tiene como factorial 0
            {                                                                               //por lo tanto lo uso como control que sea
                printf("No se puede factorear un numero negativo\n");                       //un numero natural o 0.
            } else
            printf("El factorial de %d es: %d\n", numeroA, resultadoFactoreoA);
            printf("\n");
            if (resultadoFactoreoB == 0)
            {
                printf("No se puede factorear un numero negativo\n");
            } else
            printf("El factorial de %d es: %d\n", numeroB, resultadoFactoreoB);
            printf("\n");
            } else
            {
                system("cls");
                printf("================================\n");
                printf("\n");
                printf("    No se puede obtener los\n");
                printf("\n");
                printf("     resultados sin realizar\n");
                printf("\n");
                printf("        las operaciones\n");
                printf("\n");
                printf("================================\n");

            }
            resultadoDivision=0;                                                            //Resetea los valores de control.
            resultadoFactoreoA=0;
            resultadoFactoreoB=0;
            validacion=0;

            break;
        case 5:
            opcion=5;
            break;
        default:
            printf("No ingreso una opcion correcta\n");
            break;
        }
        system("pause");
        system("cls");
    }
    while(opcion != 5);

    return 0;
}

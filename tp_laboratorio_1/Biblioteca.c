#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int pedirEntero(void)
{
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    return numero;
}

int sumar (int numeroA, int numeroB)
{
   int resultado;

    resultado=numeroA+numeroB;

    return resultado;
}
int restar (int numeroA, int numeroB)
{
    int resultado;

    resultado=numeroA-numeroB;

    return resultado;
}
int multiplicar (int numeroA, int numeroB)
{
    int resultado;

    resultado=numeroA*numeroB;

    return resultado;
}
float dividir (float numeroA, float numeroB)
{
    float resultado;

    resultado=numeroA/numeroB;

    return resultado;
}
int factorear (int numeroA)
{
    int factorialA;
    int factorA=1;

    for (factorialA=numeroA; factorialA > 0; factorialA--)
    {
        factorA=factorA*factorialA;
    }
    return factorA;
}

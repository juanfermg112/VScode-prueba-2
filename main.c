#include <stdio.h>

int main (int argc, char *argv[]) {

    float a, b, resultado;
    int opc;

    printf("Ingrese una opcion\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");

    scanf("%d", &opc);

    printf("Ingrese el primer valor\n");
    scanf("%f", &a);

    printf("Ingrese el segundo valor\n");
    scanf("%f", &b);


    if (opc==1)
    {
        resultado=a+b;
        printf("El resultado de la suma es %f\n", resultado);
    } else if (opc==2)
    {
        resultado= a-b;
        printf("El resultado de la resta es %f\n", resultado);
    } else if (opc==3)
    {
  
        resultado= a*b;
        printf("El resultado de la multiplicacion es %f\n", resultado);
    } else if (opc==4)
    {
    if (b==0)
    {
        printf("No se puede dividir para 0");
    } else
    {
        resultado= a/b;
        printf("El resultado de la division es %f\n", resultado);
    }
    }
    

    return 0;
}
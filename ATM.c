#include <stdio.h>

int main() {

    printf("menu principal del banco, bienvenido! como prueba introduce un saldo base");
    
    float saldo = 0;
    float cantidad = 0;
    int opciones;
    scanf("%f",&saldo);
    
    printf("1. Ingresar dinero\n");
    printf("2. Retirar dinero\n");
    printf("3. Ver saldo\n");
    printf("0. Salir\n");
    do {
        scanf("%d",&opciones);

        switch (opciones)
        {
        case 1:
            printf("cuanto quieres ingresar");
            scanf("%f",&cantidad);
            saldo = saldo + cantidad;
            printf("Tu saldo es %.2f\n",saldo);
            break;
        case 2:
            printf("cuanto quieres retirar");
            scanf("%f",&cantidad);
            if (cantidad > saldo) {
                printf("saldo insuficiente\n");
            }
            else  {
                saldo = saldo - cantidad;
                printf("tu saldo actual es %.2f\n",saldo);
            }
            break;
        case 3:
            printf("tu saldo es... %.2f\n",saldo);
            break;
        default:
            printf("saliendo del banco \n",saldo);
            break;
        }
    } while (opciones != 0);
    return 0;
    
}
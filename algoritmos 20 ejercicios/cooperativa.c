#include <stdio.h>
#include <stdbool.h>

int main() {
    float cuenta, propina, monto_propina, total_pagar;
    bool propina_valida;
    int total_entero;

    printf("--- Bienvenido al Sistema de Cobros de la Cooperativa ---\n");

    printf("Ingrese el monto de la cuenta ($): ");
    scanf("%f", &cuenta);

    printf("Ingrese el porcentaje de propina a dejar (ej. 10 para 10%%): ");
    scanf("%f", &propina);

    printf("\nProcesando los calculos...\n");

    propina_valida = (propina >= 0 && propina <= 30);

    monto_propina = cuenta * propina / 100.0;
    total_pagar = cuenta + monto_propina;


    printf("MONTO A PAGAR\n");
    printf("Subtotal de la cuenta: $%.2f\n", cuenta);
    printf("Porcentaje de propina: %.2f%%\n", propina);

    printf("¿Propina en el rango permitido (0 al 30%%)?: %s\n", propina_valida ? "Verdadero" : "Falso");
    
    printf("Monto extra por propina: $%.2f\n", monto_propina);
    printf("TOTAL A PAGAR: $%.2f\n", total_pagar);
    
    total_entero = total_pagar; 
    
    if (total_entero % 2 == 0) {
        printf("Nota: La parte entera del total ($%d) es un numero PAR.\n", total_entero);
    } else {
        printf("Nota: La parte entera del total ($%d) es un numero IMPAR.\n", total_entero);
    }

    printf("Gracias por usar el sistema!\n");

    printf("\nPresiona Enter para salir");
    fflush(stdin); 
    getchar();
    return 0;
}
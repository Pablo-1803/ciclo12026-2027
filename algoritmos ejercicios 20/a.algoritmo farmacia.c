#include <stdio.h>

#define DIAS_VENCIMIENTO 90
#define TEMP_MAX 25.0
#define FACTOR_GENERICO 1.0
#define FACTOR_PATENTE 1.5
#define FACTOR_CONTROLADO 2.0

int main() {
    int stock_actual;
    float ventas_diarias;
    char tipo_med;
    float temp_almc;
    float factor;
    int dias_autonomia, ventas_ajustadas, alerta_stock;
    int dia, mes, anio;
    printf ("Ingrese el stock actual: ");
    scanf ("%d", &stock_actual);
    printf ("Ingrese las ventas diarias: ");
    scanf ("%f", &ventas_diarias);
    printf ("Ingrese el tipo de medicamento (G: Generico, P: Patente, C: Controlado): ");
    scanf (" %c", &tipo_med);
    printf ("Ingrese la fecha de vencimiento (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &anio);
    printf ("Ingrese la temperatura de almacenamiento: ");
    scanf ("%f", &temp_almc);
    if (tipo_med == 'G'){
        factor = 1.0;
    }
    else if (tipo_med == 'P'){
        factor = 1.5;
    }
    else if (tipo_med == 'C'){
        factor = 2.0;
    }
    else {
        printf("Tipo de medicamento no válido.\n");
        return;
    }
    if (ventas_diarias>0){
        dias_autonomia = stock_actual / ventas_diarias;
        printf("Los dias de autonomia son: %d\n", dias_autonomia);
    }
    else {
        printf("Las ventas diarias deben ser positivas.\n");

        if (ventas_diarias>0){
            ventas_ajustadas = ventas_diarias * factor;
            printf("Las ventas ajustadas son: %d\n", ventas_ajustadas);
        }
        alerta_stock = dias_autonomia < 10;
        printf ("ESTADO DE STOCK Y ALERTAS\n");
        printf ("Dias de autonomia: %d\n", dias_autonomia);
    }
    if (temp_almc > TEMP_MAX) {
        printf("ALERTA: La temperatura de almacenamiento es mayor a %.1f°C.\n", TEMP_MAX);
    }
    else {
        printf("La temperatura de almacenamiento es adecuada.\n");
        printf("%.1f\n", temp_almc);
    }
    if (alerta_stock) {
        printf("ALERTA: El stock es insuficiente para los proximos 10 dias.\n");
    }
    else {
        printf("El stock es suficiente para los proximos 10 dias.\n");
    }
    printf ("RESUMEN DE DATOS\n");
    printf ("Stock actual: %d\n", stock_actual);
    printf ("Ventas diarias: %.2f\n", ventas_diarias);
    printf ("Tipo de medicamento: %c\n", tipo_med);
    printf ("Temperatura de almacenamiento: %.1f\n", temp_almc);
    printf ("Fecha de vencimiento: %d/%d/%d\n", dia, mes, anio);

    printf("\nPresiona Enter para salir");
    fflush(stdin); 
    getchar();
    return 0;
    }


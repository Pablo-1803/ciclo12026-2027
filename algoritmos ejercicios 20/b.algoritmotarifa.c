#include <stdio.h>

#define TARIFA_MES_A 80.0
#define TARIFA_MES_M 40.0
#define TARIFA_MES_C 120.0
#define DESC_VIP 0.20
#define DESC_EMPRESA 0.30
#define FACTOR_CENTRO 1.5

int main() {
    char tipo_vehiculo, tipo_cliente, zona;
    int dias, resto_dias;
    float horas_extras;
    float tarifa_base = 0.0;
    float descuento = 0.0;
    float factor = 1.0;
    float tarifa_final = 0.0;

    printf("Ingrese tipo de vehiculo A: Auto, M: Moto, C: Camioneta: ");
    scanf(" %c", &tipo_vehiculo);
    
    printf("Ingrese numero de dias: ");
    scanf("%d", &dias);
    
    printf("Ingrese horas extras: ");
    scanf("%f", &horas_extras);
    
    printf("Ingrese tipo de cliente N: Normal, V: VIP, E: Empresa: ");
    scanf(" %c", &tipo_cliente);
    
    printf("Ingrese la zona A: Centro, B: Barrio, I: Industrial: ");
    scanf(" %c", &zona);

    if ((tipo_vehiculo == 'A') || (tipo_vehiculo == 'a')) {
        tarifa_base = TARIFA_MES_A;
    } else if ((tipo_vehiculo == 'M') || (tipo_vehiculo == 'm')) {
        tarifa_base = TARIFA_MES_M;
    } else if ((tipo_vehiculo == 'C') || (tipo_vehiculo == 'c')) {
        tarifa_base = TARIFA_MES_C;
    } else {
        printf("Tipo de vehiculo no valido. Asumiendo Auto.\n");
        tarifa_base = TARIFA_MES_A;
    }

    if ((zona == 'A') || (zona == 'a')) {
        factor = FACTOR_CENTRO;
    }

    if ((tipo_cliente == 'V') || (tipo_cliente == 'v')) {
        descuento = DESC_VIP;
    } else if ((tipo_cliente == 'E') || (tipo_cliente == 'e')) {
        descuento = DESC_EMPRESA;
    }

    float tarifa_dias = (tarifa_base / 30.0);
    float tarifa_horas = (tarifa_dias/24.0);
    float monto_dias = tarifa_dias * dias;
    float monto_horas = tarifa_horas * horas_extras;
    float subtotal = monto_dias + monto_horas;
    float valor_descuento = subtotal * descuento;
    float sub_neto = subtotal - valor_descuento;
    float total = sub_neto * factor;

    printf("\n--- DETALLE DE FACTURACION ---\n");
    printf("Tarifa mensual base: $%.2f\n", tarifa_base);
    printf("Factor zona aplicado: %.2f\n", factor);
    printf("Descuento aplicado: %.0f%%\n", descuento * 100);
    printf("Costo proporcional por %d dias: $%.2f\n", dias, tarifa_dias);
    printf("Monto descontado: $%.2f\n", valor_descuento);
    printf("Costo por %.2f horas extras: $%.2f\n", horas_extras, monto_horas);
    printf("TARIFA FINAL A PAGAR: $%.2f\n", total);
    printf("------------------------------\n");

    printf("\nPresiona Enter para salir");
    fflush(stdin); 
    getchar();
    return 0;
}

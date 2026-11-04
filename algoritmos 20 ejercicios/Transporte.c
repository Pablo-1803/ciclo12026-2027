#include <stdio.h>
#include <stdbool.h>

int main() {
    float z, w;
    float suma, resta, producto, cociente;
    bool w_es_valido;
    
    int dividendo_extra = 100;
    int divisor_extra = 3;
    int resto_extra;

    printf("--- Sistema de Calculo - Empresa de Transporte ---\n");
    printf("Ingrese el primer valor (z): ");
    scanf("%f", &z);
    printf("Ingrese el segundo valor (w): ");
    scanf("%f", &w);

    suma = z + w;
    resta = z - w;
    producto = z * w;

    w_es_valido = (w != 0.0);
    if (w_es_valido) {
        cociente = z / w;
    } else {
        cociente = 0.0; 
    }

    resto_extra = dividendo_extra % divisor_extra;

    printf("Suma: %.2f\n", suma);
    printf("Resta: %.2f\n", resta);
    printf("Producto: %.2f\n", producto);
    
    if (w_es_valido) {
        printf("Cociente: %.2f\n", cociente);
    } else {
        printf("Cociente (z / w): Error - Division por cero evitada.\n");
    }
    printf("Calculo adicional (Resto de %d %% %d): %d\n", dividendo_extra, divisor_extra, resto_extra);
    
    printf("Operacion finalizada.\n");

    printf("\nPresiona Enter para salir");
    fflush(stdin); 
    getchar();
    return 0;
}
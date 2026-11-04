#include <stdio.h>
#include <stdbool.h>

int main() {
    const float PRECIO_BANO = 15.0;
    const float PRECIO_CORTE = 25.0;
    const float PRECIO_VET = 50.0;
    const float RECARGO_URGENCIA = 1.5;
    const float DESC_MASCOTA_PEQUENA = 0.20;
    const float LIMITE_PESO = 5.0;

    char tipo_mascota;
    float peso;
    int edad;
    char tipo_servicio, tipo_servicio_1;
    int urgencia_1; 
    bool urgencia;
    
    float costo_base;
    float descuento;
    float valor_recargo;
    float costo_total, costo_suma, costo_urg, costo_final;


    // 1. Lectura de datos
    printf("Ingrese tipo de mascota (P: perro, G: gato, A: ave, R: roedor): ");
    scanf(" %c", &tipo_mascota); // El espacio antes de %c evita errores al leer caracteres
    
    printf("Ingrese el peso de la mascota en kg: ");
    scanf("%f", &peso);
    
    printf("Ingrese la edad de la mascota en anios: ");
    scanf("%d", &edad);
    
    printf("Ingrese el tipo de servicio (B: bano, C: corte, V: veterinario): ");
    scanf(" %c", &tipo_servicio);
    
    printf("¿Es una urgencia? (SI / NO): ");
    scanf("%d", &urgencia);

    if (tipo_mascota == 'P') {
        tipo_mascota = 'Perro';
    }
    if (tipo_mascota == 'G') {
        tipo_mascota = 'Gato';
    }
    if (tipo_mascota == 'A') {
        tipo_mascota = 'Ave';
    }
    if (tipo_mascota == 'R') {
        tipo_mascota = 'Roedor';
    }
    if (tipo_servicio == 'B') {
        tipo_servicio_1 = 'Bano';
        costo_base = PRECIO_BANO;
    }
    if (tipo_servicio == 'C') {
        tipo_servicio_1 = 'Corte';
        costo_base = PRECIO_CORTE;
    }
    if (tipo_servicio == 'V') {
        tipo_servicio_1 = 'Veterinario';
        costo_base = PRECIO_VET;
    }
    costo_total = costo_base;
    if (peso < LIMITE_PESO && costo_base > 0) {
        descuento = costo_base * DESC_MASCOTA_PEQUENA;
        costo_total = costo_total - descuento;
    }
    costo_final = costo_total;
    if (urgencia == 'SI') {
        costo_final = costo_total * RECARGO_URGENCIA;
    }

    printf("\nDATOS DEL SERVICIO\n");
    printf("Tipo de mascota: %c\n", tipo_mascota);
    printf("Peso de la mascota: %.2f kg\n", peso); 
    printf("Edad de la mascota: %d anios\n", edad);
    printf("Servicio solicitado: %c\n", tipo_servicio_1);
    printf ("Descuento por mascota ligera: $%.2f\n", descuento);
    printf("Costo base: $%.2f\n", costo_base);
    printf("Descuento: $%.2f\n", descuento);
    printf("Costo total a pagar: $%.2f\n", costo_final);

    printf("\nPresiona Enter para salir");
    fflush(stdin); 
    getchar();
    return 0;
}
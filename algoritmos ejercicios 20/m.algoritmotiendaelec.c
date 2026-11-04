#include <stdio.h>
#include <stdbool.h>
#define UMBRAL 100.0
int main() {

    float b, s;
    float suma, resta, producto, cociente;
    bool s_es_valido, resultado_valido, suma_supera_umbral;

    printf("--- Tienda de Electronica: Analisis de Operaciones ---\n");

    printf("Ingrese el primer valor (b): ");
    scanf("%f", &b);
    printf("Ingrese el segundo valor (s): ");
    scanf("%f", &s);

    suma = b + s;
    resta = b - s;
    producto = b * s;
    s_es_valido = (s != 0.0);

    if (s_es_valido) {
        cociente = b / s;
        resultado_valido = true; 
    } else {
        cociente = 0.0;
        resultado_valido = false; 

    suma_supera_umbral = (suma > UMBRAL);

    printf("Suma (b + s): %.2f\n", suma);
    printf("Resta (b - s): %.2f\n", resta);
    printf("Producto (b * s): %.2f\n", producto);

    if (resultado_valido) {
        printf("Cociente (b / s): %.2f\n", cociente);
    } else {
        printf("Cociente (b / s): Error - Division por cero evitada.\n");
    }

    printf("Bandera de validez (resultado_valido): %s\n", resultado_valido ? "Verdadero" : "Falso");
    printf("¿La suma supera el umbral de %.1f?: %s\n", UMBRAL, suma_supera_umbral ? "Verdadero" : "Falso");

    printf("\nPresiona Enter para salir");
    fflush(stdin); 
    getchar();
    return 0;
}

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define LIBRA_KG 0.453592

int main() {
    float libras, kg, log_kg;
    bool es_positivo;
    printf("Ingrese el peso en libras: ");
    scanf("%f", &libras);

    kg = libras * LIBRA_KG;
    es_positivo = (kg > 0);

    if (es_positivo) {
        log_kg = log10(kg); 
    } else {
        log_kg = 0.0; 
    }
    printf("%.2f libras equivalen a %.4f kg.\n", libras, kg);
    printf("Variables Auxiliares y Resultados\n");
    printf("Evaluacion: %s\n", es_positivo ? "Verdadero" : "Falso");
    
    if (es_positivo) {
        printf("Logaritmo en base 10 de %.4f kg: %.4f\n", kg, log_kg);
    } else {
        printf("Logaritmo en base 10 de %.4f kg: No se define y se asigno 0\n", kg);
    }
    printf("Constante de conversion LIBRA_KG: %f\n", LIBRA_KG);

    printf("\nPresiona Enter para salir");
    fflush(stdin); 
    getchar();
    return 0;
}
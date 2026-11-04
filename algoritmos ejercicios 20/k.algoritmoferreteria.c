#include <stdio.h>
#include <stdbool.h>
#include <math.h> 

int main() {
    float arista, volumen, cociente_extra;
    bool arista_valida, en_rango;

    printf("Calculo de Piezas Cubicas\n");

    printf("Ingrese la medida de la arista del cubo (en cm): ");
    scanf("%f", &arista);

    en_rango = (arista >= 0.1 && arista <= 100.0);
    
    if (!en_rango) {
        printf("Advertencia: La medida (%.2f) esta fuera del rango normal (0.1 a 100 cm).\n", arista);
        printf("Se procedera con el calculo, pero verifique la medida.\n\n");
    }

    arista_valida = (arista > 0);

    if (arista_valida) {
        volumen = pow(arista, 3);

        cociente_extra = volumen / 1.5;
        
        printf("El volumen del cubo es: %.2f cm cubicos.\n", volumen);
        printf("Evaluacion logica (arista > 0): %s\n", arista_valida ? "Verdadero" : "Falso");
        printf("Cociente extra (volumen / 1.5): %.2f\n", cociente_extra);
    } else {
        printf("Error: No se puede calcular el volumen. La arista debe ser mayor a cero.\n");
        printf("Evaluacion (arista > 0): %s\n", arista_valida ? "Verdadero" : "Falso");
    }
    printf("\n--- Justificacion de Tipos de Dato ---\n");
    printf("1. float (Real): Se usa para arista, volumen y cociente_extra porque las medidas fisicas neceitan decimal.\n");
    printf("2. bool (Logico): Se usa para arista_valida y en_rango porque solo pueden almacenar 1 o 0.\n");

    printf("\nPresiona Enter para salir");
    fflush(stdin); 
    getchar();
    return 0;
}
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    float arista, volumen;
    bool arista_valida;

    printf("Ingrese la medida de la arista del cubo: ");
    scanf("%f", &arista);

    arista_valida = (arista > 0);
    volumen = pow(arista, 3); 

    printf("\n--- Resultados ---\n");
    printf("Volumen del cubo: %.2f\n", volumen);
    printf("¿Arista valida (mayor a 0)?: %s\n", arista_valida ? "Verdadero" : "Falso");

    if (volumen > 0) {
        printf("Evaluacion: El volumen es POSITIVO.\n");
    } else if (volumen < 0) {
        printf("Evaluacion: El volumen es NEGATIVO.\n");
    } else {
        printf("Evaluacion: El volumen es CERO.\n");
    }

    printf("Operacion realizada: Potenciacion y evaluacion de signos.\n");

    printf("\nPresiona Enter para salir");
    fflush(stdin); 
    getchar();
    return 0;
}
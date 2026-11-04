#include <stdio.h>
#include <stdbool.h>
#include <math.h> 

#define LIBRA_KG 0.453592

int main() {
    float libras, kg, raiz_abs;
    bool kg_valido;
    int estado;

    printf("Ingrese el peso en libras: ");
    scanf("%f", &libras);

    kg = libras * LIBRA_KG;
    kg_valido = (kg > 0);

    raiz_abs = sqrt(fabs(kg));
    
    estado = 0;


    printf("%.2f libras equivalen a %.4f kg.\n", libras, kg);


    printf("-Resultados Adicionales \n");
    printf("Evaluacion relacional (kg > 0): %s\n", kg_valido ? "Verdadero" : "Falso");
    printf("Raiz cuadrada del valor absoluto (de %.4f): %.4f\n", fabs(kg), raiz_abs);
    printf("Codigo de estado final: %d (Exito)\n", estado);

    printf("\nPresiona Enter para salir");
    fflush(stdin); 
    getchar();
    return 0;
}
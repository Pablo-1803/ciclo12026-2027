#include <stdio.h>
#include <stdbool.h> 
int main() {

    int anio, valor_minimo;
    bool es_bisiesto;

    printf("Control de Anios y Temporadas\n");
    
    printf("Ingrese un anio para evaluar: ");
    scanf("%d", &anio);

    if (anio <= 0) {
        printf("Advertencia: El anio ingresado es negativo o cero.\n");
        anio = 1;
    }

    es_bisiesto = ((anio % 4 == 0) && (anio % 100 != 0 || anio % 400 == 0));

    if (es_bisiesto) {
        printf("Resultado: El anio %d SI es bisiesto.\n", anio);
    } else {
        printf("Resultado: El anio %d NO es bisiesto.\n", anio);
    }

    printf("Valor booleano (es_bisiesto): %s\n", es_bisiesto ? "Verdadero" : "Falso");

    printf("--- Justificacion de la logica ---\n");
    printf("AND (&&): Exige que se cumpla la regla base (multiplo de 4) y simultaneamente la condicion de los siglos.\n");
    printf("OR (||): Ofrece dos opciones validas para los siglos: que NO sea inicio de siglo (%% 100 != 0)\n");
    
    if (anio < 4) {
        valor_minimo = anio;
    } else {
        valor_minimo = 4;
    }
    printf("El valor numerico minimo evaluado en este programa (entre %d, 4, 100 y 400) es: %d\n", anio, valor_minimo);

    printf("\nPresiona Enter para salir");
    fflush(stdin); 
    getchar();
    return 0;
}
#include <stdio.h>
#include <stdbool.h>

#define PESO_MIN 1.0
#define PESO_MAX 50.0
#define LONG_MIN 10.0
#define LONG_MAX 100.0
#define TEMP_MIN -5.0
#define TEMP_MAX 30.0
#define HUM_MIN 0.0
#define HUM_MAX 100.0

int main() {
    float peso, longitud, temperatura, humedad;
    char tipo_producto;
    
    bool peso_valido, long_valida, temp_valida, hum_valida, tipo_valido, calidad_apta;
    
    int contador_ops = 0;
    int dividendo = 125, divisor = 7, resto_division;

    printf("Ingrese el peso del producto en kg: ");
    scanf("%f", &peso);
    contador_ops++;

    printf("Ingrese la longitud del producto encm: ");
    scanf("%f", &longitud);
    contador_ops++;

    printf("Ingrese la temperatura en grados C: ");
    scanf("%f", &temperatura);
    contador_ops++;

    printf("Ingrese la humedad (%%): ");
    scanf("%f", &humedad);
    contador_ops++;

    printf("Ingrese el tipo de producto ('A' Alimenticio, 'F' Farmaceutico, 'I' Industrial): ");
    scanf(" %c", &tipo_producto); 
    contador_ops++;

    // 3. Evaluación de las expresiones lógicas para cada parámetro
    peso_valido = (peso >= PESO_MIN && peso <= PESO_MAX);
    contador_ops++;

    long_valida = (longitud >= LONG_MIN && longitud <= LONG_MAX);
    contador_ops++;

    temp_valida = (temperatura >= TEMP_MIN && temperatura <= TEMP_MAX);
    contador_ops++;

    hum_valida = (humedad >= HUM_MIN && humedad <= HUM_MAX);
    contador_ops++;
    
    tipo_valido = (tipo_producto == 'A' || tipo_producto == 'F' || tipo_producto == 'I');
    contador_ops++;

    calidad_apta = (peso_valido && long_valida && temp_valida && hum_valida && tipo_valido);
    contador_ops++;

    resto_division = dividendo % divisor;
    contador_ops++;
    printf("RESULTADOS DEL CONTROL\n");
    printf("Calidad del producto apta: %s\n", calidad_apta ? "Verdadero" : "Falso");
    printf("Calculo adicional (Resto de %d / %d): %d\n", dividendo, divisor, resto_division);
    printf("Total de operaciones logicas y aritmeticas realizadas: %d\n", contador_ops);

    printf("\nPresiona Enter para salir");
    fflush(stdin); 
    getchar();
    return 0;
}
#include <stdio.h>
#include <string.h>

#define MONTO_MAX 5000.0
#define TRANSACCIONES_HORA 5
#define PAIS_RIESGO "unknown"

int main() {
    float monto;
    int hora;
    char pais[50];
    int num_transac_hora;
    char tipo;

    char posible_fraude;
    int resto_division;

    // Lectura de datos
    printf("Ingrese el monto de la transaccion: ");
    scanf("%f", &monto);
    
    printf("Ingrese la hora (0-23): ");
    scanf("%d", &hora);
    
    printf("Ingrese el pais destino: ");
    scanf("%s", pais);
    
    printf("Ingrese el numero de transacciones en la hora: ");
    scanf("%d", &num_transac_hora);

    while (getchar() != '\n');

    printf("Ingrese el tipo (T: transferencia, P: pago, C: compra): ");
    scanf("%c", &tipo);

    posible_fraude = (monto > MONTO_MAX && tipo == 'T') || 
                     (num_transac_hora > TRANSACCIONES_HORA) || 
                     (strcmp(pais, PAIS_RIESGO) == 0) || 
                     (hora >= 0 && hora <= 4 && monto > 1000.0);

    // Calculo adicional: resto de una division
    resto_division = num_transac_hora % 3;

    // Mostrar resultados por pantalla
    printf("\nRESULTADOS DEL ANALISIS\n");
    printf("Alerta de posible fraude: %s\n", posible_fraude ? "ACTIVADA" : "DESACTIVADA");
    printf("Resto de dividir las transacciones (%d) entre 3: %d\n", num_transac_hora, resto_division);
    
    printf("\nPresiona Enter para salir");
    fflush(stdin); 
    getchar();
    return 0;
}
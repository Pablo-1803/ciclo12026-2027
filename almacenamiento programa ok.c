#include <stdio.h>
void main (){
    int cant_doc, cant_img, cant_vid, cant_prog;
    float tam_doc, tam_img, tam_vid, tam_prog, cap_disco;
    float espacio_doc, espacio_img, espacio_vid, espacio_prog, espacio_total_MB, espacio_total_GB, porcentaje;

    printf("Ingresa la cantidad de documentos: ");
    scanf("%d", &cant_doc);
    printf("Ingresa el tamano promedio de los documentos en MB: ");
    scanf("%f", &tam_doc);

    printf("\nIngresa la cantidad de imagenes: ");
    scanf("%d", &cant_img);
    printf("Ingresa el tamano promedio de las imagenes en MB: ");
    scanf("%f", &tam_img);

    printf("\nIngresa la cantidad de videos: ");
    scanf("%d", &cant_vid);
    printf("Ingresa el tamano promedio de los videos en MB: ");
    scanf("%f", &tam_vid);

    printf("\nIngresa la cantidad de programas: ");
    scanf("%d", &cant_prog);
    printf("Ingresa el tamano promedio de los programas en MB: ");
    scanf("%f", &tam_prog);

    printf("\nIngresa la capacidad total del disco en GB: ");
    scanf("%f", &cap_disco);

    espacio_doc = cant_doc * tam_doc;
    espacio_img = cant_img * tam_img;
    espacio_vid = cant_vid * tam_vid;
    espacio_prog = cant_prog * tam_prog;

    espacio_total_MB = espacio_doc + espacio_img + espacio_vid + espacio_prog;
    espacio_total_GB = espacio_total_MB / 1024;
    porcentaje = (espacio_total_GB / cap_disco) * 100;

    printf("RESULTADOS");
    printf("Tu espacio ocupado por Documentos: %.2f MB\n", espacio_doc);
    printf("Tu espacio ocupado por Imagenes:   %.2f MB\n", espacio_img);
    printf("Tu espacio ocupado por Videos:     %.2f MB\n", espacio_vid);
    printf("Tu espacio ocupado por Programas:  %.2f MB\n", espacio_prog);
    printf("Tu espacio total utilizado en MB es: %.2f MB\n", espacio_total_MB);
    printf("Tu espacio total utilizado en GB es: %.2f GB\n", espacio_total_GB);
    printf("Tu porcentaje de disco utilizado es:  %.2f%%\n", porcentaje);
    printf ( "Realizado por: Pablo Riofrio\n");
    printf("\n");
    system("pause");
    }
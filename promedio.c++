#include <stdio.h>

int main() {
    float calificacion1, calificacion2, calificacion3 , promedio;

    // Leer las 3 calificaciones
    printf("Ingrese la primera calificacion: ");
    scanf("%f", &calificacion1);
    printf("Ingrese la segunda calificacion: ");
    scanf("%f", &calificacion2);
    printf("Ingrese la tercera calificacion: ");
    scanf("%f", &calificacion3);

    promedio = (calificacion1 + calificacion2 + calificacion3)/3;

    
    printf("El promedio redondeado es: %.4f\n", promedio);

    return 0;
}

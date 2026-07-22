#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

// Función para encontrar la secuencia más larga de 1s
int findLargestLine(int matrix[][SIZE]) {
    int largo_max = 0;
    int largo = 0;

    // Recorrer la matriz
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            // Contamos los 1s consecutivos
            if (matrix[i][j] == 1) {
                largo++; // Incrementamos el contador de consecutivos
                if (largo > largo_max) {
                    largo_max = largo; // Actualizamos el máximo si encontramos uno mayor
                }
            } else {
                largo = 0; // Reiniciar si encontramos un 0
            }
        }
        // Reiniciar al final de cada fila
        largo = 0;
    }

    return largo_max;
}

// Llenar la matriz de forma aleatoria
void aleatoriamente(int matrix[][SIZE]) {
    srand(time(NULL)); // Inicializamos el generador de números aleatorios
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = rand() % 2; // Generar 0 o 1 aleatoriamente
        }
    }
}

int main() {
    int matrix[SIZE][SIZE];
    aleatoriamente(matrix); // Llenamos la matriz con números aleatorios

    // Imprimir la matriz generada
    printf("Matriz generada:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Encontrar la secuencia más larga de 1s
    int secuencia_maslarga = findLargestLine(matrix);
    printf("La longitud de la secuencia más larga de 1s es: %d\n", secuencia_maslarga);

    return 0;
}


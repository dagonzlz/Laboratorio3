include <stdio.h>

// Pseudocódigo

// Función para calcular la suma de las diagonales de una matriz:
int suma_diagonales(int M[][4], int N) {  // Se puede usar [][4], (intento de solucion a error que me daba)
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += M[i][i];                // Diagonal principal
        sum += M[i][N - 1 - i];        // Diagonal secundaria
    }
    return sum;
}

int main() {
    // Ejemplos de matrices de distintos tamaños
    int M1[3][4] = { // Definicion un tamaño máximo que permita matrices de 3x3
        {1, 2, 3, 0},
        {4, 5, 6, 0},
        {7, 8, 9, 0}
    };

    int M2[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int M3[2][4] = { //2x2
        {1, 2, 0, 0},
        {3, 4, 0, 0}
    };

    // Aca se hace la muestra de resultados
    printf("Suma de diagonales para matriz 3x3: %d\n", suma_diagonales(M1, 3));
    printf("Suma de diagonales para matriz 4x4: %d\n", suma_diagonales(M2, 4));
    printf("Suma de diagonales para matriz 2x2: %d\n", suma_diagonales(M3, 2));
    return 0;
}



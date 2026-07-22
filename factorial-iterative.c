#include <stdio.h>

int factorial(int n) {
    int i = 1;
    while (n > 1) {
        i = i * n;
        n = n - 1; // Cambio realizado: eliminar el int  de la nueva variable n
    }
    return i;
}

int main(int argc, char *argv[]) {
    int num;
    printf("Ingrese un número: ");
    scanf("%d", &num);
    int fac = factorial(num);
    printf("%d! = %d\n", num, fac);
    return 0;
}

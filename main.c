#include<stdio.h>

void primero();
void segundo();
void iguales();

int main(){
    int n1, n2;
    printf("Ingrese el primer numero: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &n2);
    return 0;

if (n1 > n2) {
        primero(n1);
    } else if (n2 > n1) {
        segundo(n2);
    } else {
        iguales();
    }
}
;
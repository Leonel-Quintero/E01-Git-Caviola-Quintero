#include<stdio.h>

void funcion(int a, int b){
    printf("Primer numero: %d\n", a);
    printf("Segundo numero: %d\n", b);
}
void iguales(){
    printf("Son iguales");
}

int main(){
    
    int n1, n2;

    printf("Ingrese el primer numero: ");
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        funcion(n1, n2);
    } 
    else if (n1 < n2) {
        funcion(n2, n1);
    } 
    else {
        iguales();
    }   
}
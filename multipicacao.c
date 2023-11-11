#include<stdio.h>

int main(){

    float n1, n2, n3, n4, res;
    printf("Digite quatro numeros ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    
    res = n1 * n2 * n3 * n4;
    printf("Seu resultado foi: %f", res);
    
    return 0;   
}

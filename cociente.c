#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");

    int n1, n2, resq, resr;
    
    printf("Digite um número ");
    scanf("%i", &n1);
    printf("Digite outro número ");
    scanf("%i", &n2);

    resq = n1/n2;
    resr = n1 % n2;
    printf("O resultado do cociente é: %d e o resultado do resto é: %d", resq, resr);
    

    return 0;
}

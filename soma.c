#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    float n1, n2, n3, res, menos;

    printf("Digite dois n�meros: ");
    scanf("%f%f", &n1, &n2);
    printf("Digite mais um n�mero: ");
    scanf("%f", &n3);

    res = n1 + n2;
    menos = res - n3;
    printf("Esses dois numeros somados s�o: %f e subitraido do terceiro numero que voce digitou �: %f", res, menos);

    
}

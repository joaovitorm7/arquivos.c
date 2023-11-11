#include <stdio.h>

int main() {
    float N1, N2, N3, N4, exame, media, nmedia;
    scanf("%f%f%f%f", &N1, &N2, &N3, &N4);
    media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1))/(2 + 3 + 4 + 1);
      printf("Media: &.1f", media);
    
    if (media >= 7.0) {
        printf("Aluno aprovado.");
    }
    if (media < 5.0) {
        printf("Aluno reprovado.");
    }
    if (media > 5.0 || media < 7.0) {
        printf("Aluno em exame.");
        scanf("%f", &exame);
        printf("Nota do exame: %.1f", exame);
        nmedia = exame + (media)/2;
        if (nmedia > 5.0) {
            printf("Aluno aprovado.");
        } else {
            printf("Aluno reprovado.");
        }
        printf("Media final: %.1f", nmedia);
    } 
 
    return 0;
}

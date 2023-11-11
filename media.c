# include <stdio.h>

int main(){
    float n1, n2, n3, media;
    
    printf("Escreva a sua primeira nota: ");
    scanf("%f",&n1);
    printf("Escreva a sua segunda nota: ");
    scanf("%f",&n2);
    printf("Escreva sua terceira nota: ");
    scanf("%f",&n3);
    
    media = (n1+n2+n3)/3;
    printf("Sua media foi ",media);
    
    return 0;   
}

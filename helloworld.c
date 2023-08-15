#include <stdio.h>

int main(){
    int nota1, nota2, nota3, media

    printf("digite 3 notas:\n");

    printf("nota 1: ");
    scanf("%d", &nota1);
    printf("nota2: ");
    scanf("%d", &nota2);
    printf("nota 3:");
    scanf("%d",&nota3);

    media =(nota1 + nota2 + nota3)/3;

    if(media == 8){
        printf("parabens! bonus de 1 ponto!\n");
        media = media +1;

    }
    else if(media == 9){
        printf("parabens! bonus de 1 ponto!\n")
        media = media +1
    }
    printf("media: %d\n", media);

    if (media < 7){
        printf("reprovado\n");
    }
    else if (media > 8){
        printf("legal\n");
    }
}

#include <stdio.h>
int main(){

    //declaração de varíaveis
    int moveBispo, moveTorre, moveRainha;

    //movimento do bispo para a diagonal direita superior
    for (moveBispo = 0; moveBispo <5; moveBispo++){
        printf("Cima\nDireita\n");
    }

    //movimentação da torre para a direita
    moveTorre = 0;
    while (moveTorre <5){
        printf("Direta\n");
        moveTorre++;
    }

    //movimentação da rainha para a esquerda
    moveRainha = 0;
    do{
        printf("Esquerda\n");
        moveRainha++;
    }while (moveRainha<8);
    
    

    return 0;
}
#include <stdio.h>

void rainha (int casas) {
        if (casas == 0) return;
        printf("Esquerda\n");
        rainha(casas - 1);
        } 
    

void torre (int casas) {
        if (casas > 0){
        printf("Direita\n");
        torre(casas - 1);
        }
    }

void bispo (int casas) {

    if (casas == 0) return;

    // Loop externo
        for (int i = 0; i < 1; i++) {
        printf("Cima\n");

        // Loop interno - horizontal (Direita)
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }
    bispo(casas-1);
    }

void cavalo () {
    int x, y;
    
        for (x = 0; x < 3; x++) {
        if (x == 2) break; //quando chegar em 2 para.
        printf("Cima\n");
    }

        for (y = 0; y < 2; y++) {
        if (y == 1) continue; // quando chegar em 1, pula.
        printf("Direita\n");
    }
}

int main(){

    printf("\nRainha:\n");
    rainha(8);
        
    printf("\nTorre:\n");
    torre(5);

    printf("\nBispo:\n");
    bispo(5);

    printf("\nCavalo:\n");
    cavalo();


return 0;
    }
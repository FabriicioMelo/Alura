#include <stdio.h>

int main() {

    // imprime cabeçalho do nosso jogo
    printf("\n******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    int chutedousuario;
    int tentativas = 1;

    while(1){

        printf("\nTentativa %d\n", tentativas);
        printf("Chute um numero!\n");

        printf("-");
        scanf("%d", &chutedousuario);

        if(chutedousuario < 0) {
            printf("\nVoce nao pode inserir numeros negativos!\n");
            continue;
        }

        int acertou = (chutedousuario == numerosecreto);
        int maior = (chutedousuario > numerosecreto);
        int menor = (chutedousuario < numerosecreto);

        if(acertou){
            printf("\nParabens, voce acertou!\n");
            break;
        }
        else if(maior){
            printf("\nVoce errou!\n");
            printf("Jogue de novo, o numero e menor!\n");
        }
        else if(menor){
            printf("\nVoce errou!\n");
            printf("Jogue de novo, o numero e maior!\n");
        }

        tentativas ++;

    }

    printf("Fim de jogo!\n");
    printf("Voce acertou em %d tentativas!\n", tentativas - 1);

}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdbool.h>

void main () {
    setlocale(LC_ALL, "");
    char matriz[3][3];
    int i, j, n, x, y;
    printf("Ol�, seja bem vindo ao jogo da velha, as posi��es variam de 1 a 3.\n");
    for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
			printf("       ");
			matriz[i][j] = '-';
			printf("%c", matriz[i][j]);
		}
		printf("\n");
		printf("\n");
	}
    for (n=0; n<9;n++) {
        if (n%2 == 1) {
            printf("Vez do jogador O.\n");
            printf("Posi��o da linha: ");
            scanf("%d", &x);
            x--;

            printf("Posi��o da coluna: ");
            scanf("%d", &y);
            y--;
        } else {
            printf("Vez do jogador X.\n");
            printf("Posi��o da linha: ");
            scanf("%d", &x);
            x--;

            printf("Posi��o da coluna: ");
            scanf("%d", &y);
            y--;
        }
		printf("\n");
		system("CLS");
		if (matriz[x][y] == '-') {
            if (n%2 == 1) {
                matriz[x][y] = 'O';
            } else {
                matriz[x][y] = 'X';
            }
            for(i = 0; i < 3; i++){
				printf("\n");
				for(j = 0; j < 3; j++){
					printf("       ");
					printf("%c", matriz[i][j]);
				}
				printf("\n");
				printf("\n");
			}
        if((matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2] && matriz[0][0] != '-')||
			   (matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2] && matriz[0][0] != '-')||
			   (matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0] && matriz[0][0] != '-')||
			   (matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1] && matriz[0][1] != '-')||
			   (matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2] && matriz[0][2] != '-')||
			   (matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2] && matriz[1][0] != '-')||
			   (matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2] && matriz[2][0] != '-')||
			   (matriz[2][0] == matriz[1][1] && matriz[2][0] == matriz[0][2] && matriz[2][0] != '-')){
                if ((n%2)+1 == 1) {
                    printf("\nJogador X ganhou!\n\n\n");
                } else {
                    printf("\nJogador O ganhou!\n\n\n");
                }
				return;
			}
		} else {
		    for(i = 0; i < 3; i++){
				printf("\n");
				for(j = 0; j < 3; j++){
					printf("       ");
					printf("%c", matriz[i][j]);
				}
				printf("\n");
				printf("\n");
			}
		    printf("A posi��o � inv�lida ou ocupada.\n\n");

		    n--;
		}


    }
    printf("\nDeu velha.\n\n\n");
    system("pause");
}

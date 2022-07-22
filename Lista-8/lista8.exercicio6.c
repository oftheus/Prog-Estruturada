#include <stdio.h>
#include <stdlib.h>

enum elementos { vazio, peao, cavalo, torre, bispo, rei, rainha };

int main()
{
	int matriz[8][8] = {{1, 3, 0, 5, 4, 0, 2, 1},{1, 0, 1, 0, 0, 1, 0, 0},{0, 0, 0, 0, 1, 0, 6, 0},{1, 0, 0, 1, 1, 0, 0, 1},{0, 1, 0, 4, 0, 0, 1, 0},{0, 0, 3, 1, 0, 0, 1, 1},{1, 0, 6, 6, 0, 0, 1, 0},{1, 0, 5, 0, 1, 1, 0, 6}};
    float c;
	int cont[7] = {0};
	for (int i = 0; i < 8; i++) {
		for (int x = 0; x < 8; x++) {
			switch (matriz[i][x])
			{
			case vazio:
				cont[0]++;
				break;
			case peao:
				cont[1]++;
				break;
			case cavalo:
				cont[2]++;
				break;
			case torre:
				cont[3]++;
				break;
			case bispo:
				cont[4]++;
				break;
			case rei:
				cont[5]++;
				break;
			case rainha:
				cont[6]++;
				break;
			default:
				break;
			}
		}
	}

	printf("Soma total de peoes e bispos = %d\nQuantidade de posicoes com ausencia de pecas: %d\n\n",cont[1]+cont[4],cont[0]);

	printf("Quantidade de lugares sem pecas = %d\n", cont[0]);
	printf("Quantidade de peoes = %d\n", cont[1]);
	printf("Quantidade de cavalos = %d\n", cont[2]);
	printf("Quantidade de torres = %d\n", cont[3]);
	printf("Quantidade de bispos = %d\n", cont[4]);
	printf("Quantidade de reis = %d\n", cont[5]);
	printf("Quantidade de rainhas = %d\n", cont[6]);
	printf("\n");

	return 0;
}

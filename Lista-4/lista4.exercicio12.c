#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
  	setlocale(LC_ALL, "Portuguese");
  	char vetor[20], cr,c;
  	int i, len, j;

  	printf("Digite uma string de até 20 caracteres : ");
  	scanf("%[^\n]%c",vetor,&c);

  	printf("\nDigite o caracter a ser removido da string : ");
  	scanf("%c", &cr);

	len = strlen(vetor);

  	for(i = 0; i < len; i++)
	{
		if(vetor[i] == cr)
		{
			for(j = i; j < len; j++)
			{
				vetor[j] = vetor[j + 1];
			}
			len--;
			i--;
		}
	}
	printf("\nString removendo o caracter '%c' = %s \n", cr, vetor);

  	return 0;
}

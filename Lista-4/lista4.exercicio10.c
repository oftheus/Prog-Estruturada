#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int idade[20];
    int opiniao[20];

    for(int i = 0; i < 20; i++){
        printf("Espectador número %d, por favor insira sua idade\n>", i+1);
        int temp;
        scanf("%d", &temp);
        idade[i] = temp;
        printf("E sua opinião sobre o filme.\n1- Ótimo; 2- Bom; 3- Regular; 4- Ruim; 5- Pessimo\n>");
        scanf("%d",&temp);
        opiniao[i] = temp;
    }

    printf("-------------------\n");

    int n_otimos = 0;
    int n_boms = 0;
    int n_regular = 0;
    int n_ruims = 0;
    int n_pessimo = 0;
    int maior_idade_pessimo = 0;
    int maior_idade_otimo = 0;
    float media_ruins = 0;
    for(int i = 0; i < 20; i++){
        switch (opiniao[i])
        {
        case 1:
            n_otimos++;
            if(idade[i] > maior_idade_otimo) maior_idade_otimo = idade[i];
            break;
        case 2:
            n_boms++;
            break;
        case 3:
            n_regular++;
            break;
        case 4:
            n_ruims++;
            media_ruins += idade[i];
            break;
        case 5:
            n_pessimo++;
            if(idade[i] > maior_idade_pessimo) maior_idade_pessimo = idade[i];
            break;
        default:
            break;
        }
    }
    //a
    printf("O filme teve %d avaliações ótimo\n", n_otimos);
    //b
    float diferencaPerc = (n_boms/20.0) - (n_regular/20.0);

    if(diferencaPerc < 0) diferencaPerc *= -1;
    
    printf("A diferença entre avaliações boas e regulares é de %g%%\n", diferencaPerc*100);
    //c
    if(n_ruims > 0){
        media_ruins /= n_ruims;//faz a media a partir da soma
        printf("A média das idades dos que avaliaram o filme como ruim é de %g anos\n", media_ruins);
    } else{
        printf("Não houve avaliações ruims!\n");
    }
    //d
    if(n_pessimo > 0){
        printf("A porcentagem de pessimos é de %g%%.\nA pessoa mais velha a avaliar pessimo tinha %d anos.\n", (n_pessimo/20.0)*100, maior_idade_pessimo);
    }else{
        printf("Não houve avaliações péssimas!\n");
    }
    //e
    if(n_otimos == 0) printf("Não houve avaliações ótimas!\n");
    else if(n_pessimo == 0) printf("Não houve avaliações péssimas!\n");
    else{
        int dif = n_otimos - n_pessimo;
        if(dif < 0) dif *= -1;
        printf("A diferença entre o mais velho que votou ótimo e o mais velho que votou péssimo é de %d anos.\n", dif);
    }

    return 0;
}
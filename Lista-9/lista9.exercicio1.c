#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct data {
    int dia, mes, ano;
} Data;

typedef struct local {
    char ender[81]; /* endereço do local de provas */
    int sala; /* numero sala */
} Local;

typedef struct notas {
    float geral; /* prova de conhecimentos gerais */
    float especifica; /* prova de conhecimentos especificos */
} Notas;

typedef struct candidato {
    int inscr; /* numero de inscricao */
    char nome[81]; /* nome do candidato */
    Data nasc; /* data de nascimento */
    Local *loc; /* local de prova */
    Notas nt; /* notas de prova */
} Candidato;



void mostraCandidato(Candidato cand);

int main(){
    setlocale(LC_ALL, "Portuguese");

    int tam_vetor = 10;
    Candidato * vetorCandidatos = (Candidato*) malloc(tam_vetor * sizeof(Candidato));
    if(vetorCandidatos == NULL) exit(1);
    int n_candidatos = 0;
    while (1){
        if(n_candidatos == tam_vetor){
            tam_vetor +=10;
            vetorCandidatos = realloc(vetorCandidatos, tam_vetor);
            if(vetorCandidatos == NULL) exit(2);
        }
        int escolha = 0;
        printf("Escolha uma opção\n0-Adicionar Candidato 1-Ler informação de candidato 2-Exibir todos os candidatos 3-Trocar local de prova de candidato 4-Sair\n>");
        scanf("%d", &escolha);
        srand(1560);
        switch (escolha){
        case 0:
            //a
            printf("--------------------------------\n");
            Candidato novoCandidato;
            printf("Insira o nome do candidato\n");
            scanf("%80s", novoCandidato.nome);
            printf("Insira o seu número de inscrição\n>");
            scanf("%d", &novoCandidato.inscr);
            Data datNasc;
            printf("Insira sua data de nascimento no formato dd/mm/aaaa\n>");
            scanf("%2d/%2d/%4d", &datNasc.dia, &datNasc.mes, &datNasc.ano);
            novoCandidato.nasc = datNasc;
            Notas novaNota;
            printf("Insira a nota da prova de conhecimentos gerais(use , ao invés de .)\n>");
            scanf("%f", &novaNota.geral);
            printf("Insira a nota da prova de conhecimento específico\n>");
            scanf("%f", &novaNota.especifica);
            
            novoCandidato.nt = novaNota;

            Local novoLocal;
            printf("Insira o endereço do local de prova\n");
            scanf("%80s", novoLocal.ender);
            printf("Insira o número da sala\n>");
            scanf("%d", &novoLocal.sala);

            novoCandidato.loc = &novoLocal;

            vetorCandidatos[n_candidatos] = novoCandidato;
            n_candidatos++;
            break;
        case 1://b
            printf("------------------------------\n");
            printf("Candidatos disponiveis:\n");
            for(int i = 0; i < n_candidatos; i++){
                printf("%d: %s\n", i, vetorCandidatos[i].nome);
            }
            escolha = 0;
            printf("Insira o número do candidato desejado\n>");
            scanf("%d", &escolha);
            mostraCandidato(vetorCandidatos[escolha]);

            break;
        case 2:
            for(int i = 0; i < n_candidatos; i++){
                mostraCandidato(vetorCandidatos[i]);
            }
            break;
        case 3:
            printf("------------------------------\n");
            printf("Candidatos disponiveis:\n");
            for(int i = 0; i < n_candidatos; i++){
                printf("%d: %s\n", i, vetorCandidatos[i].nome);
            }
            escolha = 0;
            printf("Insira o número do candidato desejado\n>");
            scanf("%d", &escolha);

            printf("Insira o novo endereço\n>");
            scanf("%80s", vetorCandidatos[escolha].loc->ender);
            printf("Insira o novo número da sala\n>");
            scanf("%d", &vetorCandidatos[escolha].loc->sala);
            break;
        case 4:
            free(vetorCandidatos);
            exit(0);//fecha o programa
            break;
        default:
            printf("Opção inválida");
            break;
        }
    }
    free(vetorCandidatos);
    return 0;
}

void mostraCandidato(Candidato cand){
    printf("--------------------------\n");
    printf("Numero de inscrição: %d\n", cand.inscr);
    printf("Nome: %s\n", cand.nome);
    printf("Data de nascimento: %d/%d/%d\n", cand.nasc.dia, cand.nasc.mes, cand.nasc.ano);
    printf("Endereço do local da prova: %s\n", cand.loc->ender);
    printf("Número da sala: %d\n", cand.loc->sala);
    printf("Nota da prova geral: %g\n", cand.nt.geral);
    printf("Nota da prova especifica: %g\n", cand.nt.especifica);
}
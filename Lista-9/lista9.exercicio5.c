#include <stdlib.h>
#include <string.h>

typedef struct endereco {
    char rua[100]; /* Nome da rua */
    int numero; /* Numero do imovel */
} Endereco;

typedef struct notas {
    float p1, p2, p3; /* Notas nas provas */
} Notas;

typedef struct aluno {
    int mat; /* Matricula do aluno */
    char nome[81]; /* Nome do aluno */
    Notas nota; /* Notas nas provas */
    Endereco *end; /* Endereco do aluno */
} Aluno;

Aluno ** alocaAlunos(int n);
void atribui(Aluno ** a, int indice, int matricula, char *nome, float nota1, float nota2, float nota3, char *nomeRua, int numero);

int main(){
    Aluno**alunos; // Cria variavel
    alunos = alocaAlunos(3); //Aloca a memória do vetor
    
    atribui(alunos,0,10,"Um",1,1,1,"Getulio Vargas",100);//Atribui valores a um indice do vetor
    atribui(alunos,1,20,"Dois",8,8,8,"Amaral Peixoto",200);
    atribui(alunos,2,30,"Tres",9,9,9,"Ouro Verde",300);
    for(int i = 0; i < 3; i++){
        free(alunos[i]->end);
        free(alunos[i]);
    }
    free(alunos);
    return 0;
}

Aluno ** alocaAlunos(int n){
    Aluno** retorno = (Aluno**) malloc(sizeof(Aluno*)*n);
    if(retorno == NULL) exit(1);
    for(int i = 0; i < n; i++){
        retorno[i] = (Aluno*) malloc(sizeof(Aluno));
        if(retorno[i] == NULL) exit(3);
    }
    return retorno;
}

void atribui(Aluno ** a, int indice, int matricula, char *nome, float nota1, float nota2, float nota3, char *nomeRua, int numero){
    a[indice]->mat = matricula;
    strcpy(a[indice]->nome, nome);
    Notas novaNota;
    novaNota.p1 = nota1;
    novaNota.p2 = nota2;
    novaNota.p3 = nota3;
    a[indice]->nota = novaNota;
    Endereco* novoEndereco = (Endereco*) malloc(sizeof(Endereco));
    if(novoEndereco == NULL) exit(2);
    strcpy(novoEndereco->rua, nomeRua);
    novoEndereco->numero = numero;
    a[indice]->end = novoEndereco;
}
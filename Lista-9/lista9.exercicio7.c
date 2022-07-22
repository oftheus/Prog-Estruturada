struct aluno {
    int mat; /* Matricula do aluno */
    char nome[81]; /* Nome do aluno */
};
typedef struct aluno Aluno;

struct prova {
    Aluno a; /* Aluno que fez a prova */
    float q1, q2, q3, q4; /* Nota em cada questao */
};
typedef struct prova Prova;

void troca(Prova** a, Prova** b){
    Prova** temp = a;
    a = b;
    b =temp;
}

int compara(Prova* a, Prova* b){
    float somaA = a->q1 + a->q2 + a->q3 + a->q4;
    float somaB = b->q1 + b->q2 + b->q3 + b->q4;
    if(somaA == somaB) return a->a.nome > b->a.nome;
    return somaA > somaB;
}

void ordena(int n, Prova** v)
{
    int fim,i;
    for(fim=n-1; fim>0; fim--){
        for(i=0; i<fim; i++){
            if(compara(v[i],v[i+1])) troca(&v[i],&v[i+1]);
        }
    }
}
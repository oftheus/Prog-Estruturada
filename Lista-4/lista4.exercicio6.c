#include <stdio.h>
#include <locale.h>
int valida_mail(char *s);
int valorValido(char c);

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    char endLocal[65];
    printf("Insira o endereço local\n>");
    scanf("%s", endLocal);
    if(valida_mail(endLocal)){
        printf("O endereço é válido!");
    } else{
        printf("Endereço inválido");
    }
    
    return 0;
}

int valida_mail(char *s){
    if(s[0] < 'a' || s[0] > 'z'){
        printf("O primeiro caractere deve ser uma letra\n");
        return 0;
    }

    int cont = 0;
    int n_letra_ou_num = 0;
    char carac_anterior;

    while (s[cont] != '\0')
    {
        if(cont > 64){
            printf("Endereços devem conter, no máximo, 64 caracteres\n");
            return 0;
        }

        if(!valorValido(s[cont])){
            printf("O endereço contém caracteres inválidos.\n");
            return 0;
        } 
        if((s[cont] >= 'a' && s[cont] <= 'z') || (s[cont] >= '0' && s[cont] <= '9')){
            n_letra_ou_num++;
        }
        
        if(s[cont] == '.' && carac_anterior == '.'){
            printf("Pontos não podem estar em sequência\n");
            return 0;
        }

        carac_anterior = s[cont];
        cont++;
    }
    if(n_letra_ou_num < 2){
        printf("O endereço deve conter um mínimo de 2 letras ou números\n");
        return 0;
    }
    if(s[cont - 1] == '.'){
        printf("O último caractere não pode ser um ponto\n");
        return 0;
    }
    return 1;
}

int valorValido(char c){
    return (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') ||
    (c == '.' || c == '-' || c == '_');
}
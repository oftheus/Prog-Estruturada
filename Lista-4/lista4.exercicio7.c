#include <stdio.h>
#include <string.h>
#include <locale.h>

void CamelCase (char *s);

int main(){
    setlocale(LC_ALL, "Portuguese");
    char s[20];
    strcpy(s, "media da turma");
    CamelCase(s);
    printf("%s", s);
    return 0;
}

void CamelCase (char *s){
    char * string_cc[20] = {'\0'};//Cria string vazia
    char* string_dividida = NULL; 
    string_dividida = strtok(s, " ");//Essa função divide a string em parte menores a partir da string no segundo argumento
    while (string_dividida != NULL)
    {
        string_dividida[0] = string_dividida[0] - 'a' + 'A'; //torna o primeiro caractere maiúsculo
        strcat(string_cc, string_dividida);
        string_dividida = strtok(NULL, " ");
    }
    strcpy(s, string_cc);
}
    
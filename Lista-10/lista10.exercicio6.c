#include <stdio.h>

int main(){
    for(int i = 0; i < 10; i++){
        FILE* data;
        if(i+1 == 10){
            data = fopen("teste10.txt", "w");
        } else{
            char texto[] = "teste0X.txt"; 
            texto[6] = '1'+i;
            data = fopen(texto, "w");
        }

        fprintf(data, "Texto do arquivo %d\n", i+1);
        fclose(data);
    }
    return 0;
}
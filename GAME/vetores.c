#include <stdio.h> 

int main(){
    int numero[5] = {10, 20, 30, 40, 50};
    printf("o primeiro elemento é %d\n", numero[0]);
    printf("o terceiro elemento é %d\n", numero[2]);

    float notas[3] = {8.5, 8.1, 9.1};
    printf("a primeira nota  é %.1f\n", notas[0]);

    char letras[3] = {'a', 'b', 'c'};
    printf("a primeira é %c\n", letras[2]);

    char *nomes[3] = {"alice", "bob", "pedro"};
    printf("o nome é %s\n", nomes[2]);
    int i;
    for(i=0;i<3;i++){
        printf("%s\n", nomes[i]);
    }
    
    return 0;
}
    

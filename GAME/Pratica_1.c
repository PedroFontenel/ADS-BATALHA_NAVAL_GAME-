#include <stdio.h>
 
int main() {

    int index;

    char *nome_aluno [3][3]= {
        {"Aluno 0", "PT: 30", "MAT: 70"},
        {"Aluno 1", "PT: 70", "MAT: 70"},
        {"Aluno 2", "PT: 30", "MAT: 30"}

    };
    
    printf("Qual dos alunos voce que ver as notas ...\n");

    printf("Aluno 0, digite 0\n");
    printf("Aluno 1, digite 1\n");
    printf("Aluno 2, digite 2\n");

    printf("Digite: ");

    scanf("%d", &index);

    printf("As notas do %s sao: %s, %s ... \n", nome_aluno[index][0], nome_aluno[index][1], nome_aluno[index][2]);
 
 
    return 0;
}
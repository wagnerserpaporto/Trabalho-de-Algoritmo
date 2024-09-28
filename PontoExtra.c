#include <stdio.h>
#include <stdlib.h>

float obterNota(const char* mensagem) {
    float nota;
    printf("%s", mensagem);
    scanf("%f", &nota);
    return nota;
}

int main() {
    float n1, n2, ppd, Nota, n3, notaFinal;

    // Coletando as notas do aluno
    n1 = obterNota("Digite a nota da N1: ");
    if (n1 < 0 || n1 > 4.5) return printf("Nota N1 invalida.\n"), 3;

    n2 = obterNota("Digite a nota da N2: ");
    if (n2 < 0 || n2 > 4.5) return printf("Nota N2 invalida.\n"), 3;

    ppd = obterNota("Digite a nota da PPD: ");
    if (ppd < 0 || ppd > 4.5) return printf("Nota PPD invalida.\n"), 3;

    // Verificação do exame unificado
    Nota = obterNota("Realizou o Exame Unificado? [0=nao] [1=sim]: ");
    if (Nota != 0 && Nota != 1) return printf("Flag do Exame Unificado inválida.\n"), 3;

    // Nota do exame unificado
    Nota = obterNota("Digite a nota da Exame Unificado (caso nao tenha feito, use 0): ");
    if (Nota < 0 || Nota > 1) return printf("Nota do Exame Unificado invalida.\n"), 3;

    // Cálculo da nota final do aluno
    notaFinal = n1 + n2 + ppd + Nota;
    printf("Nota final: %f\n", notaFinal);

    // Verificação se passou ou não na disciplina
    if (notaFinal > 7) {
        printf("Aprovado com nota: %2.f\n", notaFinal);
    } else {
        n3 = obterNota("Foi necessário realizar a N3, realizou? [1=sim] [2=nao]: ");
        if (n3 == 2) {
            printf("Reprovado\n");
        } else {
            float notaN3 = obterNota("Qual a sua nota da N3?: ");
            notaFinal = n1 + notaN3 + ppd + Nota; // Nota final
            if (notaFinal >= 7) {
                printf("Aprovado com nota: %f\n", notaFinal);
            } else {
                printf("Reprovado\n");
            }
        }
    }

    return 0;
}

    
        

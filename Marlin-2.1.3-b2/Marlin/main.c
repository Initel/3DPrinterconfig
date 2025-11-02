#include <stdio.h>
#include <string.h>

typedef struct {
    char arma[20];
    char colete[20];
    int a_queima_roupa;
} Tiro;

void calcular_dano(Tiro t) {
    float dano = 0;
    float deterioracao = 0;

    // Dano e deterioração base
    if (strcmp(t.colete, "nenhum") == 0) {
        if (strcmp(t.arma, "38") == 0) dano = 20;
        else if (strcmp(t.arma, "762") == 0) dano = 35;
        else if (strcmp(t.arma, "12") == 0) dano = 40;
    } else if (strcmp(t.colete, "aco") == 0) {
        if (strcmp(t.arma, "38") == 0) { dano = 5; deterioracao = 20; }
        else if (strcmp(t.arma, "762") == 0) { dano = 20; deterioracao = 30; }
        else if (strcmp(t.arma, "12") == 0) { dano = 30; deterioracao = 50; }
    } else if (strcmp(t.colete, "titânio") == 0 || strcmp(t.colete, "titanio") == 0) {
        if (strcmp(t.arma, "38") == 0) { dano = 0; deterioracao = 10; }
        else if (strcmp(t.arma, "762") == 0) { dano = 10; deterioracao = 22; }
        else if (strcmp(t.arma, "12") == 0) { dano = 20; deterioracao = 35; }
    }

    // Se for à queima-roupa, aumenta 10% em tudo
    if (t.a_queima_roupa) {
        dano *= 1.1;
        deterioracao *= 1.1;
    }

    printf("Arma: %s, Colete: %s, Queima-roupa: %s\n", t.arma, t.colete, t.a_queima_roupa ? "Sim" : "Não");
    printf("Dano: %.1f%%, Deterioração do Colete: %.1f%%\n\n", dano, deterioracao);
}

int main() {
    // Exemplos de teste
    Tiro testes[] = {
        {"38", "nenhum", 0},
        {"762", "aco", 1},
        {"12", "titânio", 0},
        {"12", "nenhum", 1},
        {"38", "aco", 1}
    };

    int n = sizeof(testes) / sizeof(testes[0]);
    for (int i = 0; i < n; i++) {
        calcular_dano(testes[i]);
    }

    return 0;
}

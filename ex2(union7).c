#include<stdio.h>

struct carro {
    char marca[20];
    char modelo[20];
    int ano;
};

struct venda {
    enum { C, R } tipo;
    struct carro c;
    union {
        long long int cpf;
        long long int rg;
    } comprador;
};

void preenche(struct venda *v) {
    char opcao;

    printf("Digite a marca do carro: ");
    scanf("%s", v->c.marca);

    printf("Digite o modelo do carro: ");
    scanf("%s", v->c.modelo);

    printf("Digite o ano do carro: ");
    scanf("%d", &v->c.ano);

    printf("C para CPF e R para RG: ");
    scanf(" %c", &opcao);

    if(opcao == 'C' || opcao == 'c') {
        v->tipo = C;
        printf("Digite o CPF: ");
        scanf("%lld", &v->comprador.cpf);
    } else {
        v->tipo = R;
        printf("Digite o RG: ");
        scanf("%lld", &v->comprador.rg);
    }
}

void exibe(struct venda v) {
    printf("\n======================\n");
    printf("Marca: %s\n", v.c.marca);
    printf("Modelo: %s\n", v.c.modelo);
    printf("Ano: %d\n", v.c.ano);

    if (v.tipo == C) {
        printf("CPF: %lld\n", v.comprador.cpf);
    } else {
        printf("RG: %lld\n", v.comprador.rg);
    }
    printf("======================\n");
}

int main() {
    struct venda v;
    preenche(&v);
    exibe(v);

    return 0;
}


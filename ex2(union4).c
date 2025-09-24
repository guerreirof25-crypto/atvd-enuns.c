#include<stdio.h>

struct preco{
    enum{
        R,
        D,
        E
    }tipo;
    union{
     float real;
     float dolar;
     float euro;
    }valor;
};

void exibe(struct preco p){
    if(p.tipo==R){
        printf("o preço é R$ %.2f\n",p.valor.real);
    }if(p.tipo==D){
        printf("o preço é $ %.2f\n",p.valor.dolar);
    }if(p.tipo==E){
        printf("o preço é € %.2f\n",p.valor.euro);
    }
}

struct preco altera(struct preco p,int t){
    float novovalor;
    if(p.tipo==R){
        novovalor=p.valor.real;
    }if(p.tipo==D){
        novovalor=(p.valor.dolar)*5.28;
    }if(p.tipo==E){
        novovalor=(p.valor.euro)*6.24;
    }
    p.tipo=t;
    if(p.tipo==R){
        p.valor.real=novovalor;
    }if(p.tipo==D){
        p.valor.dolar=novovalor/5.28;
    }if(p.tipo==E){
        p.valor.euro=novovalor/6.24;
    }
 return p;   
}

int main(){
    struct preco p1={1,54.00};
    exibe(p1);
    p1 = altera(p1,0);
    exibe(p1);
    return 0;
}

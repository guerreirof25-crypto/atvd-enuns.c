#include <stdio.h>

enum dia{
    dom,
    seg,
    ter,
    qua,
    qui,
    sex,
    sab
};

char* nome (enum dia d){
    if(d==dom){
        return "domingo";
    }
    if(d==seg){
        return "segunda";
    }
    if(d==ter){
        return "terça";
    }
    if(d==qua){
        return "quarta";
    }
    if(d==qui){
        return "quinta";
    }
    if(d==sex){
        return "sexta";
    }
    if(d==sab){
        return "sabado";
    }
}

int main() {
    printf("%s\n", nome(ter));

    return 0;
}

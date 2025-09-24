#include <stdio.h>
#include <string.h>

struct animal{
    enum{
        anf,
        av,
        mam,
        rep
    }tipo;
    union{
        struct{
            int patas;
            float espessura;
            char cauda[5];
        }anfibio;
        struct{
            float bico;
            char autonomia[5];
            float canto;
        }ave;
        struct{
            int dentes;
            float volume;
            int velocidade;
        }mamifero;
        struct{
            char venenoso[5];
            char autonomiah2o[5];
            float ovos;
        }repteis;
    }zoo;
};

int main(){
    struct animal a1 = {anf,.zoo.anfibio = {4,1.34,"não"}};
    struct animal a2 = {av,.zoo.ave = {2.5,"não",5.7}};
    struct animal a3 = {mam,.zoo.mamifero = {32,70.2,60}};
    struct animal a4 = {rep,.zoo.repteis = {"sim","não",12.0}};
    struct animal a5 = {anf,.zoo.anfibio = {0,0.1,"não"}};
    struct animal a6 = {av,.zoo.ave = {1.2,"sim",3.4}};
    
    printf("Anfibio: número de patas = %d, espessura da pele = %.2f, possui cauda = %s\n.",
          a1.zoo.anfibio.patas, a1.zoo.anfibio.espessura, a1.zoo.anfibio.cauda);

    printf("Ave: comprimento do bico = %.1f, autonomia de vôo = %s, frequência do canto = %.1f\n.",
           a2.zoo.ave.bico, a2.zoo.ave.autonomia, a2.zoo.ave.canto);

    printf("Mamifero: quantidade de dentes = %d, volume do cérebro = %.1f, velocidade terrestre = %d\n.",
           a3.zoo.mamifero.dentes, a3.zoo.mamifero.volume, a3.zoo.mamifero.velocidade);

    printf("Réptil: venenoso = %s, autonomia debaixo d'água = %s, espessura dos ovos = %.1f\n.",
           a4.zoo.repteis.venenoso, a4.zoo.repteis.autonomiah2o, a4.zoo.repteis.ovos);

    printf("Anfibio: número de patas = %d, espessura da pele = %.2f, possui cauda = %s\n.",
           a5.zoo.anfibio.patas, a5.zoo.anfibio.espessura, a5.zoo.anfibio.cauda);

    printf("Ave: comprimento do bico = %.1f, autonomia de vôo = %s, frequência do canto = %.1f\n.",
           a6.zoo.ave.bico, a6.zoo.ave.autonomia, a6.zoo.ave.canto);
    
    return 0;
}

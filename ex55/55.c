#include <stdio.h>
const float dias = 180;
void main(){
    float pedreiro, ajudante, diaria;
    printf("Informe a qntd de pedreiro ajudante e o valor da diaria:\n");
    scanf("%f%f%f", &pedreiro, &ajudante, &diaria);
    float gasto_pedreiro = (pedreiro * diaria) * dias;
    float gasto_ajudante = ((diaria / 2) * ajudante) * dias;
    float total = gasto_pedreiro + gasto_ajudante;
    printf("Custo de mao de obra: %.2f", total);
    

}

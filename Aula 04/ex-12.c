/*Para calcular o consumo de um equipamento elétrico, verifique a potência W (Watts) do
equipamento, multiplique essa potência pelo tempo estimado de funcionamento (Horas Por
Dia) e divida por 1000. Desta forma teremos o consumo em kWh do equipamento por dia. Faça
um programa que leia a potência de um aparelho e o tempo de utilização diária em horas.
Apresente o consumo estimado de Watts e kWh por dia, mês e ano. Faça também a leitura do
custo do kWh e indique o gasto mensal estimado do aparelho.

Exemplo:

Potência do aparelho: P=3.0 watts;
Tempo de utilização do aparelho: 24.0 horas/dia
Watts/Dia = 72.0
Watts/Mes = 2160.0
Watts/Ano = 25920.0
kWh/Dia = 0.072
kWh/Mes = 2.16
kWh/Ano = 25.92
Preço do kWh: R$ 0.27
Gasto mensal é: R$ 0.5832*/

#include <stdio.h>

int main(){
    float W, H, P, kWh;
    printf("Potencia (em watts): ");
    scanf("%f",&W);
    printf("Horas de uso por dia: ");
    scanf("%f",&H);
    printf("Preco do kWh: R$");
    scanf("%f",&P);

    kWh = (W * H) / 1000;

    printf("Watts/Dia: %f\n", W * H);
    printf("Watts/Mes: %f\n", (W * H) * 30);
    printf("Watts/ano: %f\n", (W * H) * 365);
    printf("kWh/Dia: %f\n", kWh);
    printf("kWh/Mes: %f\n", kWh * 30);
    printf("kWh/Ano: %f\n", kWh * 365);
    printf("Preco do kWh: R$%.2f\n", P);
    printf("Gasto mensal: R$%.2f\n", P * (kWh * 30));

    return 0;
}

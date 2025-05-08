#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis da primeira carta
    char nomePais1[50];
    int populacao1, area1, pontosTuristicos1;
    float pib1, densidadePopulacional1, pibPerCapita1;

    // Variáveis da segunda carta
    char nomePais2[50];
    int populacao2, area2, pontosTuristicos2;
    float pib2, densidadePopulacional2, pibPerCapita2;

    int atributoEscolhido;

    // --- Cadastro da primeira carta ---
    printf("\nCadastro da Carta 1\n");

    printf("Nome do país: ");
    scanf(" %49[^\n]", nomePais1);  // Lê o nome com espaços

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%d", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo de indicadores derivados
    densidadePopulacional1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    pibPerCapita1 = (populacao1 > 0) ? pib1 / populacao1 : 0;

    // --- Cadastro da segunda carta ---
    printf("\nCadastro da Carta 2\n");

    printf("Nome do país: ");
    scanf(" %49[^\n]", nomePais2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%d", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo de indicadores derivados
    densidadePopulacional2 = (area2 > 0) ? (float)populacao2 / area2 : 0;
    pibPerCapita2 = (populacao2 > 0) ? pib2 / populacao2 : 0;

    // --- Menu para escolha do atributo de comparação ---
    printf("\nEscolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &atributoEscolhido);

    // --- Comparação baseada no atributo escolhido ---
    printf("\nResultado da comparação:\n");

    if (atributoEscolhido == 1) {
        // Comparação por População
        if (populacao1 > populacao2)
            printf("%s vence com maior população.\n", nomePais1);
        else if (populacao2 > populacao1)
            printf("%s vence com maior população.\n", nomePais2);
        else
            printf("Empate em população.\n");
    } else if (atributoEscolhido == 2) {
        // Comparação por Área
        if (area1 > area2)
            printf("%s vence com maior área.\n", nomePais1);
        else if (area2 > area1)
            printf("%s vence com maior área.\n", nomePais2);
        else
            printf("Empate em área.\n");
    } else if (atributoEscolhido == 3) {
        // Comparação por PIB
        if (pib1 > pib2)
            printf("%s vence com maior PIB.\n", nomePais1);
        else if (pib2 > pib1)
            printf("%s vence com maior PIB.\n", nomePais2);
        else
            printf("Empate em PIB.\n");
    } else if (atributoEscolhido == 4) {
        // Comparação por Pontos Turísticos
        if (pontosTuristicos1 > pontosTuristicos2)
            printf("%s vence com mais pontos turísticos.\n", nomePais1);
        else if (pontosTuristicos2 > pontosTuristicos1)
            printf("%s vence com mais pontos turísticos.\n", nomePais2);
        else
            printf("Empate em pontos turísticos.\n");
    } else if (atributoEscolhido == 5) {
        // Comparação por Densidade Populacional
        if (densidadePopulacional1 > densidadePopulacional2)
            printf("%s vence com maior densidade populacional.\n", nomePais1);
        else if (densidadePopulacional2 > densidadePopulacional1)
            printf("%s vence com maior densidade populacional.\n", nomePais2);
        else
            printf("Empate em densidade populacional.\n");
    } else if (atributoEscolhido == 6) {
        // Comparação por PIB per capita
        if (pibPerCapita1 > pibPerCapita2)
            printf("%s vence com maior PIB per capita.\n", nomePais1);
        else if (pibPerCapita2 > pibPerCapita1)
            printf("%s vence com maior PIB per capita.\n", nomePais2);
        else
            printf("Empate em PIB per capita.\n");
    } else {
        // Entrada inválida
        printf("Opção inválida. Nenhum atributo foi comparado.\n");
    }

    return 0;
}

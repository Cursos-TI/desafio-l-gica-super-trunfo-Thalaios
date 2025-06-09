#include <stdio.h>

int main() {
    int primeiroAtributo, segundoAtributo;

    // Variáveis para a Carta 1
    int pontosTuristicos1;
    char estado1, codigo1[4], nomeCidade1[100];
    unsigned long int populacao1;
    float area1, pib1, densidade_populacional1, pib_percapita1, superpoder1;

    // Variáveis para a Carta 2
    int pontosTuristicos2;
    char estado2, codigo2[4], nomeCidade2[100];
    unsigned long int populacao2;
    float area2, pib2, densidade_populacional2, pib_percapita2, superpoder2;

    // Leitura dos dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Digite o nome da cidade (use _ para espaços): ");
    scanf("%s", nomeCidade1);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o número da População: ");
    scanf("%lu", &populacao1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calculo da densidade populacional e pib per capita
    densidade_populacional1 = ((float)populacao1 / area1);
    pib_percapita1 = (pib1 / populacao1);

    // Calculo do super poder
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pib_percapita1 + (1.0 / densidade_populacional1);

    // Leitura dos dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01): ");
    scanf(" %3s", codigo2);

    printf("Digite o nome da cidade (use _ para espaços): ");
    scanf("%s", nomeCidade2);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o número da População: ");
    scanf("%lu", &populacao2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculo da densidade populacional e pib per capita
    densidade_populacional2 = ((float)populacao2 / area2);
    pib_percapita2 = (pib2 / populacao2);

    // Calculo do super poder
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pib_percapita2 + (1.0 / densidade_populacional2);

    // Variáveis para armazenar o resultado das comparações
    int resultado1 = 0, resultado2 = 0;

    // Escolha do primeiro atributo
    printf("\n== Comparação de Atributos ===\n");
    printf("Escolha o primeiro atributo que você quer comparar:\n");
    printf("1. Nome da cidade\n2. População\n3. Área\n4. PIB\n5. Pontos turísticos\n6. PIB Per Capita\n7. Densidade Populacional\n8. Super Poder\nEscolha: ");
    scanf("%d", &primeiroAtributo);

    printf("\n=== Comparação ===\n");
    switch (primeiroAtributo) {
        case 1:
            printf("Cidade 1: %s | Cidade 2: %s\n", nomeCidade1, nomeCidade2);
            resultado1 = 0;
            break;
        case 2:
            printf("População 1: %lu | População 2: %lu\n", populacao1, populacao2);
            resultado1 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? 2 : 0;
            break;
        case 3:
            printf("Área 1: %.2f | Área 2: %.2f\n", area1, area2);
            resultado1 = (area1 > area2) ? 1 : (area1 < area2) ? 2 : 0;
            break;
        case 4:
            printf("PIB 1: %.2f | PIB 2: %.2f\n", pib1, pib2);
            resultado1 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? 2 : 0;
            break;
        case 5:
            printf("Pontos turísticos 1: %d | Pontos turísticos 2: %d\n", pontosTuristicos1, pontosTuristicos2);
            resultado1 = (pontosTuristicos1 > pontosTuristicos2) ? 1 : (pontosTuristicos1 < pontosTuristicos2) ? 2 : 0;
            break;
        case 6:
            printf("PIB per capita 1: %.8f | PIB per capita 2: %.8f\n", pib_percapita1, pib_percapita2);
            resultado1 = (pib_percapita1 > pib_percapita2) ? 1 : (pib_percapita1 < pib_percapita2) ? 2 : 0;
            break;
        case 7:
            printf("Densidade 1: %.2f | Densidade 2: %.2f\n", densidade_populacional1, densidade_populacional2);
            resultado1 = (densidade_populacional1 < densidade_populacional2) ? 1 : (densidade_populacional1 > densidade_populacional2) ? 2 : 0;
            break;
        case 8:
            printf("Super Poder 1: %.2f | Super Poder 2: %.2f\n", superpoder1, superpoder2);
            resultado1 = (superpoder1 > superpoder2) ? 1 : (superpoder1 < superpoder2) ? 2 : 0;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    if (resultado1 == 1) printf("=== Carta 1 venceu a primeira rodada! ===\n");
    else if (resultado1 == 2) printf("=== Carta 2 venceu a primeira rodada! ===\n");
    else printf("=== Empate na primeira rodada! ===\n");

    // Escolha do segundo atributo
    printf("\nEscolha o segundo atributo que você quer comparar: ");
    scanf("%d", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo) {
        printf("Você escolheu dois atributos iguais! Encerrando...\n");
        return 1;
    }

    printf("\n=== Comparação ===\n");
    switch (segundoAtributo) {
        case 1:
            printf("Cidade 1: %s | Cidade 2: %s\n", nomeCidade1, nomeCidade2);
            resultado2 = 0;
            break;
        case 2:
            printf("População 1: %lu | População 2: %lu\n", populacao1, populacao2);
            resultado2 = (populacao1 > populacao2) ? 1 : (populacao1 < populacao2) ? 2 : 0;
            break;
        case 3:
            printf("Área 1: %.2f | Área 2: %.2f\n", area1, area2);
            resultado2 = (area1 > area2) ? 1 : (area1 < area2) ? 2 : 0;
            break;
        case 4:
            printf("PIB 1: %.2f | PIB 2: %.2f\n", pib1, pib2);
            resultado2 = (pib1 > pib2) ? 1 : (pib1 < pib2) ? 2 : 0;
            break;
        case 5:
            printf("Pontos turísticos 1: %d | Pontos turísticos 2: %d\n", pontosTuristicos1, pontosTuristicos2);
            resultado2 = (pontosTuristicos1 > pontosTuristicos2) ? 1 : (pontosTuristicos1 < pontosTuristicos2) ? 2 : 0;
            break;
        case 6:
            printf("PIB per capita 1: %.8f | PIB per capita 2: %.8f\n", pib_percapita1, pib_percapita2);
            resultado2 = (pib_percapita1 > pib_percapita2) ? 1 : (pib_percapita1 < pib_percapita2) ? 2 : 0;
            break;
        case 7:
            printf("Densidade 1: %.2f | Densidade 2: %.2f\n", densidade_populacional1, densidade_populacional2);
            resultado2 = (densidade_populacional1 < densidade_populacional2) ? 1 : (densidade_populacional1 > densidade_populacional2) ? 2 : 0;
            break;
        case 8:
            printf("Super Poder 1: %.2f | Super Poder 2: %.2f\n", superpoder1, superpoder2);
            resultado2 = (superpoder1 > superpoder2) ? 1 : (superpoder1 < superpoder2) ? 2 : 0;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    if (resultado2 == 1) printf("\n=== Carta 1 venceu a segunda rodada! ===\n");
    else if (resultado2 == 2) printf("\n=== Carta 2 venceu a segunda rodada! ===\n");
    else printf("\n=== Empate na segunda rodada! ===\n");

    // Resultado final
    if (resultado1 == 1 && resultado2 == 1) {
        printf("\n Carta 1 ganhou a partida!\n");
    } else if (resultado1 == 2 && resultado2 == 2) {
        printf("\n Carta 2 ganhou a partida!\n");
    } else {
        printf("\n A partida terminou empatada!\n");
    }


    return 0;
}

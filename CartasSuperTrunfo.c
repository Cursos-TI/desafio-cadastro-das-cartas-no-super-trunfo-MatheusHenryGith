#include <stdio.h>

    int main (){ //Variaveis e seus respectivos nomes para facil identificação

        char estado = 'A';
        int codigo;
        char cidade[50];
        char nomeestado[50];
        int populacao;
        float area;
        float pib;
        int pontoturistico;

    
    printf("Digite o código do seu estado: \n"); //Codigo do estado por LETRA
    scanf("%c", &estado);
 
    printf("Digite o código da sua cidade:\n"); //Codigo da cidade por NÚMERO
    scanf("%d", &codigo);

    printf("Digite o nome da cidade:\n"); //Digitar o nome da cidade
    scanf(" %s", &cidade);

    printf("Digite o nome do seu Estado (Sem utilizar espaço):\n"); // Digitar o nome do estado
    scanf(" %s", &nomeestado);

    printf("Qual é a população desta cidade ?\n"); //Definir a população por numero inteiro
    scanf("%d", &populacao);

    printf("Qual a área em km² desta cidade ?\n"); //Area da cidade por casas decimais
    scanf(" %f", &area);

    printf("Qual é o PIB da cidade ?\n"); //Inserir o PIB da cidade em casas decimais
    scanf(" %f", &pib);

    printf("Quantos pontos turísticos possui na cidade ?\n"); //Inserir ponto turistico em numero inteiro
    scanf("%d", &pontoturistico);

//Exibição do cadastro das cartas abaixo.
        printf("Código da Carta: %c", estado);
        printf("%d\n", codigo);
        printf("Nome da cidade: %s\n", cidade);
        printf("Nome do estado: %s\n", nomeestado);
        printf("Área por km² é: %.3f\n", area);
        printf("O PIB da cidade: %.2f\n", pib);
        printf("Quantidade de pontos turísticos é: %d\n", pontoturistico);
        printf("Você cadastrou as cartas! Parabéns.");
        //Resultado do Cadastro das cartas será exibido por linhas as informações

    return 0; //Finalização do codigo fonte.

}
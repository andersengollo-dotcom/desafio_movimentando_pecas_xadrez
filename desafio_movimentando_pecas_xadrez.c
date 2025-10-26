#include <stdio.h>

/*
MOVIMENTO DAS PEÇAS DE XADREZ
- O código está estruturado para:
    1. Selecionar a PEÇA que deseja realizar o movimento
        [TORRE, BISPO, RAINHA ou CAVALO]; 
                (utilizando função SWITCH e IF/ELSE)

    2. Selecionar a DIREÇÃO que essa peça vai realizar o movimento
        [TORRE e BISPO - 4 possibilidades]
        [RAINHA E CAVALO - 8 possibilidades];
                (utilizando função SWITCH e IF/ELSE)

    3. Selecionar o Nº DE CASAS que a peça vai se mover (sem limitador);
        [EXCETO PARA O CAVALO]
                (utilizando REPERCUSSIVIDADE, invertendo o printf para deixar crescente)

    4. Printar o resumo do movimento da peça;
        [Exemplo: "---> Movimento do XXX = Direita/Baixo >> 1 - 2 - X - casas <<"]
    
    5. Printar mensagem de ERRO em caso de opção inválida.
        [Exemplo: "Selecione uma direção válida (de 1 a 4)"]
        [Exemplo: "TORRE = ERRO"]
                (utilizando o ELSE ou DEFAULT)
*/

void recursividade_torre(int mov_torre)
{
    if (mov_torre > 0)
    {
        recursividade_torre(mov_torre - 1); //repercussividade para contagem de casas da TORRE (invertida)
        printf("%d - ", mov_torre);
    }
}

void recursividade_bispo(int mov_bispo)
{
    if (mov_bispo > 0)
    {
        recursividade_bispo(mov_bispo - 1); //repercussividade para contagem de casas da BISPO (invertida)
        printf("%d - ", mov_bispo);
    }
}

void recursividade_rainha(int mov_rainha)
{
    if (mov_rainha > 0)
    {
        recursividade_rainha(mov_rainha - 1); //repercussividade para contagem de casas da RAINHA (invertida)
        printf("%d - ", mov_rainha);
    }
}

int main (){

    int peca; //4 possibilidades
    int dire_torre, dire_bispo; //4 possibilidades cada
    int dire_rainha, dire_cavalo; //8 possibilidades cada
    int casas_torre, casas_bispo, casas_rainha; //variáveis INT que chamam a repercussividade

    printf("### Selecione a sua peça:\n");
    printf("1-TORRE (Movimento vertical ou horizontal)\n");
    printf("2-BISPO (Movimento na diagonal)\n");
    printf("3-RAINHA (Movimento em qualquer direção)\n");
    printf("4-CAVALO (Movimento em 'L')\n");
    printf(">> Digite uma opção de 1 a 4 <<\n");
    scanf("%d", &peca);

    switch (peca)
    {
    case 1: //TORRE

    //menu para switch - selecionando as opções de direção da TORRE - 4 Possibilidades
    printf("### DIGITE A DIREÇÃO DO MOVIMENTO DA TORRE:\n");
    printf("1-DIREITA\n");
    printf("2-ESQUERDA\n");
    printf("3-BAIXO\n");
    printf("4-CIMA\n");
    printf(">> Digite uma opção de 1 a 4 <<\n");
    scanf("%d", &dire_torre);

    //função if e else para validar a opção com operadores lógicos. IF segue para selecionar Nr de casas, ELSE acusa o erro
    if (dire_torre < 5 && dire_torre > 0)
    {
    printf("### QUANTAS CASAS NESSA DIREÇÃO?\n");
    scanf("%d", &casas_torre);

        switch (dire_torre)
        {
            case 1:
                printf("---> Movimento da TORRE = Direita >> ");
                break;
            case 2:
                printf("---> Movimento da TORRE = Esquerda >> ");
                break;
            case 3:
                printf("---> Movimento da TORRE = Baixo >> ");
                break;
            case 4:
                printf("---> Movimento da TORRE = Cima >> ");
                break;
            default:
                printf("TORRE = ERRO\n");
                break;
        }
    
    //chamando a repercussividade para repetição do Nr de casas
    recursividade_torre(casas_torre);

    //imprimindo para melhor visualização
    printf("casas <<\n");

    } 
    else
    {
        printf("Selecione uma direção válida (de 1 a 4)\n");
    }
        break;
    
    case 2: //BISPO

    //menu para switch - selecionando as opções de direção da BISPO - 4 Possibilidades
    printf("### DIGITE A DIREÇÃO DO MOVIMENTO DO BISPO:\n");
    printf("1-DIREITA/CIMA\n");
    printf("2-ESQUERDA/CIMA\n");
    printf("3-DIREITA/BAIXO\n");
    printf("4-ESQUERDA/BAIXO\n");
    printf(">> Digite uma opção de 1 a 4 <<\n");
    scanf("%d", &dire_bispo);

    //função if e else para validar a opção com operadores lógicos. IF segue para selecionar Nr de casas, ELSE acusa o erro
    if (dire_bispo < 5 && dire_bispo > 0)
    {
    printf("### QUANTAS CASAS NESSA DIREÇÃO?\n");
    scanf("%d", &casas_bispo);

        switch (dire_bispo)
        {
            case 1:
                printf("---> Movimento do BISPO = Direita/Cima >> ");
                break;
            case 2:
                printf("---> Movimento do BISPO = Esquerda/Cima >> ");
                break;
            case 3:
                printf("---> Movimento do BISPO = Direita/Baixo >> ");
                break;
            case 4:
                printf("---> Movimento do BISPO = Esquerda/Baixo >> ");
                break;
            default:
                printf("BISPO = ERRO\n");
                break;
        }
    
    //chamando a repercussividade para repetição do Nr de casas
    recursividade_bispo(casas_bispo);

    //imprimindo para melhor visualização
    printf("casas <<\n");

    } 
    else
    {
        printf("Selecione uma direção válida (de 1 a 4)\n");
    }
        break;

    case 3: //RAINHA
    
    //menu para switch - selecionando as opções de direção da RAINHA - 8 Possibilidades
    printf("### DIGITE A DIREÇÃO DO MOVIMENTO DA RAINHA:\n");
    printf("1-DIREITA\n");
    printf("2-ESQUERDA\n");
    printf("3-BAIXO\n");
    printf("4-CIMA\n");
    printf("5-DIREITA/CIMA\n");
    printf("6-ESQUERDA/CIMA\n");
    printf("7-DIREITA/BAIXO\n");
    printf("8-ESQUERDA/BAIXO\n");
    printf(">> Digite uma opção de 1 a 8 <<\n");
    scanf("%d", &dire_rainha);

    //função if e else para validar a opção com operadores lógicos. IF segue para selecionar Nr de casas, ELSE acusa o erro
    if (dire_rainha < 9 && dire_rainha > 0)
    {
    printf("### QUANTAS CASAS NESSA DIREÇÃO?\n");
    scanf("%d", &casas_rainha);

        switch (dire_rainha)
        {
            case 1:
                printf("---> Movimento da RAINHA = Direita >> ");
                break;
            case 2:
                printf("---> Movimento da RAINHA = Esquerda >> ");
                break;
            case 3:
                printf("---> Movimento da RAINHA = Baixo >> ");
                break;
            case 4:
                printf("---> Movimento da RAINHA = Cima >> ");
                break;
            case 5:
                printf("---> Movimento da RAINHA = Direita/Cima >> ");
                break;
            case 6:
                printf("---> Movimento da RAINHA = Esquerda/Cima >> ");
                break;
            case 7:
                printf("---> Movimento da RAINHA = Direita/Baixo >> ");
                break;
            case 8:
                printf("---> Movimento da RAINHA = Esquerda/Baixo >> ");
                break;
            default:
                printf("RAINHA = ERRO\n");
                break;
        }
    
    //chamando a repercussividade para repetição do Nr de casas
    recursividade_rainha(casas_rainha);

    //imprimindo para melhor visualização
    printf("casas <<\n");

    } 
    else
    {
        printf("Selecione uma direção válida (de 1 a 8)\n");
    }
        break;

    case 4: //CAVALO
        
    //menu para switch - selecionando as opções de direção do CAVALO - 8 Possibilidades (sem precisar contar casas)
    printf("### DIGITE A DIREÇÃO DO MOVIMENTO DA CAVALO:\n");
    printf("1-DIREITA/DIREITA/CIMA\n");
    printf("2-DIREITA/DIREITA/BAIXO\n");
    printf("3-ESQUERDA/ESQUERDA/CIMA\n");
    printf("4-ESQUERDA/ESQUERDA/BAIXO\n");
    printf("5-CIMA/CIMA/DIREITA\n");
    printf("6-CIMA/CIMA/ESQUERDA\n");
    printf("7-BAIXO/BAIXO/DIREITA\n");
    printf("8-BAIXO/BAIXO/ESQUERDA\n");
    printf(">> Digite uma opção de 1 a 8 <<\n");
    scanf("%d", &dire_cavalo);

    //função if e else para validar a opção com operadores lógicos. IF imprime movimento, ELSE acusa o erro
    if (dire_cavalo < 9 && dire_cavalo > 0)
    {
        switch (dire_cavalo)
        {
            case 1:
                printf("---> Movimento do CAVALO = Direita / Direita / Cima\n");
                break;
            case 2:
                printf("---> Movimento da CAVALO = Direita / Direita / Baixo\n");
                break;
            case 3:
                printf("---> Movimento da CAVALO = Esquerda / Esquerda / Cima\n");
                break;
            case 4:
                printf("---> Movimento da CAVALO = Esquerda / Esquerda / Baixo\n");
                break;
            case 5:
                printf("---> Movimento da CAVALO = Cima / Cima / Direita\n");
                break;
            case 6:
                printf("---> Movimento da CAVALO = Cima / Cima / Esquerda\n");
                break;
            case 7:
                printf("---> Movimento da CAVALO = Baixo / Baixo / Direita\n");
                break;
            case 8:
                printf("---> Movimento da CAVALO = Baixo / Baixo / Esquerda\n");
                break;
            default:
                printf("---> CAVALO = ERRO\n");
                break;
        }
    } 
    else
    {
        printf("Selecione uma direção válida (de 1 a 8)\n");
    }
        break;
    
    default:
        printf("Selecione uma opção válida!\n"); //caso selecione opção inválida para PEÇA (1 a 4)
        break;
    }

    return 0;
}
/*194. Escreva um programa que implemente um jogo de batalha naval. O programa usa um  tabuleiro com cem células, composto por dez linhas e dez colunas. O programa deve  “esconder” vinte alvos em posições aleatórias, que devem ser omitidas do usuário.  Quando o usuário joga uma partida, ele tem direito a dar vinte tiros em posições  aleatórias (e não repetidas) do tabuleiro. Sempre que acertar um alvo, o usuário  ganha um ponto. Sempre que uma partida é encerrada, o programa deve informar a  pontuação do usuário e perguntar se ele deseja ou não iniciar uma nova partida.
*/

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#define tam 10
void main(){
    
    char tabuleiro[tam][tam];
    char alvos[tam][tam];
    char pergunta = 'o';
    while(pergunta != 'n'){
    int pontos = 0;
    for(int k = 0; k < tam; k++){
        for(int y = 0; y < tam; y++){
            tabuleiro[k][y] = '~';
            alvos[k][y] = '~';
        }
    }
    int alvos_colocados = 0;
    srand(time(NULL));
    while(alvos_colocados < 20){
        int linha = rand() % 10;
        int coluna = rand() % 10;

        if(alvos[linha][coluna] != 'A'){
            alvos[linha][coluna] = 'A';
            alvos_colocados++;
        }
    }
    
    
        for(int i = 0; i < 20; i++){
            int lin, col;
            printf("Informe a linha e a coluna:\n");
            scanf("%d%d", &lin, &col);
            if(lin < 0 || lin >= 10 || col < 0 || col >= 10){
                printf("Coordenadas invalidas! Digite valores entre 0 e 9.\n");
                i--;
                continue;
            }
            if(tabuleiro[lin][col] != '~'){
                printf("Voce ja atirou aqui! Escolha outra posição.\n");
                i--;
                continue;
            }



            if(alvos[lin][col] == 'A'){
                tabuleiro[lin][col] = 'X';
                pontos++;
            } else {
                tabuleiro[lin][col] = 'O';
            }
            for(int k = 0; k < tam; k++){
                for(int y = 0; y < tam; y++){
                    printf("%c ", tabuleiro[k][y]);
                }
                printf("\n");
            }
        }
        printf("Sua pontuacao foi: %d\n", pontos);
    
    printf("Deseja jogar novamente? s/n");
    scanf(" %c", &pergunta);
}
    getch();
}
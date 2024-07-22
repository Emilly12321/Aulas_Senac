#include <iostream>
using namespace std;

void init(int board[][3]);          // Inicializa o placar com 0
char printBlock(int block);         // Imprime cada quadrado do tabuleiro
void show(int board[][3]);          // Mostra o tabuleiro
void playMove(int board[][3], int); // Fazer um movimento
int checkContinue(int *board[3]);   // Verificar se ainda há espaço em branco
int checkWin(int *board[3]);        // Verificar se alguém ganhou
int game(int board[][3]);           // Pra jogar um jogo inteiro
void scoreboard(int, int &, int &); // Mostra o placar

// Antes de começar o jogo da velha na linha 170 e 175 colocar os nomes dos jogadores :D 

int main()
{
	system("chcp 65001");// para usar acentos
	system("color E");
	cout<<"\nJOGO DA VELHA \n\n";
	cout<<"Criado por : https://www.cmmprogressivo.net/2020/05/Como-programar-Jogo-da-Velha-em-Cpp.html / Mudado por: Jonatan Gonçalves"<<endl;
    int board[3][3];

    int cont=0, player1=0, player2=0, result;
    do{
        init(board);
        result = game(board);
        show(board);
        scoreboard(result, player1, player2);

        cout<<"\n Outra partida?"<<endl;
        cout<<"0. Sair"<<endl;
        cout<<"1. Jogar de novo"<<endl;
        cin >> cont;
    }while(cont);

    return 0;
}

// Espaçamento do tabuleiro
void init(int board[][3])
{
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            board[i][j]=0;

}

// Caracter Usado
char printBlock(int block)
{
    if(block==0)
        return ' ';
    else if(block==1)
        return 'X';
    else
        return 'O';
}

// Construção do Tabuleiro
void show(int board[][3])
{
    cout<<endl;
    for(int row=0 ; row<3 ; row++){
        cout<<" "<< printBlock(board[row][0]) <<" |";
        cout<<" "<< printBlock(board[row][1]) <<" |";
        cout<<" "<< printBlock(board[row][2]) <<endl;

        if(row!=2){
            cout<<"___ ___ ___\n"<<endl;
        }
    }
}

// Informação da onde colocar as linhas e colunas
void playMove(int board[][3], int player)
{
    int row, col, check;
    do{
        cout<<"Linha: ";
        cin >>row;
        cout<<"Coluna: ";
        cin >> col;
        row--; col--;

        check = board[row][col] || row<0 || row>2 || col<0 || col>2;
        if(check)
            cout<<"Essa casa não está vazia ou fora do intervalo 3x3"<<endl;

    }while(check);

    if(player==0)
        board[row][col]=1;
    else
        board[row][col]=-1;
}

int checkContinue(int board[][3])
{
    for(int i=0 ; i<3 ; i++)
        for(int j=0 ; j<3 ; j++)
            if(board[i][j]==0)
                return 1;
    return 0;
}

int checkWin(int board[][3])
{
    int row, col, sum;

    // Adicionar as linhas
    for(row=0 ; row<3 ; row++){
        sum=0;

        for(col=0 ; col<3 ; col++)
            sum += board[row][col];

        if(sum==3)
            return 1;
        if(sum==-3)
            return -1;
    }

    // Adicionar as colunas
    for(col=0 ; col<3 ; col++){
        sum=0;

        for(row=0 ; row<3 ; row++)
            sum += board[row][col];

        if(sum==3)
            return 1;
        if(sum==-3)
            return -1;
    }

    // Adicionando na diagonal
    sum=0;
    for(row=0 ; row<3 ; row++)
        sum += board[row][row];
    if(sum==3)
        return 1;
    if(sum==-3)
        return -1;

    sum=board[0][2]+board[1][1]+board[2][0];
    if(sum==3)
        return 1;
    if(sum==-3)
        return -1;

    return 0;
}

// Mostra o Jogo
int game(int board[][3])
{
    int turn=0, cont, win;

    do{
        show(board);
        cout<<"\nJogador "<<1+turn%2<<endl;
        playMove(board, turn%2);
        turn++;

        cont=checkContinue(board);
        win = checkWin(board);
    }while(cont && !win);
    
    if(win==1){
    	// Jogador 1 começa com o X
        cout<<"\n(Nome do Jogador 1) ganhou!\n"; // Colocar o nome antes de começar 
        cout<<"Caraca você humilhou ;D"<<endl; // Alteração feita.
        return 1;
    }else
        if(win==-1){
        	// Jogador 2 começa com O
            cout<<"\n(Nome do Jogador 2) ganhou!\n"; // Colocar o nome antes de começar
            cout<<"Caraca você humilhou ;D"<<endl; // Alteração feita.
            return 2;
    }else
        cout<<"\nEmpate\n";
        cout<<"Jogaram muito bem :D"<<endl; // Alteração feita.
    return 0;
}

// Mostra o placar e o resultado
void scoreboard(int result, int &player1, int &player2)
{
    if(result==1)
        player1++;
    if(result==2)
        player2++;
    
	// Alterações colocadas a mais.    
    if(player1 >= 2 && player2 == 0){
    	cout<<"\n Amassando Jogador(a) 1"<<endl;
	}
	if(player2 >= 2 && player1 == 0){
    	cout<<"\n Amassando Jogador(a) 2"<<endl;
	}
	if(player1 == 2 && player2 == 2){
		cout<<"\n Que Jogo disputado";
	}       

    cout<<"\n Placar: "<<endl;
    cout<<player1<<" x "<<player2<<endl;
}
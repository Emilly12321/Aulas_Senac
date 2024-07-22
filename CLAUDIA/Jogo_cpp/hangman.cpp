#include <iostream>
#include <ctime>
#include <string>
#include <vector>
#include <cctype> //Para usar o tolower()

std::string get_random_word(std::vector<std::string>& words);
void play();
void getColor();

//***IMPORTANTE***//
//Este jogo de forca foi retirado do link https://codereview.stackexchange.com/questions/268810/hangman-game-coded-in-c
//Pelo usuário Random_Pythoneer59.
//***IMPORTANTE***//

/*
O que fiz de alterações no código: 
  1. Traduzi ele para o PT-BR;
  2. Adicionei novas palavras no vetor words;
  3. Adicionei system("cls") toda vez que ele gera uma nova arte, para que haja apenas uma forca na tela;
  4. Criei a função getColor(), que deixa o usuário mudar a cor do texto do terminal (obrigado, ChatGPT!)
  5. Adicionei um verificador que faz com que letras maiúsulas contem como letras minúsculas
  6. Adicionei uma linha "letras erradas", que mostra as letras que não estão na palavra
*/

std::vector<std::string> words = 
{
"anticonstitucionalissimamente", "cachorro", "gato", "carro", 
"bicicleta", "computador","telefone", "cadeira", "mesa", "livro", 
"janela", "pessoa", "cidade", "floresta", "espada", "cortinas", 
"criptografia", "psicologia", "sirene"
};


// Credit for art - https://gist.github.com/chrishorton/8510732aa9a80a03c829b09f12e20d9c
std::string hangman_art[7] = {
    " +---+\n"
    " |   |\n"
    "     |\n"
    "     |\n"
    "     |\n"
    "     |\n"
    "==========",
    " +---+\n"
    " |   |\n"
    " O   |\n"
    "     |\n"
    "     |\n"
    "     |\n"
    "==========",
    " +---+\n"
    " |   |\n"
    " O   |\n"
    " |   |\n"
    "     |\n"
    "     |\n"
    "==========",
    " +---+\n"
    " |   |\n"
    " O   |\n"
    "/|   |\n"
    "     |\n"
    "     |\n"
    "==========",
    " +---+\n"
    " |   |\n"
    " O   |\n"
    "/|\\  |\n"
    "     |\n"
    "     |\n"
    "==========",
    " +---+\n"
    " |   |\n"
    " O   |\n"
    "/|\\  |\n"
    "/    |\n"
    "     |\n"
    "==========",
    " +---+\n"
    " |   |\n"
    " O   |\n"
    "/|\\  |\n"
    "/ \\  |\n"
    "     |\n"
    "=========="
};

int main()
{
	system("CHCP 65001");
    srand(time(0));
    
    std::cout << "Bem vindo ao jogo da forca!\n";

    getColor(); //Minha função!
    play();
    

    return 0;
}

void getColor() //Declarando minha função!
{
	int cor = 0, decisao = 0;
	
    std::cout << "\nEscolha uma cor para deixar sua forca DE MATAR!: ";
    std::cout << "\n1: Azul";
    std::cout << "\n2: Verde";
    std::cout << "\n3: Aqua";
    std::cout << "\n4: Vermelho";
    std::cout << "\n5: Roxo";
    std::cout << "\n6: Amarelo";
    std::cout << "\n7: Branca";
    std::cout << "\n8: Cinza";
    std::cout << "\n9: Azul-claro";
    
    while(true){
    	decisao = 0;
	    std::cout << "\nSua cor: ";
		std::cin >> cor;
	    system(("color " + std::to_string(cor)).c_str()); 
		std::cout << "Você gostou da cor? \n[1]SIM\n[2]NÃO\nSua escolha: ";
		std::cin >> decisao;
	
		if(decisao == 1){
			system("cls");
			std::cout << "ENTÃO VAMOS AO JOGO!";
			sleep(1);
			break;
		}else std::cout << "Então coloque outra!\n";    	
	}
}

void play()
{
    std::string secret_word = get_random_word(words);
    std::string guess_word = secret_word;
    for (int i = 0; i < secret_word.length(); ++i)
    {
        guess_word[i] = '_';
    }
    int try_no = 0;
    char guess;
    std::string errors = "";

    while (true)
    {
    	system("cls");

        std::cout << hangman_art[try_no] << "\n";
        std::cout << guess_word << "\n";
        std::cout << "Palavras erradas: " << errors;
        std::cout << "\nAdivinhe uma letra:\n";
		std::cin >> guess;
		guess = std::tolower(guess);

        if (secret_word.find(guess) != std::string::npos)
            {   
                for (int i = 0; i < guess_word.length(); ++i)
                {
                    if (secret_word[i] == guess)
                    {
                        guess_word[i] = guess;
                    }
                }
            if (secret_word == guess_word)
            {
            	system("cls");
                std::cout << hangman_art[try_no] << "\n";
                std::cout << guess_word << "\n";
                std::cout << "Palavras erradas: " << errors;
                std::cout << "\b\b "; //Remove a vírgula final nas letras erradas
                std::cout << "\nVocê ganhou! A palavra era " << secret_word << "\n";
                break;
            }
        } else {
            try_no++;
            errors+= guess;
            errors += ", ";
        }
        if (try_no >= 6)
        {
        	system("cls");
            std::cout << hangman_art[try_no] << "\n";
            std::cout << guess_word << "\n";
        	std::cout << "Palavras erradas: " << errors;
        	std::cout << "\b\b "; //Remove a vírgula final nas letras erradas
            std::cout << "\nVocê perdeu! A palavra era " << secret_word << "\n";
            break;
        }
    }
}

std::string get_random_word(std::vector<std::string>& words)
{
    return words[rand() % words.size()];
}
#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define LIGHT_BLUE "\033[94m"
#define ORANGE "\033[38;5;208m"

using namespace std;

main()
{
  system("chcp 65001"); //para usar acentuação
  
  cout<<GREEN<<"\n\n\t\t  PROGRAMA FOFINHO \n\n" <<RESET;
  cout<<RED"\n\n BATATINHA QUANDO NASCE \n\n"<<RESET;
  cout<<BLUE"\n\n ESPALHA A RAMA PELO CHÃO \n\n"<<RESET;
  cout<<ORANGE"\n\n HOJE É SEXTA-FEIRA \n\n"<<RESET;
  cout<<LIGHT_BLUE"\n\n VAI TER FESTA DE MONTÃO \n\n"<<RESET;
  cout<<"\n\n\n\n";
 
}

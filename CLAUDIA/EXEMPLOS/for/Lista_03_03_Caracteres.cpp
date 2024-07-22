/*
3. FUP que peça ao usuário que digite um caractere e quantidade de
vezes que deseja que esse caractere seja impresso na tela.
*/

#include <iostream> 
using namespace std;
int i;
int qtde_num;
char caracter; 
main () 
{//inicio
  system("chcp 65001");// para usar acentos
  cout<<"\n PROGRAMA: CARACTERES \n\n ";
  cout<<"\n Digite um caracter:  ";
  cin>>caracter;
  cout<<"\n Quantos vezes vc deseja repitir o caracter?  ";
  cin>>qtde_num;
  for (i=1;i<=qtde_num;i++)// for é para repetir
  {
    cout<<"  " <<caracter;
  }//fecha o for

  cout<<"\n\n\n";
}//fim
  
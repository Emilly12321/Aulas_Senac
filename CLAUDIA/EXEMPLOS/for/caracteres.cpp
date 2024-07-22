// FUP que pergunte ao usuário um caractere
// Pegunte também a quantidade de vezes que deseja imprimir
// esse caractere.
#include <iostream> 
using namespace std;
int i,qtde; // para a quantidade de vezes para imprimir
char caracter; // para o caractere informado
main () 
{//inicio
  system("chcp 65001");// para usar acentos
  cout<<"\n PROGRAMA: REPETINDO O CARACTER \n\n ";
  cout<<"\n Informe um caracter:  ";
  cin>>caracter;
  cout<<"\n Quantas vezes deseja imprimir o caracter? ";
  cin>>qtde;
  for (i=1;i<=qtde;i++)// for é para repetir
  {
    cout<<"  "<<caracter;
  }
cout<<"\n\n\n";
}

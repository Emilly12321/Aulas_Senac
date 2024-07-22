//Números Pares
#include <iostream> 
using namespace std;
int i;// usamos o i para o comando for
int num; // para a tabuada
main () 
{//inicio
  system("chcp 65001");// para usar acentos
  cout<<"\n PROGRAMA: Números Pares \n\n ";
  for (i=0;i<=1000;i++)// for é para repetir
  {
    if (i%2!=0)// é ímpar?
        cout<<"  "<<i;
  }
  cout<<"\n\n\n";
}
  
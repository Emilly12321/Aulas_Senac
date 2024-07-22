/*
FUP que leia a quantidade de números que o usuário 
desejar 
e verifique quantos destes números são 
negativos e quantos são positivos. 

Imprima uma mensagem na tela. 
*/

#include <iostream> 
using namespace std;
int i;
int qtde_num,cont_positivo=0,cont_negativo=0;
int num; 
main () 
{//inicio
  system("chcp 65001");// para usar acentos
  cout<<"\n PROGRAMA: POSITIVOS E NEGATIVOS \n\n ";
  cout<<"\n Quantos números inteiros vc deseja informar?  ";
  cin>>qtde_num;
  for (i=1;i<=qtde_num;i++)// for é para repetir
  {
    cout<<"\n"<<"Digite um número: ";
    cin>>num;
    if (num < 0)
     {
      cont_negativo++;//cont_negativo=cont_negativo + 1;
	 }
	else
	 {
	  cont_positivo++;
	 }
	 cout<<" \n\n Foram informados:  "<<cont_positivo<<" números positivos";
     cout<<" \n\n Foram informados:  "<<cont_negativo<<" números negativos";
  }
  
  cout<<"\n\n\n";
}
  
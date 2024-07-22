/*
2. FUP altere o programa anterior para imprimir:
 A quantidade de números negativos
 A quantidade de pares
  A quantidade de números múltiplos de 7 
*/

#include <iostream> 
using namespace std;
int i;
int qtde_num,cont_negativo=0,qtde_pares=0,qtde_multiplos7=0;
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
       cont_negativo++;//cont_negativo=cont_negativo + 1;
	if (num%2==0)
	   qtde_pares++;
	   if (num%7==0)//múltiplos de 7
	   qtde_multiplos7++;

  }//fecha o for
  cout<<" \n\n Foram informados:  "<<cont_negativo<<" números negativos";
  cout<<" \n\n Foram informados:  "<<qtde_pares<<" números pares";
  cout<<" \n\n Foram informados:  "<<qtde_multiplos7<<" números múltiplos de 7";
  cout<<"\n\n\n";
}
  
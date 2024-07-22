/*
5. FUP que leia a idade de 15 pessoas. Após calcule e imprima:
a. A menor idade do grupo;
b. A maior maior do grupo;

*/

#include <iostream> 
using namespace std;
int i;
int maior,menor,num;

main () 
{//inicio
  system("chcp 65001");// para usar acentos
  cout<<"\n PROGRAMA: MAIOR E MENOR DE 5 NÚMEROS \n\n ";
  for (i=1;i<=5;i++)// for é para repetir
  {
    cout<<"\n"<<"Digite um número: ";
    cin>>num;
    if (i==0)
     {
      maior=num;
      menor=num;
	 }//if
	if (num>maior)
	   maior = num;
	if (num<menor)  
	   menor = num; 
  }//for
	cout<<" \n\n O maior número informado foi:  "<<maior;
    cout<<" \n\n O menor número informado foi:  "<<menor;
  
  cout<<"\n\n\n";
}
  
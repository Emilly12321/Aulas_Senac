//********************************
//**** Program by CLAWER  ****
//********************************

#include <iostream>
#include<stdlib.h>
#include<time.h>
int const TAM=50;

int valor, vet[TAM],i;
using namespace std;
main()
{
   system("chcp 65001");// para usar acentos
   cout<<"\n\n VETOR DE NÚMEROS ALEATÓRIOS \n";
   srand(time(NULL));  // função que inicializa o gerador de números randômicos
   
   for(i=0; i<TAM;i++)
   { 
    vet[i] =(rand()%100)+1; //vetor recebendo um número aleatório
   }
   cout<<"\n\n VETOR GERADO: \n\n";
   for(i=0;i<TAM;i++)
       	cout<<"  "<< vet[i];
 
  cout<<"\n\n";
}

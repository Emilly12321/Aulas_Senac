/*
FUP que leia o salário de 10 pessoas. 
Imprima o maior e o menor salário informados.
*/
#include<iostream>
using namespace std;
int const TAM = 5;// Constante que não muda de valor
int i;
float salario[TAM],maior_sal, menor_sal;
main()
{
  system("chcp 65001");// para usar acentos
  cout<<"\n \tPrograma SALÁRIOS - Maior e Menor";
  cout<<"\n\n Informe "<<TAM<< "  Salários ";
  // LEITURA DO VETOR DE SALARIOS
  for(i=0;i<TAM;i++)//Variável deve ser inteira
   {
    cout<<"\n\n Digite o " <<i+1<<"º Salário:  ";
    cin>>salario[i];
    if (i==0){
	    maior_sal = salario[i];
    	menor_sal = salario[i];
	}
	if (salario[i]>maior_sal)//maior salário
	    maior_sal=salario[i];
	if (salario[i]<menor_sal)
	    menor_sal=salario[i];

    }// FIM DO FOR 
    
  cout<<"\n\n O Maior Salário informado foi:  "<<maior_sal;
  cout<<"\n\n O Menor Salário informado foi:  "<<menor_sal;
 
  cout<<"\n\n\n";
} 

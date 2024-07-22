#include<iostream>
#include<iomanip>
using namespace std;
int i;   /* acumulador é de soma */
float media=0,peso,acumula=0;
main()
{
  system("chcp 65001");// para usar acentos
  cout << fixed << setprecision(2);
  cout<<"\n \tPrograma Media de Pesos";
  cout<<"\n\n Digite o peso de 5 Pessoas: \n";
	for(i=1;i<=5;i++)
	{
		do{
			cout<<"\n\n Digite o peso da "<<i<<"ª Pessoa: ";
			cin>>peso;
			acumula=acumula+peso;
			
			if ((peso<0)||(peso>145))
			{
			  cout<< "\n\n ATENÇÃO IDADE ERRADA";
			  cout<< "\n\n Digite o peso novamente da "<<i<<"a Pessoa: ";
			  cin >> peso;
			}
		}while ((peso<0) || (peso>145));   // se a idade for errada 
	acumula=acumula+peso;
	media=acumula/i;
	}
	cout<<"\n\n A Média dos pesos das 5 Pessoas é: "<<media;
}
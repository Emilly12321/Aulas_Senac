#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include <stdlib.h>
#include <time.h>


//Código feito com base em tutoriais na internet, desenvolvido por Gustavo Ferreira do 2 semestre do Curso de Jogos Digitais da FATEC SAO CAETANO DO SUL.

 
void mgotoxy(int x, int y)
{
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x,y});
}
 

main()
{
 int x,d=2,cx[300]={1,2},cy[300]={7,7},t=1,mx,my,velo=100,velo2=5;
 char niv;


 char tecla='a';
 int opcao;
 int pontos=0;
 int nivel = 1;
 
 
 
 for(x=0;x<18;x++)
 { mgotoxy(0,x); //vertical esquerda.//
 
 printf("\033[31m%c",219);
 }
 printf("\033[31m");
 
 for(x=0;x<50;x++)
 { mgotoxy(x,0); //horizontal ssuperior//
 printf("%c",219);
 }
 for(x=0;x<18;x++)
 { mgotoxy(50,x); //vertical direita//
 printf("%c",219);
 }
 for(x=0;x<51;x++)
 { mgotoxy(x,18); //horizontal inferior.//
 printf("%c",219);
 }
 
 
 
 srand(time(NULL));
 mx=(rand()%49)+1;
 my=(rand()%17)+1;
 
 velo = 200;
 
 while(tecla!='s')
 { while(tecla!='s'&&!(tecla=kbhit()))
 
 { for(x=t;x>0;x--)
 { cx[x]=cx[x-1];
 cy[x]=cy[x-1];
 }
 
 if(d==0)cx[0]--;
 if(d==1)cy[0]--;
 if(d==2)cx[0]++;
 if(d==3)cy[0]++;
 mgotoxy(cx[t],cy[t]);
 printf(" ");
 if(mx==cx[0]&&my==cy[0])
 { t++;
 pontos++;
 mx=(rand()%25)+1;
 my=(rand()%17)+1;
 velo-=5;
 velo2+=5;
 
 }
 mgotoxy(cx[0],cy[0]);
 
 printf("%c",219);


 mgotoxy(mx,my);
 printf("%c",1);
 mgotoxy(55,10);
 printf("\033[0m");
 
// ...
printf ("\033[31m Pontos: %d",pontos); // Define a cor do texto como vermelho
// ...
mgotoxy(55,5);
printf ("\033[32mNivel: %d",nivel); // Define a cor do texto como verde
// ...
mgotoxy(55,3);
printf ("\033[34mVelocidade: %d",velo2); // Define a cor do texto como azul
// ...


 printf ("Jogo desenvolvido por Gustavo Ferreira");
 Sleep(velo);
 for(x=1;x<t;x++)
 { if(cx[0]==cx[x]&&cy[0]==cy[x])tecla='s';
 }
 if(cy[0]==0||cy[0]==18||cx[0]==0||cx[0]==50)tecla='s';
 
 

 }
 if(tecla!='s')tecla=getch();
 if(tecla=='K')d=0;
 if(tecla=='H')d=1;
 if(tecla=='M')d=2;
 if(tecla=='P')d=3;
 if(cy[0]==0||cy[0]==18||cx[0]==0||cx[0]==26)tecla='s';
 
 }
 system("cls");
 system("pause");

 

 printf ("\n\n\tVOCE PERDEU\n\n");



 printf ("\n\n\tVOCE FEZ %d PONTOS",pontos);
 
 getch();
}     

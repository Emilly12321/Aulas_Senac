#include <windows.h>    
#include <stdio.h>       
#include <conio.h>        
#include <iostream>        
#include <stdlib.h>      
#include <time.h>        
#include <bits/stringfwd.h>
void XYloc(int x, int y)
{
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x,y});
}

 

void txt(void);
void telinha(void);
void jogo(void);
void historico(void);
void cadastro(void);

 

    struct cadas{

        char n;
        int idade;
    };

 
int numero;
int pontos=0;
char nome [100];

 

 

main()
{
/**************MENU***************/
do    {
	    system("color 17 ");	  
        system("cls"); 
        printf("-----------------------------------------------------------------------------------\n");
        printf("\n-                                                  XXXXXXXXXXXX                 -\n");
        printf("-                    Jogo da cobrinha            XXXXX($)XXXX($)XX                -\n");
        printf("-                                               XXXXXXXXXXXXXXXXXX                -\n");
        printf("-              1 - Comecar jogo                 XXXXXXXXXXXXX----------<          -\n");
        printf("-              2 - Ver pontuacao                  XXXXXXXXXXXXXX                  -\n");
        printf("-              3 - Resetar pontuacao             XXXXXXXXXXXX                     -\n");
        printf("-              4 - Sair                      XXXXXXXXXXXXX                        -\n");    
        printf("-                                        XXXXXXXXXXXXX                            -\n");
        printf("-                                      XXXXXXXXXXXX                               -\n");
        printf("-                                     XXXXXXXXXXXX                                -\n");
        printf("-                                      XXXXXXXXXXXXXXXX                           -\n");
        printf("-                                         XXXXXXXXXXXXXX                          -\n");
        printf("-                     I                       XXXXXXXXXXXXX                       -\n");
        printf("-                   III                           XXXXXXXXXXXX                    -\n");
        printf("-                  IIII                               XXXXXXXXXX                  -\n");
        printf("-                  IIII                                  XXXXXXXX                 -\n");
        printf("-                  IIII                                 XXXXXXXXX                 -\n");
        printf("-                  XXXXX                              XXXXXXXXXXX                 -\n");
        printf("-                   XXXXX                         XXXXXXXXXXXXX                   -\n");
        printf("-                   XXXXXXX                    XXXXXXXXXXXXX                      -\n");
        printf("-                      XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX                            -\n");
        printf("-                           XXXXXXXXXXXXXXXXXXXXXX                                -\n");
        printf("-                                XXXXXXXXXXXXX                                    -\n");
        printf("- Matheus e Davi                                                                  -\n");
        printf("-----------------------------------------------------------------------------------\n");       
        scanf("%d", &numero);
        switch(numero)
        {
            case 1:
                system("cls");
                printf("\n\n   Jogando");
                telinha();
                break;
            case 2:
                system("cls");
                printf("\nRegistro de jogadas\n   ");
                historico();
                break;
            case 3:
                FILE *historico;
                historico = fopen("historico.txt", "w");
                fprintf(historico,"---------------------------------------------------");
                fprintf(historico,"\n            HISTORICO DE JOGADAS     \n");
                fprintf(historico,"---------------------------------------------------\n");
                fclose(historico);
                main();
                break;
            case 4:
                system("cls");
                printf("\n\n   Obrigado por Testar");
                getch();
                return(0);
                break;
            default:
                printf("\n\nOpcao invalida...");
                getch();
                break;
        }
    }while(numero != 3);
}

 

void jogo(void)
{
   
    system("cls");

 

     int x;
     int d=2;
     int cx[300]={1,2};
     int cy[300]={7,7};
     int t=1;
     int mx;  
     int my;  
     int velo=100;
     int velo2=5;
     char niv;

 

     char tecla='a';
     int opcao;
//     int pontos=0;
     int nivel = 1;


     
     for(x=0;x<18;x++)
    {
        XYloc(0,x); 
        printf("%c",178);
    }
    for(x=0;x<50;x++)
    {
        XYloc(x,0); 
        printf("%c",178);
    }
    for(x=0;x<18;x++)
    {
        XYloc(50,x); 
        printf("%c",178);
    }
    for(x=0;x<51;x++)
    {
        XYloc(x,18); 
        printf("%c",178);
    }

     srand(time(NULL));
     mx=(rand()%49)+1;
     my=(rand()%17)+1;

     velo = 180;

     while(tecla!='s')
     { 
         while(tecla!='s'&&!(tecla=kbhit()))

         { 
         for(x=t;x>0;x--)
             {
                cx[x]=cx[x-1];
                 cy[x]=cy[x-1];
             }
             if(d==0)cx[0]--;
            if(d==1)cy[0]--;
            if(d==2)cx[0]++;
            if(d==3)cy[0]++;
            XYloc(cx[t],cy[t]);
            printf(" ");
            if(mx==cx[0]&&my==cy[0]) 
        { 
            t++;
            pontos++;
             mx=(rand()%25)+1;
             my=(rand()%17)+1;
             velo-=5;
             velo2+=5;
        }
         XYloc(cx[0],cy[0]);

         printf("%c",254);

        XYloc(mx,my);
        printf("%c",1);
        XYloc(55,10);

        printf ("Pontos: %d",pontos);
        XYloc(55,5);
        printf ("Nivel: %d",nivel);
        XYloc(55,3);
        printf ("Velocidade: %d",velo2);
        XYloc(3,22);


        printf ("\nJogador :   ----  %s  ----\n\n",nome);
        printf ("Bom jogo! Obrigado por testar ");

 

        Sleep(velo);

        for(x=1;x<t;x++)
        {
            if(cx[0]==cx[x]&&cy[0]==cy[x])tecla='s';
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
    printf ("\n\n\tVOCE FEZ %d PONTOS %s",pontos, nome);
     getch();
    txt(); 
}

 

 

void txt(void)
{
    FILE *historico;
    historico = fopen("historico.txt", "a");
    fprintf(historico,"---------------------------------------------------\n",pontos);
    fprintf(historico,"\t Nome :  %s \n",nome);
    fprintf(historico,"\t Pontos : %d\n",pontos);
    fprintf(historico,"---------------------------------------------------\n",pontos);
    fclose(historico);
    main();
}

 

void historico(void)
{
    char linhas[100];
    FILE *historico;
    historico = (FILE*) malloc(sizeof (FILE*));
    historico = fopen("historico.txt", "r");

    while(fgets(linhas,100,historico) !=NULL)
    {
        printf("%s", linhas);    
    }

    getch();
    main();
}
void cadastro(void)
{
/*
    struct cdt 
    {
        char nome[100];
        int idade;
    };

    struct cdt vet[ 2 ];

//    for ( ; i < 2; i++)
int resposta;
    do
    {

    printf("\nDigite o nome:");
    scanf("%s",vet[i].nome);
    printf("\nDigite a idade:");
    scanf("%d",&vet[i].idade);


    printf("\ndeseja continuar 8 para sim 9 para nao: ");
    scanf("&d",resposta);
    getch();

    }while (resposta != 9);
    main();




//    fprintf(usuarios);
//    fclose(user);
//    main();*/
}
void telinha(void)
{
        system("cls");
        printf("\n\n   Digite seu nome: ");
        scanf("%s", nome);
        jogo();
}
#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

/*--------------------

6 - Realizar uma venda e 1 - cadastro de produtos
--> Poderia colocar um sistema de tags ou de "features" de um produto
--> Na hora de efetuar a venda o cliente poderia selecionar um produto em específico para saber mais sobre
------------------------*/

struct Produto
{
    int codigo;
    char nome[200];
    char marca[100];
    int val_compra;
    int val_venda;
    int estoque;
};

Produto produto[1000];
int i,opcao,n,k,d;         // While geral, switch, for cadastro, guarda cadastro 2, guarda cadastro 1
char e,es;                 // Variáveis de escolha (Sim ou não)

int cod,ch;
//int f,m; // Codigo



int main()
{
    setlocale(LC_ALL, "pt-BR");
    while(i!=1)
    {
        cout<<"----------- MENU -----------\n";
        cout<<"1 - Cadastro de produtos\n";
        cout<<"2 - Listar produtos\n";
        cout<<"3 - Buscar produtos\n";
        cout<<"4 - Alterar produtos\n";
        cout<<"5 - Remover produtos\n";
        cout<<"6 - Realizar uma venda\n";
        cout<<"7 - Finalizar programa\n";
        cout<<"----------------------------\n";
        cout<<"Selecione uma opção:\n";
        cin>>opcao;
        switch(opcao)
        {
        //------------------------------
        // Cadastro de produtos
        //------------------------------
        case 1:
            cout<<"Deseja cadastrar um produto?\n";
            cin>>e;
            if(e!='S' && e!='s' && e!='N' && e!='n')
            {
                while(e!='S' && e!='s' && e!='N' && e!='n')
                {
                    cout<<"Opção inválida, selecione novamente:\n";
                    cin>>e;
                }
            }
            if(e=='S' || e=='s')
            {
                for(n=k;n<1000;n++)
                {
                    d++;
                    cout<<"\n----- NOVO PRODUTO  -----\n";
                    cout<<"- Código do produto: ";
                    cin>>produto[n].codigo;
                    cout<<"- Nome do produto: ";
                    cin>>produto[n].nome;
                    cout<<"- Nome da fabricante: ";
                    cin>>produto[n].marca;
                    cout<<"- Valor de compra: ";
                    cin>>produto[n].val_compra;
                    cout<<"- Valor de revenda: ";
                    cin>>produto[n].val_venda;
                    cout<<"- Quantidade em estoque: ";
                    cin>>produto[n].estoque;

                    cout<<"\nDeseja cadastrar outro produto?\n";
                    cin>>es;
                    if(es!='S' && es!='s' && es!='N' && es!='n')
                    {
                        while(es!='S' && es!='s' && es!='N' && es!='n')
                        {
                            cout<<"Opção inválida, selecione novamente:\n";
                            cin>>es;
                        }
                    }
                    if(es=='S' || es=='s')
                    {
                        cout<<"Próximo produto...\n";
                    }
                    if(es=='N' || es=='n')
                    {
                        cout<<"\nRedirecionando de volta ao menu...\n";
                        n=1000;
                    }

                }
            }
            if(e=='N' || e=='n')
            {
                cout<<"Redirecionando de volta ao menu...\n";
            }
            k=d;

            break;
        //------------------------------
        // Listar produtos
        //------------------------------
        case 2:
            cout<<"----- PRODUTOS CADASTRADOS -----\n";
            for(n=0;n<k;n++)
            {
                cout<<"\n----- Produto "<<n+1<<" -----\n";
                cout<<"- Código do produto: "<<produto[n].codigo<<"\n";
                cout<<"- Nome do produto: "<<produto[n].nome<<"\n";
                cout<<"- Nome da fabricante: "<<produto[n].marca<<"\n";
                cout<<"- Valor de compra: "<<produto[n].val_compra<<"\n";
                cout<<"- Valor de revenda: "<<produto[n].val_venda<<"\n";
                cout<<"- Quantidade em estoque: "<<produto[n].estoque<<"\n";
            }
            cout<<"\n\n";
            break;
        //------------------------------
        // Buscar produtos
        //------------------------------
        case 3:
            break;
        //------------------------------
        // Alterar produtos
        //------------------------------
        case 4:
        int m,f,z;

            cout<<"Deseja alterar um produto?\n";
            cin>>e;
            if(e!='S' && e!='s' && e!='N' && e!='n')
            {
                while(e!='S' && e!='s' && e!='N' && e!='n')
                {
                    cout<<"Opção inválida, selecione novamente:\n";
                    cin>>e;
                }
            }
            if(e=='S' || e=='s')
            {
                m=0;
                cout<<"Insira o código do produto que deseja alterar:\n";
                cin>>cod;
                for(n=0;n<k;n++)
                {
                    if(cod==produto[n].codigo)
                    {
                        f=1;
                        cout<<"Produto encontrado.\n";
                        while(m!=1)
                        {
                            cout<<"O que deseja alterar?\n";
                            cout<<"1 - Código\n";
                            cout<<"2 - Nome\n";
                            cout<<"3 - Fabricante\n";
                            cout<<"4 - Valor de compra\n";
                            cout<<"5 - Valor de venda\n";
                            cout<<"6 - Quantidade em estoque\n";
                            cin>>ch;
                            switch(ch)
                            {
                            case 1:
                                cout<<"Código atual: "<<produto[n].codigo<<"\n";
                                cout<<"Novo código: ";
                                cin>>produto[n].codigo;
                                break;
                            case 2:
                                cout<<"Nome atual: "<<produto[n].nome<<"\n";
                                cout<<"Novo nome: ";
                                cin>>produto[n].nome;
                                break;
                            case 3:
                                cout<<"Fabricante atual: "<<produto[n].marca<<"\n";
                                cout<<"Nova fabricante: ";
                                cin>>produto[n].marca;
                                break;
                            case 4:
                                cout<<"Valor de compra atual: "<<produto[n].val_compra<<"\n";
                                cout<<"Novo valor de compra: ";
                                cin>>produto[n].val_compra;
                                break;
                            case 5:
                                cout<<"Valor de venda atual: "<<produto[n].val_venda<<"\n";
                                cout<<"Novo valor de venda: ";
                                cin>>produto[n].val_venda;
                                break;
                            case 6:
                                cout<<"Quantidade em estoque: "<<produto[n].estoque<<"\n";
                                cout<<"Nova quantidade em estoque: ";
                                cin>>produto[n].estoque;
                                break;
                            default:
                                cout<<"Opção inválida, insira novamente.\n";
                                break;
                            }
                            cout<<"\nContinuar alterando?\n";
                            cin>>es;
                            if(es!='S' && es!='s' && es!='N' && es!='n')
                            {
                                while(es!='S' && es!='s' && es!='N' && es!='n')
                                {
                                    cout<<"Opção inválida, selecione novamente:\n";
                                    cin>>es;
                                }
                            }
                            if(es=='S' || es=='s')
                            {
                                cout<<"Continuando...\n";
                            }
                            if(es=='N' || es=='n')
                            {
                                cout<<"\nRedirecionando de volta ao menu...\n";
                                m=1;
                                n=k;
                                f=0;
                            }

                        } // Fim do while
                    } // If cod inf == cod orig
                } // Fim do for do produto

                if(f==0)
                {
                    cout<<"Produto não encontrado.\n";
                }

            } // Fim do Sim
            if(e=='N' || e=='n')
            {
                cout<<"Redirecionando de volta ao menu...\n";
            }
            break;
        //------------------------------
        // Remover produtos
        //------------------------------
        case 5:
            break;
        //------------------------------
        // Realizar uma venda
        //------------------------------
        case 6:
            break;
        //------------------------------
        // Sair
        //------------------------------
        case 7:
            cout<<"Deseja finalizar o programa?\n";
            cout<<"S - Sim | N - Não\n";
            cin>>e;
            if(e!='S' && e!='s' && e!='N' && e!='n')
            {
                while(e!='S' && e!='s' && e!='N' && e!='n')
                {
                    cout<<"Opção inválida, selecione novamente:\n";
                    cin>>e;
                }
            }
            if(e=='S' || e=='s')
            {
                cout<<"Programa finalizado.\n";
                i=1;
            }
            if(e=='N' || e=='n')
            {
                cout<<"Redirecionando de volta ao menu...\n";
            }
            break;
        //------------------------------
        //------------------------------
        default:
            cout<<"Número inválido, insira novamente.\n";
        }

    }
}

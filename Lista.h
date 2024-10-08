#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include <string>
using namespace std;


typedef string TipoDado; //Define o tipo de dado que ser� armazenado na Lista


struct TipoCelula{

   TipoDado Item;
   TipoCelula *Prox;
};


void Lista_Construtor();
void Lista_Destrutor();
void Lista_Imprimir();
bool Lista_Vazia();
int Lista_Tamanho();
// bool Lista_Inserir_Inicio(int Elemento);
// bool Lista_Inserir_Fim(int Elemento);
// bool Lista_Inserir(int Elemento, int Posicao);
bool Lista_Inserir_Ordenado(string Elemento);
bool Lista_Remover_Inicio(int &Elemento);
bool Lista_Remover_Fim(int &Elemento);
bool Lista_Remover(int &Elemento, int Posicao);
bool Lista_Inicio(int &Elemento);
bool Lista_Fim(int &Elemento);
bool Lista_BuscarPeloElemento(int Elemento, int &Posicao);
bool Lista_BuscarPelaPosicao(int &Elemento, int Posicao);


#endif // LISTA_H_INCLUDED

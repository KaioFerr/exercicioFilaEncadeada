#include <iostream>
#include "Lista.h"
using namespace std;

void menu() {
    int opcao;
    bool condicao = true;
    string palavra;
    while (condicao) {
        cout << "1. Adicionar palavra na Lista" << endl << "2. Imprimir Lista" << endl << "3. Sair" << endl << "Digite uma opcao:" << endl ;
        cin >> opcao;
        switch (opcao) {
            case 1:
                cout << "Digite a palavra:" << endl;
                cin >> palavra;
                if(Lista_Inserir_Ordenado(palavra)) {
                    cout << "Palavra inserida com sucesso!" << endl;
                }else cout << "Palavra nao existe!" << endl;
                break;
            case 2:
                cout << "Imprimindo Lista..." << endl;
                Lista_Imprimir();
                break;
            case 3:
                cout << "Saindo..." << endl;
                condicao = false;
                break;
            default:
                cout << "Opcao invalida!" << endl;
        }
    }
}


int main() {
    Lista_Construtor();
    menu();
    Lista_Destrutor();
    system("pause");
}

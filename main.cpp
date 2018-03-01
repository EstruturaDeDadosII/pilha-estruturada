#include <iostream>
#include <deque>
#include "pilha.h"

using namespace std;

deque<int> numeros;

void menu();

int main() {
    menu();
    system("PAUSE");
    return 0;
}

void menu() {

    char escolha = 'a';
    int numero = -9999999;

    cout << "--------------------------------------" << endl;
    cout << "Menu Principal" << endl;
    cout << "--------------------------------------" << endl << endl;

    cout << "[1] Adicione um numero no topo da pilha" << endl;
    cout << "[2] Remova um numero do topo da pilha" << endl;
    cout << "[3] Retorna numero do topo da pilha" << endl;
    cout << "[4] Verifica se a pilha esta vazia" << endl;
    cout << "[5] Verifica o tamanho da pilha" << endl;
    cout << "[6] Lista a pilha" << endl;
    cout << "[0] SAIR DO SOFTWARE" << endl << endl;

    cout << "Digite uma opcao valida: ";
    cin.clear();
    cin >> escolha;

    switch (escolha) {
        case '0':
            cout << "SAINDO..............." << endl;
            return;
        case '1':
            cout << "Digite um numero: ";
            cin.clear();
            cin >> numero;
            numeros = adicionaNumero(numeros, numero);
            break;

        case '2':
            if (!estaVazia(numeros)) {
                numeros = removeNumeroDoTopo(numeros);
            } else {
                cout << "Sua lista esta vazia" << endl;
            }
            break;

        case '3':
            if (!estaVazia(numeros)) {
                cout << "O numero do topo eh: " << retornaObjDoTopo(numeros);
            } else {
                cout << "Sua lista esta vazia" << endl;
            }
            break;

        case '4':
            if (estaVazia(numeros)) {
                cout << "Sua lista esta vazia" << endl;
            } else {
                cout << "A sua lisa não esta vazia" << endl;
            }
            break;

        case '5':
            if (!estaVazia(numeros)) {
                cout << "Voce tem " << tamanhoDaPilha(numeros) << endl;
            } else {
                cout << "Sua lista esta vazia" << endl;
            }
            break;

        case '6':
            if (!estaVazia(numeros)) {
                listaPilha(numeros);
            } else {
                cout << "Sua lista esta vazia" << endl;
            }
            break;

        default:
            cout << "Opcao invalida. Tente nvamente ..." << endl << endl;
    }

    cout << endl << endl;

    menu();
}
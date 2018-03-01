//
// Created by thiago on 01/03/2018.
//

#include "pilha.h"

deque<int> adicionaNumero(deque<int> numeros, int numero) {
    numeros.push_front(numero);
    return numeros;
}

deque<int> removeNumeroDoTopo(deque<int> numeros) {

    int numero = numeros.front();

    numeros.pop_front();
    cout << "Voce eliminou o numero " << numero << " do topo da lista";

    return numeros;
}

int retornaObjDoTopo(deque<int> numeros) {
    return numeros.front();
}

bool estaVazia(deque<int> numeros) {
    return numeros.empty();
}

int tamanhoDaPilha(deque<int> numeros) {
    return numeros.size();
}

void listaPilha(deque<int> numeros) {

    for (deque<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        cout << " " << *it;
    }

    cout << endl << endl;
}

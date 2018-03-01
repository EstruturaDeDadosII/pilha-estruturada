//
// Created by thiago on 01/03/2018.
//

#ifndef PILHA_ESTRUTURADO_PILHA_H
#define PILHA_ESTRUTURADO_PILHA_H

#include <iostream>
#include <deque>

using namespace std;

deque<int> adicionaNumero(deque<int> numeros, int numero);
deque<int> removeNumeroDoTopo(deque<int> numeros);
int retornaObjDoTopo(deque<int> numeros);
bool estaVazia(deque<int> numeros);
void listaPilha(deque<int> numeros);
int tamanhoDaPilha(deque<int> numeros);





#endif //PILHA_ESTRUTURADO_PILHA_H

//
// Created by thiago on 17/03/2018.
//

#ifndef PILHA_GENERICA_PILHA_H
#define PILHA_GENERICA_PILHA_H


#include <iostream>
#include <deque>

using namespace std;

template <class T>
class pilha {
public:
    deque<T> t;

    void adicionaNumero(T t) {
        this->t.push_front(t);
    }

    T removeNumeroDoTopo() {
        T t = this->t.front();
        this->t.pop_front();
        return t;
    }

    T retornaObjDoTopo() {
        return t.front();
    }

    bool estaVazia() {
        return t.empty();
    }

    void listaPilha() {

        if (t.empty()) {
            cout << "A sua pilha esta vazia" << endl;
            return;
        }

        cout << "-------------" << endl;
        for (typename deque<T>::iterator it = t.begin(); it != t.end(); ++it) {
            cout << " " << *it;
        }
        cout << endl << "-------------" << endl;
    }

    int tamanhoDaPilha() {
        return t.size();
    }
};


#endif //PILHA_GENERICA_PILHA_H

//
// Created by guili on 08/03/2018.
//

#ifndef GITREPO_LISTA_H
#define GITREPO_LISTA_H

#include "iostream"
using namespace std;


struct no{
    int key;
    no* next;
};


class lista{
private :
    no* head;
    no* tail;
public:
    lista();
    void push(int valor);

    void printaLista();

    int dequeue();

    void pop();

    void add(int valor);

    bool empty();
    int retornaHead();
};

#endif //GITREPO_LISTA_H

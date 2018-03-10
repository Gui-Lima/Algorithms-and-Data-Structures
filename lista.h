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
    lista(){
        head = NULL;
        tail = NULL;
    }
    void push(int valor){
        no* tempo = new no;
        tempo->key = valor;
        tempo->next = NULL  ;
        if(head == NULL && tail==NULL){
            head = tempo;
            tail = tempo;
        }
        else{
            tail->next = tempo;
            tail = tail->next;
        }
    }

    void printaLista(){
        no* temp = new no;
        temp = head;
        while(temp != NULL) {
            cout << temp->key << '\n';
            temp = temp->next;
        }
    }

    int dequeue(){
        if(head == NULL){
            return 0;
        }
        no *temp = new no();
        temp = head;
        head = head->next;
        int r = temp->key;
        delete(temp);
        return(r);
    }

    void pop(){
        no* current = new no();
        no* previous = new no();
        current = head;
        while(current->next != NULL){
            previous = current;
            current = current->next;
        }
        tail = previous;
        previous->next = NULL;
        delete current;
    }

    void add(int valor){
        no* temp = new no();
        temp->next = NULL;
        temp->key = valor;
        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else {
            temp->next = head;
            head = temp;
        }
    }

    bool empty(){
        if(head == NULL){
            return true;
        }
        else{
            return false;
        }
    }
    int retornaHead(){
        if(head == NULL){
            return 0;
        }
        return head->key;
    }
};

#endif //GITREPO_LISTA_H

//
// Created by guili on 08/03/2018.
//

#include "lista.h"

lista::lista(){
    head = NULL;
    tail = NULL;
}

void lista::push(int valor){
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

void lista::printaLista(){
    no* temp = new no;
    temp = head;
    while(temp != NULL) {
        cout << temp->key << '\n';
        temp = temp->next;
    }
}

int lista::dequeue(){
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

void lista::pop(){
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

void lista::add(int valor){
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

bool lista::empty(){
    if(head == NULL){
        return true;
    }
    else{
        return false;
    }
}
int lista::retornaHead(){
    if(head == NULL){
        return 0;
    }
    return head->key;
}
//
// Created by guili on 11/03/2018.
//

#ifndef ALGORITHMS_AND_DATA_STRUCTURES_AVLTREE_H
#define ALGORITHMS_AND_DATA_STRUCTURES_AVLTREE_H
#include "iostream"
using namespace std;

struct avlNode{
    int key;
    int altura;
    avlNode* esquerda;
    avlNode* direita;
};


class avlTree{
private:
    avlNode* raiz;
public:
    avlTree(){
        raiz = NULL;
    }

    avlNode* root(){
        return raiz;
    }

    avlNode* insert(avlNode* atual, int key){
        if(raiz == NULL){
            atual = new avlNode();
            atual->key = key;
            atual->esquerda = NULL;
            atual->direita = NULL;
            atual->altura = 0;
            raiz = atual;
            return atual;
        }
       else if(atual == NULL){
            atual = new avlNode();
            atual->key = key;
            atual->esquerda = NULL;
            atual->direita = NULL;
            atual->altura = 0;
            return atual;
        }

        else if(atual->key > key){
            atual->esquerda = insert(atual->esquerda, key);
            if(altura(atual->esquerda) - altura(atual->direita) >= 2){
                if(key < atual->esquerda->key){
                    atual = rightRotation(atual);
                }
                else{
                    atual = rightRightRotation(atual);
                }
            }
        }

        else if(atual->key < key){
            atual->direita = insert(atual->direita, key);
            if(altura(atual->direita) - altura(atual->esquerda) >= 2){
                if(key > atual->direita->key){
                    atual = leftRotation(atual);
                }
                else{
                    atual = leftLeftRotation(atual);
                }
            }
        }

        atual->altura = max(altura(atual->direita), altura(atual->esquerda)) + 1;
        return atual;

    }

    int altura(avlNode* x){
        if(x==NULL){
        return 0;
        }
        return x->altura;
    }

    avlNode* leftRotation(avlNode* &t){
        avlNode* u = t->direita;
        t->direita = u->esquerda;
        u->esquerda = t;
        t->altura = max(altura(t->esquerda), altura(t->direita))+1;
        u->altura = max(altura(t->direita), t->altura)+1 ;
        return u;
    }

    avlNode* rightRotation(avlNode* &t){
        avlNode* u = t->esquerda;
        t->esquerda = u->direita;
        u->direita = t;
        t->altura = max(altura(t->esquerda), altura(t->direita))+1;
        u->altura = max(altura(u->esquerda), t->altura)+1;
        return u;
    }

    avlNode* leftLeftRotation(avlNode* &t){
        t->direita = rightRotation(t->direita);
        return leftRotation(t);
    }
    avlNode* rightRightRotation(avlNode* &t){
        t->esquerda = leftRotation(t->esquerda);
        return rightRotation(t);
    }


    void preOrder(avlNode* atual){
        if(atual == NULL){
            return;
        }

        cout << atual->key << endl;
        preOrder(atual->esquerda);
        preOrder(atual->direita);

    }
};

#endif //ALGORITHMS_AND_DATA_STRUCTURES_AVLTREE_H

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

    int max(int a, int b){
        (a > b) ?  a :  b ;
    }

    int altura(avlNode* x){
        if(x==NULL){
            return 0;
        }
        else{
            return x->altura;
        }
    }

    int balance(avlNode* x){
        if(x == NULL){
            return 0;
        }
        //this defines if the positive or negative means left or right big
        return altura(x->esquerda) - altura(x->direita);
    }

    avlNode* newNode(int key){
        avlNode* temp = new avlNode();
        temp->key = key;
        temp->altura = 1;
        temp->esquerda = NULL;
        temp->direita = NULL;
        return temp;
    }

    avlNode* leftRotate(avlNode* x){
        avlNode* rChild = x->direita;
        avlNode* rlChild = rChild->esquerda;

        rChild->esquerda = x;
        x->direita = rlChild;

        x->altura = max(altura(x->direita), altura(x->esquerda)) + 1;
        rChild->altura = max(altura(rChild->direita), altura(rChild->esquerda)) + 1;

        return rChild;
    }

    avlNode* rightRotate(avlNode* x){
        avlNode* lChild = x->esquerda;
        avlNode* lrChild = lChild->direita;

        lChild->direita = x;
        x->esquerda = lrChild;

        x->altura = max(altura(x->direita), altura(x->esquerda));
        lChild->altura = max(altura(lChild->direita), altura(lChild->esquerda));
    }



    avlNode* insert(avlNode* noAtual, int key){
        if(noAtual == NULL){
            return newNode(key);
        }
        else if(noAtual->key < key){
            return insert(noAtual->direita, key);
        }
        else if(noAtual->key > key){
            return insert(noAtual->esquerda, key);
        }

        noAtual->altura = 1 + max(altura(noAtual->esquerda), altura(noAtual->direita));

        int balanceAtual = balance(noAtual);

        //the four cases
        if(balanceAtual > 1 && noAtual->esquerda->key > key){
            return rightRotate(noAtual);
        }
        else if(balanceAtual > 1 && noAtual->esquerda->key < key){
            noAtual->esquerda = leftRotate(noAtual->esquerda);
            return rightRotate(noAtual);
        }
        else if(balanceAtual < -1 && noAtual->direita->key > key){
            return leftRotate(noAtual);
        }
        else if(balanceAtual < -1 && noAtual->direita->key < key){
            noAtual->direita = rightRotate(noAtual->direita);
            return leftRotate(noAtual);
        }
        return noAtual;
    }
    void preOrder(avlNode* percorre){
        if(percorre == NULL){
            return;
        }

        cout << percorre->key << endl;
        preOrder(percorre->esquerda);
        preOrder(percorre->direita);
    }
};

#endif //ALGORITHMS_AND_DATA_STRUCTURES_AVLTREE_H

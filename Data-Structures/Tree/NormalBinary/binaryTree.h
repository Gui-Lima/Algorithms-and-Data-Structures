//
// Created by guili on 08/03/2018.
//

#ifndef GITREPO_BINARYTREE_H
#define GITREPO_BINARYTREE_H


#include "iostream"
using namespace std;

struct treeNode{
    int valor;
    treeNode* esquerda;
    treeNode* direita;
};


class binaryTree {
private:
    treeNode* raiz;

public:
    binaryTree(){
        raiz = NULL;
    }

    int add(int valor){
        treeNode* temp = new treeNode();
        temp->valor = valor;
        temp->esquerda = NULL;
        temp->direita = NULL;
        if(raiz == NULL){
            raiz = temp;
            return raiz->valor;
        }
        else{
            treeNode* percorre = raiz;
            treeNode* parent;
            while(percorre != NULL){
                parent = percorre;
                if(valor > percorre->valor){
                    percorre = percorre->direita;
                }
                else if(valor < percorre->valor){
                    percorre = percorre->esquerda;
                }
                else if(valor == percorre->valor){
                    cout << "voce inseriu um valor que já estava na árvori: "<< valor<<  '\n';
                }
            }

            if(valor > parent->valor){
                parent->direita = temp;
            }
            else{
                parent->esquerda = temp;
            }

            return valor;
        }
    }

    void preOrder(treeNode* reference){
        if(reference == NULL){
            return;
        }

        cout<<reference->valor<<'\n';
        preOrder(reference->esquerda);
        preOrder(reference->direita);
    }

    void postOrder(treeNode* reference){
        if(reference == NULL){
            return;
        }

        postOrder(reference->esquerda);
        postOrder(reference->direita);
        cout<< reference->valor << '\n';
    }

    void inOrder(treeNode* reference){
        if(reference == NULL){
            return;
        }

        inOrder(reference->esquerda);
        cout << reference->valor << '\n';
        inOrder(reference->direita);
    }

    treeNode* root (){
        return raiz;
    }

    bool search(int valor){
        treeNode* temp = raiz;

        while(temp != NULL){
            if(valor > temp->valor){
                temp= temp->direita;
            }
            else if(valor < temp->valor){
                temp = temp->esquerda;
            }
            else if(valor == temp->valor){
                return true;
            }
        }
        return false;
    }

    treeNode* searchForDeletion(int valor){
        treeNode* temp = raiz;
        treeNode* parent;
        while(temp != NULL){
            if(valor > temp->valor){
                parent = temp;
                temp= temp->direita;
            }
            else if(valor < temp->valor){
                parent = temp;
                temp = temp->esquerda;
            }
            else if(valor == temp->valor){
                return parent;
            }
        }
    }

    treeNode* inOrderSucessor(treeNode* temp){
	treeNode* percorre = temp->direita;
	treeNode* parent;
	while(percorre != NULL){
		parent = percorre;
		percorre= percorre->esquerda;
	}
	return parent;
}

    void del(int valor){
        if(valor == raiz->valor){
            treeNode* inOrderSuce = inOrderSucessor(raiz);
            int temporario = inOrderSuce->valor;
            del(inOrderSuce->valor);
            raiz->valor = temporario;
            return;
        }

        treeNode* temp = searchForDeletion(valor);
        treeNode* dele;
        //para saber se oque queremos deletar está a esquerda ou à direita de temp
        if(valor > temp->valor){
            dele = temp->direita;
        }
        else{
            dele=temp->esquerda;
        }

        if(dele->esquerda == NULL && dele->direita ==  NULL){
            if(dele->valor == temp->direita->valor){
                temp->direita = NULL;
                delete(dele);
            }
            else{
                temp->esquerda = NULL;
                delete(dele);
            }
        }

        else if(dele->esquerda != NULL && dele->direita == NULL){
            dele->valor = dele->esquerda->valor;
            dele->esquerda = NULL;
            delete(dele->esquerda);
        }
        else if(dele->esquerda == NULL && dele->direita != NULL){
            dele->valor = dele->direita->valor;
            dele->direita = NULL;
            delete(dele->direita);
        }
        else{
            treeNode* inOrderSuc = inOrderSucessor(dele);
            int aux = inOrderSuc->valor;
            del(inOrderSuc->valor);
            dele->valor = aux;
        }
}


};

#endif //GITREPO_BINARYTREE_H

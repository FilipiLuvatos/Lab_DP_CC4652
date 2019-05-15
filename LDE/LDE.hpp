#include <iostream>
#include "No.hpp"

#ifndef LDE_HPP
#define LDE_HPP

using namespace std;

template <typename T>
class LDE{
    private:
        int n;
        No<T>* primeiro;

    public:
        LDE(): n(0), primeiro(NULL){

        }

        bool insere(T num){
            No<T>* novo = new No<T>(num);
            if(novo == NULL){
                return false;
            }


            No<T>* ant = NULL;
            No<T>* atual = primeiro;

            while(atual && num > atual->num){
                ant = atual;
                atual = atual->prox;
            }

            novo->prox = atual;
            if(ant!=NULL){
                ant->prox = novo;
            }else{
                primeiro = novo;
            }
            n++;
            return true;
        }

        No<T>* busca(int num){
            No<T>* atual = primeiro;
            while (atual && atual -> num < num){
                atual = atual -> prox;
            }

            if(atual && atual -> num == num){
                return atual;
            }
            else{
                return NULL;
            }
        }

        bool deleta(int num){
            No<T>* atual = primeiro;
            No<T>* reserva = primeiro -> prox;

            
            while (atual && reserva -> num < num){ 
                atual = atual -> prox;
                reserva = atual -> prox; 
            }

            if(reserva -> num == num){
                atual -> prox = reserva -> prox;
                delete reserva;
                n = n-1;
                return true;
            }
            else{
                return false;
            }
        }
    void imprime(){
        No<T>* atual = primeiro;
        while(atual){
            cout << atual->num << " | ";
            atual = atual->prox;
        }
        cout << endl;
    }

    virtual ~LDE(){
        No<T>* atual = primeiro;
        No<T>* prox;
        while(atual){
            prox = atual->prox;
            delete atual;
            atual = prox;
        }
    }

};

#endif

#ifndef LDDE_HPP
#define LDDE_HPP
#include <iostream>
#include "no.hpp"

using namespace std;

template <typename T>
class LDDE{
	private:
		No<T>* primeiro;
		No<T>* ultimo;
		int n;
	public:
		LDDE(): primeiro(NULL), ultimo(NULL), n(0){
		
		}
		
		bool insere(T cara){
			No<T>* novo = new No<T>(cara);
			if(!novo)
				return false;
			
			No<T>* ptrAnterior = NULL;
			No<T>* ptrAtual = primeiro;
			
			while(ptrAtual && ptrAtual -> cara < cara){
				ptrAnterior = ptrAtual;
				ptrAtual = ptrAtual -> proximo;
				
			}
			
			novo -> anterior = ptrAnterior;
			if(ptrAnterior){
				ptrAnterior -> proximo = novo;
			}
			else{
				primeiro = novo;
			}
				
			novo -> proximo = ptrAtual;
			if(ptrAtual){
				ptrAtual -> anterior = novo;
			}
			else{
				ultimo = novo;
			}
				
			n++;
			return true;
			
		}
		
		void imprime(){
			No<T>* ptr = primeiro;
			while(ptr){
				cout << ptr -> num << " - ";
				ptr = ptr -> proximo;
			}
			cout << endl;
		}
		
		bool remove(T cara){
			No<T>* ptrAtual = primeiro;
			
			while(ptrAtual && ptrAtual-> cara < cara){
				ptrAtual = ptrAtual -> proximo;
			}
			
			if(!ptrAtual || ptrAtual -> cara != cara){
				return false;
			}
			
			No<T>* ptrAnterior = ptrAtual -> anterior;
			No<T>* ptrProximo = ptrAtual -> proximo;
			
			if(ptrAnterior){
				ptrAnterior -> proximo = ptrProximo;
			}
			else{
				primeiro = ptrProximo;
			}
				
			if(ptrProximo){
				ptrProximo -> anterior = ptrAnterior;
			}
			else{
				ultimo = ptrAnterior;
			}
			
			delete ptrAtual;
			n--;
			return true;	
			
		}
		  No<T>* busca(T cara){
            No<T>* atual = primeiro;
            while (atual && atual -> cara < cara){
                atual = atual -> prox;
            }

            if(atual && atual -> cara == cara){
                return atual;
            }
            else{
                return NULL;
            }
        }

		
};

#endif

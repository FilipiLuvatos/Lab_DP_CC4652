#ifndef NO_HPP
#define NO_HPP

#include <iostream>

template <typename T>
class Arvore;

template <typename T>

class No{
	
	private:
	T  valor;
	No* pai;
	No* dir;
	No* esq;
	public:
		
		No(T valor): valor(valor), pai(NULL), dir(NULL), esq(NULL){

		}
		T getValor(){
			return valor;
		}
		T operator*(){
			return getValor();
		}
		
		friend class Arvore<T>;
		
};

#endif

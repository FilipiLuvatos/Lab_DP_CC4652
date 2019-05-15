#ifndef NO_HPP
#define NO_HPP

#include <iostream>
using namespace std;

template <typename T>
class LDE;

template <typename T>
class No{
    private:
        T num;
        No<T>* prox;
        No(T num): num(num), prox(NULL){

        }
    public:
        T getValor(){
            return num;
        }
        ~No(){

        }

    friend class LDE<T>;

};


#endif

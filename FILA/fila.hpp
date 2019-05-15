#ifndef FILA_HPP
#define FILA_HPP

#define MAX 100

template <typename W>
class Fila{
	private:
		W v[MAX+1];
		int i;
		int f;
		int n;
	public:
		Fila(): i(0), f(0), n(MAX+1){

		}

		bool enfila(W valor){
			if(((f+1)%n) == i)
				return false;

			v[f] = valor;
			f = (f+1)%n;
			return true;
		}

		bool desenfila(W *desenfila=NULL){
			if (i==f)
				return false;


			if(desenfila)
				*desenfila = v[i];
			i = (i+1)%n;
			return true;
		}

};

#endif



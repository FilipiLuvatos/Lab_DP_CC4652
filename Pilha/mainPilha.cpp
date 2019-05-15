#include <iostream>
#include <cstdlib>
#include "pilha.hpp"
using namespace std;

int main(int argc, char** argv) {
	
	Pilha <int> p;
	p.empilha(4);
	p.empilha(8);
	p.empilha(9);
	p.empilha(1);
	p.empilha(0);
	p.desempilha();
	
	int x;
	while(p.desempilha(&x)){
		cout<<x<<endl;
	}
	system("pause");
	return 0;
}

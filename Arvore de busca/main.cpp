#include <iostream>
#include <cstdlib>
#include "No.hpp"
#include "Arvore.hpp"


using namespace std;

int main(int argc, char** argv) {
	Arvore<int>f;
	f.insere(5);
	f.insere(2);
	f.insere(7);
	f.insere(1);
	f.insere(3);
	f.insere(6);
	f.insere(13);
	f.insere(9);
	f.insere(10);
	f.insere(11);
	f.insere(12);
	
	f.erd();
	system("pause");
	return 0;
}

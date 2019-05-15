#include <iostream>
#include<cstdlib>
#include "fila.hpp"

using namespace std;

int main(){
	Fila<int> f;
	f.enfila(1);
	f.enfila(2);
	f.enfila(5);
	f.enfila(8);
	f.enfila(1);
	f.desenfila();
	f.desenfila();
	f.desenfila();
	f.desenfila();

 int temp;
	while(f.desenfila(&temp)){
		cout << temp << endl;
	}
	system("pause");
	return 0;
}

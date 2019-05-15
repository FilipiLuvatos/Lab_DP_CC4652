#include <iostream>
#include "ldde.hpp"
#include <string>
#include <cstdlib>

using namespace std;

int main(){
    LDDE<string> f;
	int i,y;
	string u;
	
 for(i=0;i<100;i++){
        cout<<"1 - Insere  "<<endl;
		 cout<<"2 - Buscar "<<endl;
		 cout<<"3 - Imprimir "<<endl;
		 cout<<"4 - Deletar  "<<endl;
		 cout<<"5 - Sair "<<endl;
		 cin>>y;
		 
		 if(y == 1){
				cout<<"Digite o que deseja inserir: "<<endl;
				cin>>u;
				f.insere(u);
				}
				
		if(y == 2){
			f.insere("rrr");
			//f.busca("rrr");
		}
		if(y == 3 ){
			f.imprime();
		}
		if(y == 4){
			cout<<"Digite o que deseja deletar: "<<endl;
			cin>>u;
			f.remove(u);
		}
		if(y == 5){
			return 0;
		}


}







	system("pause");
	
}

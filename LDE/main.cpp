/* Filipi de Luca Valim dos Santos RA 22216027-7*/

#include <iostream>

#include "LDE.hpp"



int main() {

    LDE<int> l;
    int x,y,i;
    cout<<"Quantos numeros deseja inserir no programa:"<<endl;
    cin>>x;
    for(int i=x;i>=0;i--){
    	l.insere(i);
	}
     for(i=0;i<x;i++) {
     	cout<<"1 - Deletar  "<<endl;
		 cout<<"2 - Buscar "<<endl;
		 cout<<"3 - Imprimir "<<endl;
		 cout<<"4 - Sair "<<endl; 
		 cin>>y;
		 if(y == 1){
		 	cout<<"Digite qual numero deseja excluir: "<<endl;
		 	int t;
		 	cin>>t;
		 	 l.deleta(t);
		 	
		 }
		 if( y == 2){
		 	cout<<"Digite qual numero deseja buscar"<<endl;
		 	int u,j;
		 	cin>>u;
		 	l.busca(u);
           if(l.busca(u) != NULL){

		 	cout<<" Aqui esta: "<<u<<endl;
		 	cout<<"Endereco: " 	<<l.busca(u)<<endl;
			 }
			 else{
					cout<<"Valor nao encontrado ou nao inserido"<<endl;
				}

		 }
		 if(y == 3){
		 	l.imprime();
		 }
		 if(y == 4 ){
		 	return 0;
		 }
	 }  

    
   
    
    l.imprime();


    return 0;
}

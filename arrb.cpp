#include <iostream>
#include <string>
using namespace std;
int main(){
	int tam,tam1;
	cout<<"Ingrese las filas"<<endl;
		cin>>tam;
		cout<<"Ingrese las columnas"<<endl;
	    cin>>tam1;
	string matriz[tam][tam1];
	for (int i=0;i<tam;i++){
		for (int j=0;j<tam1;j++){
			cout<<"Ingrese matriz["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j]; 
		}
	}
	cout<<endl<<"La matriz es"<<endl;
		for (int i=0;i<tam;i++){
			for (int j=0;j<tam1;j++){
				cout<<matriz[i][j]<<" ";
			}
			cout<<endl;
		}
	cout<<"El ultimo dato es :"<<matriz[tam-1][tam-1]<<endl;	
	
}

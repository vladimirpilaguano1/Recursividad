#include <iostream>
using namespace std;

int fibonacci(int n){
	if (n == 0 || n == 1){
		return n;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}

void imprimirSerie(int n){
	if (n < 0){
		return;
	}
	imprimirSerie(n-1);
	cout << fibonacci(n) << "-";
}

int main(){
	imprimirSerie(5);
	return 0;
}

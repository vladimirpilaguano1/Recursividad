#include <iostream>
using namespace std;
	
	void mostrarNormal(int arr[], int indice, int tamano) {
	    if (indice == tamano) {
	        return;
	    }
	    cout << arr[indice] << " ";
	    mostrarNormal(arr, indice + 1, tamano);
	}
	
	void mostrarInverso(int arr[], int indice) {
	    if (indice < 0) {
	        return;
	    }
	    cout << arr[indice] << " ";
	    mostrarInverso(arr, indice - 1);
	}
	int sumarRecursivo(int arr[], int indice, int tamano) {
	    if (indice == tamano) {
	        return 0;
	    }
	    return arr[indice] + sumarRecursivo(arr, indice + 1, tamano);
	}
	int main() {
	    int numeros[] = {10, 20, 30, 40, 50, 60};
	    int totalElementos = 6;
	
	    cout << "Secuencia 1: ";
	    mostrarNormal(numeros, 0 , totalElementos);
	    
	    cout << endl << "Secuencia 2: ";
	    mostrarInverso(numeros, totalElementos - 1);
	    
	    cout << endl;
	    int sumaTotal = sumarRecursivo(numeros, 0, totalElementos);
		    cout << "Suma total de los datos: " << sumaTotal << endl;
	    return 0;
	}
  

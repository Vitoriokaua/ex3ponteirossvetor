#include <iostream>

using namespace std;


// Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.

void ler_vetor(int* v, int tam) {
	for (int i=0;i<tam;i++){
		cout << "informe os nummeros: ";
		cin >> v[i];
		
	}

}

void contar(int* v, int tam) {
	int contador = 0;
	for (int i = 0; i < tam; i++){
		if (v[i] % 2 == 0)
			contador++;


	}

	cout << "o vetor possui " << contador << "numeros pares.";

}


int main() {
    int tam = 10;
	int* vetor = new int[10];


	ler_vetor(vetor, tam);

	contar(vetor, tam);






}
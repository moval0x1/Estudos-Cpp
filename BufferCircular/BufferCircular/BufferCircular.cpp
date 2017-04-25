// BufferCircular.cpp : Defines the entry point for the console application.

// Pegando de biblioteca compartilhada, ex.: "stdafx.h"
// Pegando de biblioteca local, ex.: <vector>
#include "stdafx.h"
// Pra usar vetor
#include <iostream>
// The line using namespace std; tells the compiler to use the std namespace.
using namespace std;

// Cria uma constante com o valor a ser usado no resto do código
const int vectorLengh = 10;
// Cria um vetor de 10 posições
char vector[vectorLengh] = { "123456789" };
// Pointeiro para o vetor
char * pointer;
// Cursor
int cursor = 0;

void SetVector(char valueVector[]) {
	for (int i = 0; i < strlen(valueVector); i++) {
		// Vector[0] = 'z'
		*pointer = valueVector[i];
		// Passa para o próximo item da lista
		pointer++;
		// Atualiza o cursor
		cursor++;
		if (cursor == vectorLengh) {
			// Aponta o ponteiro para o endereço de memória do vector
			pointer = vector;
		}
	}
}

void GetVector() {
	// Imprime o resultado
	cout << "Vector: " << vector;
}

int main() {
	// Aponta o ponteiro para o endereço de memória do vector
	pointer = vector;

	SetVector("charles");
	SetVector("victor1");
	SetVector("1234567");

	GetVector();

	return 0;
}
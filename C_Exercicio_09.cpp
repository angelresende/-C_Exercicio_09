#include <iostream>
#include <clocale> // setlocale
#include <stdlib.h> // system
#include <string.h> // Textos em geral

using namespace std;

int soma(int* ptr);
int Maior(int* ptr);
int Menor(int* ptr);
int media(int* ptr);

int main() {
	setlocale(LC_ALL, "Portuguese");

	int *pVet;

	pVet = new int[5];

	*(pVet + 0) = 10;
	*(pVet + 1) = 20;
	*(pVet + 2) = 30;
	*(pVet + 3) = 40;
	*(pVet + 4) = 50;

	
	cout << "Soma: " << soma(pVet) << endl;
	cout << "Maior: " << Maior(pVet) << endl;
	cout << "Menor: " << Menor(pVet) << endl;
	cout << "Média: " << media(pVet) << endl;

	delete[] pVet;

	system("pause");
	return 0;
}

int soma(int* ptr) {
	int soma = 0;
	soma = *(ptr + 0) + *(ptr + 1) + *(ptr + 2) + *(ptr + 3) + *(ptr + 4);
	return soma;
}

int Maior(int* ptr) {
	int maior, i;
	maior = *ptr;
	
	for (i = 0; i < 5; i++)
	{
		if (*(ptr + (5 - i - 1)) > maior)
		{
			maior = *(ptr + (5 - i - 1));
		}
	}
	return maior;
}

int Menor(int* ptr) {
	int menor, i;
	menor = *ptr;

	for (i = 0; i < 5; i++)
	{
		if (*(ptr + (5 - i - 1)) < menor)
		{
			menor = *(ptr + (5 - i - 1));
		}
	}
	return menor;
}

int media(int* ptr) {
	int media = 0;
	media = (*(ptr + 0) + *(ptr + 1) + *(ptr + 2) + *(ptr + 3) + *(ptr + 4))/5;
	return media;
}
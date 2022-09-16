/*==================================
AUTEUR : Étienne Bayette-Riendeau
PROJET : Lab03(B)1.1
NOM DU FICHIER : main.cpp
DATE : 2022-09-13
DESCRIPTION : convertir un algorithme en c++
==================================*/


#include <iostream>
using namespace std;

int main() {

	// nominations des variables
	int n1;
	int n2;

	// demande a l'utilisateur les valeurs des variables
	cout << "Quelle est la valeur de n1 ?" << endl;
	cin >> n1;
	cout << "Quelle est la valeur de n2 ?" << endl;
	cin >> n2;

	cout << "Le produit des nombres " << n1 << " et " << n2 << " est ";

	// verification si la valeur est nul, positive ou negative
	if (n1 == 0 || n2 == 0) // nul
	{
		cout << "nul";
	} 
	else if ((n1 > 0 && n2 > 0) || (n1 < 0 && n2 < 0)) // positif
	{
		cout << "positif";
	}
	else // negatif
	{
		cout << "megatif";
	}

	system("PAUSE>0");

}
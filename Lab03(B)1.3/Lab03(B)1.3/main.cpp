/*==================================
AUTEUR : Étienne Bayette-Riendeau
PROJET : Lab03(B)1.3
NOM DU FICHIER : main.cpp
DATE : 2022-09-13
DESCRIPTION : convertir un algorithme en c++
==================================*/

#include <iostream>
using namespace std;

int main() {


	// declaration variable

	int age;


	// demande a l'utilisateur la valeur de la variable

	cout << "Quel est votre age ?" << endl;
	cin >> age;


	// verification de l'age

	if (age < 6)
	{
		cout << "Trop jeune!";
	}
	else if (age < 8) 
	{
		cout << "Minime";
	}
	else if (age < 10)
	{
		cout << "Benjamin";
	}
	else if (age < 12)
	{
		cout << "Cadet";
	}
	else if (age < 14)
	{
		cout << "Juvenile";
	}
	else
	{
		cout << "Junior";
	}

	system("PAUSE>0");

}
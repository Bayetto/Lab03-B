/*========================================
AUTEUR : Étienne Bayette-Riendeau
PROJET : Lab03(A)1.2
NOM DU FICHIER : main.cpp
DATE : 2022-09-13
DESCRIPTION : convertir un algorithme en c++
========================================*/


#include <iostream>
using namespace std;

int main() {


	// declaration des variables

	int nbHeures;
	int nbMinutes;
	int nbSecondes;


	// demande a l'utilisateur les valeurs des variables

	cout << "Quelle est le nombre d'heures ?" << endl;
	cin >> nbHeures;
	cout << "Quelle est le nombre de minutes ?" << endl;
	cin >> nbMinutes;
	cout << "Quelle est le nombre de secondes ?" << endl;
	cin >> nbSecondes;

	cout << "Dans une seconde il sera ";

	nbSecondes++; // seconde + 1
	

	// calcule du temps avec une seconde en plus

	if (nbSecondes > 59) 
	{
		nbMinutes++;
		nbSecondes = 0;

		if (nbMinutes > 59) 
		{
			nbHeures++;
			nbMinutes = 0;

			if (nbHeures > 23) 
			{
				nbHeures = 0;
			}
		}
	} 


	// affichage du temps

	cout << nbHeures << ":";
	
	if (nbMinutes < 10)
	{
		cout << "0";
	}

	cout << nbMinutes << ":";

	if (nbSecondes < 10)
	{
		cout << "0";
	}

	cout << nbSecondes;
	
	system("PAUSE>0");

}
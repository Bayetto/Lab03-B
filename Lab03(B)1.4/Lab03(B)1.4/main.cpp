/*==================================
AUTEUR : Étienne Bayette-Riendeau
PROJET : Lab03(B)1.4
NOM DU FICHIER : main.cpp
DATE : 2022-09-13
DESCRIPTION : convertir un algorithme en c++
==================================*/


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main() {


	double prix;
	string rep;
	double TPS(0.05);
	double tps;
	double TVQ(0.09975);
	double tvq;

	cout << "Quelle est le prix de l'article ?" << endl;
	cin >> prix;

	cout << "Est-ce que l'article est taxable ? (OUI/NON)" << endl;
	cin >> rep;

	if (rep == "NON")
	{
		cout << "L'article coute : " << prix <<  "\nTPS : 0 \nTVQ : 0" << "\nVotre total est de :" << prix;
	}
	else
	{
		tps = prix * TPS;

		tvq = (prix + tps) * TVQ;

		cout << fixed;
		cout << "L'article coute : " << prix << "\nTPS : " << setprecision(2) << tps << "\nTVQ : " << tvq << "\nVotre total est de : " << (prix + tps + tvq);
	}

	system("PAUSE>0");

 }
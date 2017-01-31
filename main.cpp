#include <stdio.h>
#include <iostream>
#include <string>
#include "entreprise.h"
#include "employe.h"
#include "commercial.h"
#include "technicien.h"

using namesapce std;

int main()
{
	cout << "Société : " << Entreprise::getNom() << "\n" << endl;
	cout << "Vendeurs : " << Entreprise::getVendeur() << "\n" << endl;
	cout << "Représentants : " << Entreprise::getRepresentant() << "\n" << endl;
	cout << "Techniciens : " << Entreprise::getTechnicien() << "\n" << endl;
	cout << "Intérimaires : " << Entreprise::getInterimaire() << "\n" << endl;
	cout << "Les salaires des employés ce mois ci sont :\n" << endl;
	cout << "Salaire de Paul : " << Paul::calculSalaire() << "\n" << endl;
	cout << "Salaire de Pierre : " << Pierre::calculSalaire() << "\n" << endl;
	cout << "Salaire de Jacques : " << Jacques::calculSalaire() << "\n" << endl;
	cout << "Salaire de Rachel : " << Rachel::calculSalaire() << "\n" << endl;
	cout << "Salaire de Rémi : " << Remi::calculSalaire() << "\n" << endl;
	cout << "Salaire de Idris : " << Idris::calculSalaire() << "\n" << endl;
	cout << "Salaire de Issac : " << Isaac::calculSalaire() << "\n" << endl;
	cout << "Salaire de Irène : " << Irene::calculSalaire() << "\n" << endl;
	cout << "Salaire de Igor : " << Igor::calculSalaire() << "\n" << endl;
}








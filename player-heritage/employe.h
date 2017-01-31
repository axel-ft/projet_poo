#ifndef DEF_EMPLOYE
#define DEF_EMPLOYE

#include <string>
#include "entreprise.h"
use namespace std;

class Employe : public Entreprise
{
	public:
		Employe();
		Employe(string nom, string prenom, int age);

		string getName() const; //Afficher nom
		void setName(string newName); //Modifier nom
		void delName() const; //Supprimer nom

		string getFName() const; //Afficher prénom
		void setFName(string newFName); //Modifier prénom
		void delFName() const; //Supprimer prénom

		int getAge() const; //Afficher age
		void setAge(int newAge); //Modifier age
		void delAge() const; //Supprimer age

	private:
		string name;
		string fName;
		int age;
		double salaire;
};

#endif

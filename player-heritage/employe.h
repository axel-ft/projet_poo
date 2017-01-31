#ifndef DEF_EMPLOYE
#define DEF_EMPLOYE

#include <string>
#include "entreprise.h"
use namespace std;

class Employe
{
	public:
		Employe();
		Employe(string nom, string prenom, int age);

		void setName(string newName); //Ajout nom
		void addName(string newName); //Modifier nom
		void delName() const; //Supprimer nom

		void setFName(string newFName); //Ajout prénom
		void addFName(string newFName); //Modifier prénom
		void delFName() const; //Supprimer prénom

		void setAge(int newAge); //Ajout age
		void addAge(int newAge); //Modifier age
		void delAge() const; //Supprimer age

		std::string getName() const; //Afficher nom
		std::string getFName() const; //Afficher prénom
		int getAge() const; //Afficher age

		double calculSalaire();

	private:
		string name;
		string fName;
		int age;
		double salaire;
};

#endif

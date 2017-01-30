#ifndef DEF_EMPLOYE
#define DEF_EMPLOYE

#include <string>

class Employe
{
	public:
		Employe();
		Employe(std::string nom, std::string prenom, int age);

		void setName(std::string newName); //Ajout nom
		void addName(std::string newName); //Modifier nom
		void delName() const; //Supprimer nom

		void setFName(std::string newFName); //Ajout prénom
		void addFName(std::string newFName); //Modifier prénom
		void delFName() const; //Supprimer prénom

		void setAge(int newAge); //Ajout age
		void addAge(int newAge); //Modifier age
		void delAge() const; //Supprimer age

		std::string getName() const; //Afficher nom
		std::string getFName() const; //Afficher prénom
		int getAge() const; //Afficher age

		double calculSalaire();

	private:
		std::string name;
		std::string fName;
		int age;
		double salaire;
};

#endif

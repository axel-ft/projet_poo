#ifndef DEF_EMPLOYE
#define DEF_EMPLOYE

#include <string>
#include "entreprise.h"
using namespace std;

class Employe : public Entreprise
{
	public:
		Employe();
		Employe(std::string setName, std::string setFName, int setAge);

		string getName() const; //Afficher nom
		void setName(string newName); //Modifier nom

		string getFName() const; //Afficher prénom
		void setFName(string newFName); //Modifier prénom

		int getAge() const; //Afficher age
		void setAge(int newAge); //Modifier age

	private:
		string name;
		string fName;
		int age;
		double salaire;
};

#endif

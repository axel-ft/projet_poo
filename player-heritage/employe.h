#ifndef DEF_EMPLOYE
#define DEF_EMPLOYE

#include <string>
using namespace std;

class Employe {
    public:
        Employe();
        Employe(std::string name, std::string fName, int Age);

        string getName() const; //Afficher nom
        void setName(string name); //Modifier nom

        string getFName() const; //Afficher prénom
        void setFName(string fName); //Modifier prénom

        int getAge() const; //Afficher age
        void setAge(int age); //Modifier age

        int getSalaire() const; //Afficher salaire
        void setSalaire(double salaire); //Modifier salaire

        int getSalaireDeBase() const; //Afficher salaire de base
        void setSalaireDeBase(int salaireDeBase); //Modifier salaire de base

        double calculSalaire();

    private:
        string m_name;
        string m_fName;
        int m_age;
        int m_salaireDeBase;

    protected:
        double m_salaire;
};

#endif

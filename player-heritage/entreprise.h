#ifndef DEF_ENTREPRISE
#define DEF_ENTREPRISE

#include <stdio.h>
#include <string>
using namespace std;

class Entreprise {
    public:
        Entreprise();
        Entreprise(string nom, string vendeur, string representant, string technicien, string interimaire);

        string getName() const; //Afficher nom
        void setName(string newName); //Modifier nom

        string getVendeur(int id = -1) const; //Afficher vendeur
        void setVendeur(string newName, int id = -1); //Modifier vendeur

        string getRepresentant(int id = -1) const; //Afficher representant
        void setRepresentant(string newName, int id = -1); //Modifier representant

        string setTechnicien(int id = -1) const; //Afficher technicien
        void setTechnicien(string newTechnicien, int id = -1); //Modifier technicien

        string getInterimaire(int id = -1) const; //Afficher interimaire
        void setInterimaire(string newInterimaire, int id = -1); //Modifier interimaire

        double calculSalaire();

    private:
        string nom,
               vendeur[5],
               representant[2],
               technicien[3],
               interimaire[5];


};

#endif

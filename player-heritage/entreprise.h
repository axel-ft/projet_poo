#ifndef DEF_ENTREPRISE
#define DEF_ENTREPRISE

#include <stdio.h>
#include <string>
use namespace std;

class Entreprise {
    public:
        Entreprise();
        Entreprise(string nom, string vendeur, string representant, string technicien, string interimaire);

        string getName() const; //Afficher nom
        void setName(string newName); //Modifier nom
        void delName() const; //Supprimer nom

        string getVendeur(int id = NULL) const; //Afficher vendeur
        void setVendeur(string newName, int id = NULL); //Modifier vendeur
        void delVendeur(int id) const; //Supprimer vendeur

        string getRepresentant(int id = NULL) const; //Afficher representant
        void setRepresentant(string newName, int id = NULL); //Modifier representant
        void delRepresentant(int id) const; //Supprimer representant

        string setTechnicien(int id = NULL) const; //Afficher technicien
        void setTechnicien(int id, string newTechnicien); //Modifier technicien
        void delName(int id) const; //Supprimer technicien

        string getInterimaire(int id = NULL) const; //Afficher interimaire
        void setInterimaire(string newInterimaire, int id = NULL); //Modifier interimaire
        void delInterimaire(int id) const; //Supprimer interimaire

        double calculSalaire();

    private:
        string nom,
               vendeur[5],
               representant[2],
               technicien[3],
               interimaire[5];


};

#endif

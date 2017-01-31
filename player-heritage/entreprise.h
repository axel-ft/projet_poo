#ifndef DEF_ENTREPRISE
#define DEF_ENTREPRISE

#include <stdio.h>
#include <string>
#include "employe.h"
#include "commercial.h"
#include "technicien.h"
using namespace std;

class Entreprise {
    public:
        Entreprise();
        Entreprise(string nom, string vendeur, string representant, string technicien, string interimaire);

        string getNom() const; //Afficher nom
        void setNom(string nom); //Modifier nom

        Vendeur getVendeur(int id = -1) const; //Afficher vendeur
        void setVendeur(Vendeur vendeur, int id = -1); //Modifier vendeur

        Representant getRepresentant(int id = -1) const; //Afficher representant
        void setRepresentant(Representant representant, int id = -1); //Modifier representant

        Technicien getTechnicien(int id = -1) const; //Afficher technicien
        void setTechnicien(Technicien technicien, int id = -1); //Modifier technicien

        Interimaire getInterimaire(int id = -1) const; //Afficher interimaire
        void setInterimaire(Interimaire interimaire, int id = -1); //Modifier interimaire

    private:
        string m_nom;
        Vendeur m_vendeur[5];
        Representant m_representant[2];
        Technicien m_technicien[3];
        Interimaire m_interimaire[5];
};

#endif

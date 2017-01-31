#ifndef DEF_TECHNICIEN
#define DEF_TECHNICIEN

#define SALAIRE_HORAIRE 24.5

#include <string>
#include "employe.h"

class Technicien : public Employe {
    public:
        Technicien();
        Technicien(std::string name, std::string fName, int Age);
        double calculSalaire();
};

class Interimaire : public Technicien {
    public:
        Interimaire();
        Interimaire(std::string name, std::string fName, int Age);
        
        int getNbHeures();
        void setNbHeures(int nbHeures);

        double calculSalaire();

    private:
        int m_nbHeures;
};

#endif

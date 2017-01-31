#ifndef DEF_TECHNICIEN
#define DEF_TECHNICIEN

#define SALAIRE_HORAIRE 24.5

#include <string>
#include "employe.h"

class Technicien : public Employe {
    public:
        Technicien();
};

class Interimaire : public Technicien {
    public:
        Interimaire();
        
        int getNbHeures();
        void setNbHeures(int nbHeures);

    private:
        int m_nbHeures;
};

#endif

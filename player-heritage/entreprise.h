#ifndef DEF_ENTREPRISE
#define DEF_ENTREPRISE

#include <stdio>
#include <string>
use namespace std;

class Entreprise {
    public:
        Entreprise();
        Entreprise(string nom, string vendeur, string representant, string technicien, string interimaire);

    private:
        string nom,
               vendeur,
               representant,
               technicien,
               interimaire;


};

#endif

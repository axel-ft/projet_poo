#include <stdio.h>
#include <iostream>
#include <string>
#include "entreprise.h"
#include "employe.h"
#include "commercial.h"
#include "technicien.h"

using namespace std;

int main()
{
    Entreprise Test;

    Vendeur Paul("Paul", "Paul", 23);
    Vendeur Pierre("Rocher", "Pierre", 32); 
    Vendeur Jacques("Chirac", "Jacques", 110); 
    Representant Rachel("Grin", "Rachel", 42); 
    Representant Remi("Gaillard", "Rémi", 27);
    Interimaire Isaac("Newton", "Isaac", 400); 
    Interimaire Idris("Elba", "Idris", 12); 
    Interimaire Irene("Jacob", "Irene", 37); 
    Interimaire Igor("Gautesman", "Igor", 53); 

    cout << "Société : " << Test.getNom() << "\n" << endl;
    cout << "Vendeurs : " << Test.getVendeur(0).getFName() << "\n" << endl;
    cout << "Représentants : " << Test.getRepresentant(0).getFName() << "\n" << endl;
    cout << "Techniciens : " << Test.getTechnicien(0).getFName() << "\n" << endl;
    cout << "Intérimaires : " << Test.getInterimaire(0).getFName() << "\n" << endl;
    cout << "Les salaires des employés ce mois ci sont :\n" << endl;
    cout << "Salaire de Paul : " << Paul.calculSalaire() << "\n" << endl;
    cout << "Salaire de Pierre : " << Pierre.calculSalaire() << "\n" << endl;
    cout << "Salaire de Jacques : " << Jacques.calculSalaire() << "\n" << endl;
    cout << "Salaire de Rachel : " << Rachel.calculSalaire() << "\n" << endl;
    cout << "Salaire de Rémi : " << Remi.calculSalaire() << "\n" << endl;
    cout << "Salaire de Idris : " << Idris.calculSalaire() << "\n" << endl;
    cout << "Salaire de Isaac : " << Isaac.calculSalaire() << "\n" << endl;
    cout << "Salaire de Irène : " << Irene.calculSalaire() << "\n" << endl;
    cout << "Salaire de Igor : " << Igor.calculSalaire() << "\n" << endl;
}








#include <stdio.h>
#include <string>
#include "entreprise.h"
using namespace std;

Entreprise::Entreprise() {

}
Entreprise::Entreprise(string nom, string vendeur, string representant, string technicien, string interimaire) {

}

string Entreprise::getName() const {
    return nom;
}
void Entreprise::setName(string newName) {

}

string Entreprise::getVendeur(int id) const {
    return vendeur[id];
}
void Entreprise::setVendeur(string newName, int id){

}

string Entreprise::getRepresentant(int id) const {
    return representant[id];
}
void Entreprise::setRepresentant(string newName, int id) {

}

string Entreprise::setTechnicien(int id) const {
    return technicien[id];
}
void Entreprise::setTechnicien(string newTechnicien, int id) {

}

string Entreprise::getInterimaire(int id) const {
    return interimaire[id];
}
void Entreprise::setInterimaire(string newInterimaire, int id) {

}

double Entreprise::calculSalaire() {
    double salaire;
    return salaire;
}

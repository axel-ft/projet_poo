#include <stdio.h>
#include <iostream>
#include <string>
#include "entreprise.h"
#include "commercial.h"
using namespace std;

Entreprise::Entreprise() {

}

Entreprise::Entreprise(string nom, string vendeur, string representant, string technicien, string interimaire) {

}

string Entreprise::getNom() const {
    return m_nom;
}

void Entreprise::setNom(string nom) {
    m_nom = nom;
}

Vendeur Entreprise::getVendeur(int id) const {
    if (id >= 0) {
        return m_vendeur[id];
    }
}

void Entreprise::setVendeur(Vendeur vendeur, int id) {
    if (id >= 0) {
        m_vendeur[id] = vendeur;
    }
}

Representant Entreprise::getRepresentant(int id) const {
    if (id >= 0) {
        return m_representant[id];
    }
}

void Entreprise::setRepresentant(Representant representant, int id) {
    if (id >= 0) {
        m_representant[id] = representant;
    }
}

Technicien Entreprise::getTechnicien(int id) const {
    if (id >= 0) {
        return m_technicien[id];
    }
}

void Entreprise::setTechnicien(Technicien technicien, int id) {
    if (id >= 0) {
        m_technicien[id] = technicien;
    }
}

Interimaire Entreprise::getInterimaire(int id) const {
    if (id >= 0) {
        return m_interimaire[id];
    }
}

void Entreprise::setInterimaire(Interimaire interimaire, int id) {
    if (id >= 0) {
        m_interimaire[id] = interimaire;
    }
}

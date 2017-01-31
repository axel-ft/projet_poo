#include <stdio.h>
#include <iostream>
#include <string>
#include "employe.h"
#include "technicien.h"

Technicien::Technicien() {
    setSalaire(2000);
}

double Technicien::calculSalaire() {
    m_salaire = 2000;
    return m_salaire;
}

Interimaire::Interimaire() {

}

int Interimaire::getNbHeures() {
    return m_nbHeures;
}

void Interimaire::setNbHeures(int nbHeures) {
    m_nbHeures = nbHeures;
}

double Interimaire::calculSalaire() {
    m_salaire = m_nbHeures * SALAIRE_HORAIRE;
    return m_salaire;
}

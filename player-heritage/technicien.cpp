#include <stdio.h>
#include <iostream>
#include <string>
#include "employe.h"
#include "technicien.h"

Technicien::Technicien() {
    setSalaire(2000);
}

Interimaire::Interimaire() {

}

int Interimaire::getNbHeures() {
    return m_nbHeures;
}

void Interimaire::setNbHeures(int nbHeures) {
    m_nbHeures = nbHeures;
}

#include <stdio.h>
#include <iostream>
#include <string>
#include "employe.h"
#include "commercial.h"

Commercial::Commercial() {
    setSalaire(2500);
}

int Commercial::getNombreDePrimes() {
    return m_nombreDePrimes;
}

void Commercial::setNombreDePrimes(int nombreDePrimes) {
    m_nombreDePrimes = nombreDePrimes;
}

int Commercial::getPrime() {
    return m_prime;
}

void Commercial::setPrime(int prime) {
    m_prime = prime;
}


Vendeur::Vendeur() {
    setPrime(100);
}


Representant::Representant() {
    setPrime(250);
    setFraisParDeplacement(50);
}

int Representant::getFraisParDeplacement() {
    return m_fraisParDeplacement;
}

void Representant::setFraisParDeplacement(int fraisParDeplacement) {
    m_fraisParDeplacement = fraisParDeplacement;
}

int Representant::getNombreDeDeplacements() {
    return m_nombreDeDeplacements;
}

void Representant::setNombreDeDeplacements(int nombreDeDeplacements) {
    m_nombreDeDeplacements = nombreDeDeplacements;
}

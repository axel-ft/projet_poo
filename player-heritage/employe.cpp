#include <stdio.h>
#include <iostream>
#include <string>
#include "entreprise.h"
#include "employe.h"
using namespace std;

Employe::Employe() {
    string name, fName;
    int age;
    cout << "Entrez un nom : ";
    cin >> name;
    m_name = name;
    cout << endl;
    cout << "Entrez un prénom : ";
    cin >> fName;
    m_fName = fName;
    cout << endl;
    cout << "Entrez un age : ";
    cin >> age;
    m_age = age;
    cout << endl;
}

Employe::Employe(std::string name, std::string fName, int age) {
    m_name = name;
    m_fName = fName;
    m_age = age;
}

string Employe::getName() const {
    return m_name;
}

void Employe::setName(string name) {
    m_name = name;
}

string Employe::getFName() const {
    return m_fName;
}

void Employe::setFName(string fName) {
    m_fName = fName;
}

int Employe::getAge() const {
    return m_age;
}

void Employe::setAge(int age) {
    m_age = age;
}

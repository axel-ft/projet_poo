#include <stdio.h>
#include <iostream>
#include <string>
#include "entreprise.h"
#include "employe.h"
using namespace std;

Employe::Employe() {
    string setName, setFName;
    int setAge;
    cout << "Entrez un nom : ";
    cin >> setName;
    name = setName;
    cout << endl;
    cout << "Entrez un prénom : ";
    cin >> setFName;
    fName = setFName;
    cout << endl;
    cout << "Entrez un age : ";
    cin >> setAge;
    age = setAge;
    cout << endl;
}
Employe::Employe(std::string setName, std::string setFName, int setAge) {
    name = setName;
    fName = setFName;
    age = setAge;
}

string Employe::getName() const {
    return name;
}
void Employe::setName(string newName) {
    name = newName;
}

string Employe::getFName() const {
    return fName;
}
void Employe::setFName(string newFName) {
    fName = newFName;
}

int Employe::getAge() const {
    return age;
}
void Employe::setAge(int newAge) {
    age = newAge;
}

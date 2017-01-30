#ifndef DEF_TECHNICIEN
#define DEF_TECHNICIEN

#include <string>
#include "employe.h"

class Technicien : public Employe {
	public:

	private:
};

class Salarie : public Technicien {
	public:
		double getSalaire();


	private:
		salaire = 2000;
};

class Interimaire : public Technicien {
	public:

	private:
		salaire = 24.5;
		int nbHeures;
};

#endif

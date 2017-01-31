#ifndef DEF_TECHNICIEN
#define DEF_TECHNICIEN

#define SALAIRE_HORAIRE 24.5

#include <string>
#include "employe.h"

class Technicien : public Employe {
	public:
        Technicien();

	private:
        salaire = 2000;
};

class Interimaire : public Technicien {
	public:
        Interimaire();

	private:
		int nbHeures;
        salaire = NULL;
};

#endif

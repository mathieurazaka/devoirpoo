#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <string>
#include "Personne.h"
#include "Etablissement.h"

using namespace std;

class Etudiant : public Personne , Etablissement
{
	//Attribut d'un etudiant
	string niveau;
	
	//Methode d'un etudiant
	public:
		Etudiant();
		void SetLevel(string levelOfStudent);
		
		string GetLevel();
		
		void DisplayOfStudent();
		~Etudiant();
};

#endif

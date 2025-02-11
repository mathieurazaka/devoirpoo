#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H
#include "Personne.h"
#include <string>
#include "Etablissement.h"

using namespace std;

class Enseignant : public Personne , Etablissement
{
	//Attribut d'un enseignant
	string matiere;
	
	//Methode d'un enseignant
	public:
		Enseignant();
		void SetMatter(string matter);
		
		string GetMatter();
		
		void DisplayOfTeacher();
		~Enseignant();
};

#endif
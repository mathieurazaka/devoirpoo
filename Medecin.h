#ifndef MEDECIN_H
#define MEDECIN_H
#include <string>
#include "Personne.h"
#include "Hopital.h"

using namespace std;

class Medecin : public Personne , Hopital
{
	//Attribut d'un medecin
	string specialitee;
	
	//Methode d'un medecin
	public:
		Medecin();
		void SetSpecialty(string specialtyOfDoctor);
		
		string GetSepcialty();
		
		void DisplayOfDoctor();
		~Medecin();
};

#endif
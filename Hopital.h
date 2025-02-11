#ifndef HOPITAL_H
#define HOPITAL_H
#include <iostream>
#include <string>
#include "Etablissement.h"

using namespace std;

class Hopital : public Etablissement 
{
	//Attribut d'un hopital
	string TypeHopital;
	
	//Methode d'un hopital
	public:
		Hopital();
		void SetTypeOfHospital(string TypeOfHospital);
		
		string GetTypeOfHospital();
		
		void DisplayOfHospital();
		~Hopital();
};

#endif

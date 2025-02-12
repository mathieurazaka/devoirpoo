#ifndef ETABLISSEMENT_H
#define ETABLISSEMENT_H
#include <string>

using namespace std;

class Etablissement
{
	//Attribut d'un etablissement
	string nomEtablissement;
	string lieuEtablissement;
	
	//Methode d'un etablissement
	public :
		Etablissement();
		void SetNameOfEtablishment(string nameOfEtablishment);
		void SetPlaceOfEtablishment(string placeOfEtablishment);
		
		string GetNameOfEtablishment();
		string GetPlaceOfEtablishment();
		
		void DisplayOfEtablishment();
		~Etablissement();
};

#endif

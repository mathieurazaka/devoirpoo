#include <iostream>
#include <string>
#include "Etablissement.h"

using namespace std;

void Etablissement::SetNameOfEtablishment(string nameOfEtablishment)
{
	nomEtablissement = nameOfEtablishment;
}

void Etablissement::SetPlaceOfEtablishment(string placeOfEtablishment)
{
	lieuEtablissement = placeOfEtablishment;
}
		
string Etablissement::GetNameOfEtablishment()
{
	return nomEtablissement;
}

string Etablissement::GetPlaceOfEtablishment()
{
	return lieuEtablissement;
}
		
void Etablissement::DisplayOfEtablishment()
{
	Infrastructure::DisplayOfInfrastructure();
	cout << "Votre etablissement s'appel : " << nomEtablissement << " et il se trouve a " << lieuEtablissement << endl;
}

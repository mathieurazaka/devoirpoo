#include <iostream>
#include <string>
#include "Hopital.h"

using namespace std;

Hopital::Hopital()
{
}

void Hopital::SetTypeOfHospital(string TypeOfHospital)
{
	TypeHopital = TypeOfHospital;
}
		
string Hopital::GetTypeOfHospital()
{
	return TypeHopital;
}
		
void Hopital::DisplayOfHospital()
{
	Etablissement::DisplayOfEtablishment();
	cout << "L'hopital est " << TypeHopital <<endl;
}

Hopital::~Hopital()
{
}

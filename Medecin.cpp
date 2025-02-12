#include <iostream>
#include "Medecin.h"

using namespace std;

Medecin::Medecin()
{
}

void Medecin::SetSpecialty(string specialtyOfDoctor)
{
	specialitee = specialtyOfDoctor;
}
		
string Medecin::GetSepcialty()
{
	return specialitee;
}
		
void Medecin::DisplayOfDoctor()
{
	Personne::DisplayOfPerson();
	Hopital::DisplayOfEtablishment();
	cout << "Votre specialitee est " << specialitee << endl;
}

Medecin::~Medecin()
{
}

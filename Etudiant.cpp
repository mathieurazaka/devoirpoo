#include <iostream>
#include <string>
#include "Etudiant.h"

using namespace std;

Etudiant::Etudiant()
{
}

void Etudiant::SetLevel(string levelOfStudent)
{
	niveau = levelOfStudent;
}
		
string Etudiant::GetLevel()
{
	return niveau;
}
		
void Etudiant::DisplayOfStudent()
{
	Personne::DisplayOfPerson();
	cout << "Vous etez en " << niveau << endl;
	Etablissement::DisplayOfEtablishment();
}

Etudiant::~Etudiant()
{
}

#include <iostream>
#include <string>
#include "Enseignant.h"

using namespace std;

Enseignant::Enseignant()
{
}

void Enseignant::SetMatter(string matter)
{
	matiere = matter;
}
		
string Enseignant::GetMatter()
{
	return matiere;
}
		
void Enseignant::DisplayOfTeacher()
{
	Personne::DisplayOfPerson();
	cout << "Votre matiere est " << matiere <<endl;
}

Enseignant::~Enseignant()
{
}

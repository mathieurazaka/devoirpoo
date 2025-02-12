#include <iostream>
#include <string>
#include "Personne.h"

using namespace std;

Personne::Personne()
{
}

void Personne::SetName(string name)
{
	nom = name;
}

void Personne::SetFirstName(string firstname)
{
	prenom = firstname;
}

void Personne::SetYear(int year)
{
	age = year;
}

void Personne::SetGender(string gender)
{
	genre = gender;
}

string Personne::GetName()
{
	return nom;
}

string Personne::GetFirstName()
{
	return prenom;
}

int Personne::GetYear()
{
	return age;
}

string Personne::GetGender()
{
	return genre;
}

void Personne::DisplayOfPerson()
{
	cout << "Votre nom  est " << nom << endl;
	cout << "Votre prenom  est " << prenom << endl;
	cout << "Votre age  est " << age << endl;
	cout << "Votre sexe  est " << genre << endl;
}

Personne::~Personne()
{
}

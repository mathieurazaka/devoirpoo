#include <iostream>
#include <string>
#include "Infrastructure.h"

void Infrastructure::SetNameOfInfrastructure(string nameOfInfrastructure)
{
	nomInfrastructure = nameOfInfrastructure;
}

void Infrastructure::SetPlaceOfInfrastructure(string placeOfInfrastructure)
{
	lieuInfrastructure = placeOfInfrastructure;
}

string Infrastructure::GetNameOfInfrastructure()
{
	return nomInfrastructure;
}

string Infrastructure::GetPlaceOfInfrastructure()
{
	return lieuInfrastructure;
}

void Infrastructure::DisplayOfInfrastructure()
{
	cout << "Le nom de l'infrastructure est "  << nomInfrastructure << " et il se trouve a " << lieuInfrastructure << endl;
}

#ifndef INFRASTRUCTURE_H
#define INFRASTRUCTURE_H
#include <string>
using namespace std;

class Infrastructure
{
	//Attribut d'infrastructure
	string nomInfrastructure;
	string lieuInfrastructure;
	
	//Methode d'infrastructure
	public:
		Infrastructure();
		void SetNameOfInfrastructure(string nameOfInfrastructure);
		void SetPlaceOfInfrastructure(string placeOfInfrastructure);
		
		string GetNameOfInfrastructure();
		string GetPlaceOfInfrastructure();
		
		void DisplayOfInfrastructure();
		~Infrastructure();
};

#endif

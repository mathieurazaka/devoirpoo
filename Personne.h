#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>
using namespace std;

class Personne
{
	//Attribut de personne
	string nom;
	string prenom;
	int age;
	string genre;
	
	//Methode de personne 
	public:
		Personne();
		void SetName(string name);
		void SetFirstName(string firstname);
		void SetYear(int year);
		void SetGender(string gender);
		
		string GetName();
		string GetFirstName();
		int GetYear();
		string GetGender();
		
		void DisplayOfPerson();
		~Personne();
};

#endif
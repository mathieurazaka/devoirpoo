#include <string>
#include "Personne.h"
#include "Infrastructure.h"
#include "Etablissement.h"
#include "Enseignant.h"
#include "Etudiant.h"
#include "Hopital.h"
#include "Medecin.h"

using namespace std;

int main ()
{
	string nom,prenom,sexe,NomDuLieu,Lieu;
	int age;
	
	Personne p;
	p.SetName("RAZAKANIRINA");
	nom = p.GetName();
	p.SetFirstName("Andrianina Mathieu");
	prenom = p.GetFirstName();
	p.SetYear(19);
	age = p.GetYear();
	p.SetGender("Masculin");
	sexe = p.GetGender();

	Etablissement ecole;
	ecole.SetNameOfEtablishment("Universite MIT");
	NomDuLieu = ecole.GetNameOfEtablishment();
	ecole.SetPlaceOfEtablishment("Ankantso");
	Lieu = ecole.GetPlaceOfEtablishment();

	Etudiant eleve;
	eleve.SetName(nom);
	eleve.SetFirstName(prenom);
	eleve.SetYear(age);
	eleve.SetGender(sexe);
	eleve.SetLevel("L2");

	Enseignant prof;
	prof.SetName("RABEKOTOLINA");
	nom = prof.GetName();
	prof.SetFirstName("Sylvia");
	prenom = prof.GetFirstName();
	prof.SetYear(45);
	age = prof.GetYear();
	prof.SetGender("Feminin");
	sexe = prof.GetGender();
	prof.SetMatter("SVT");

	Hopital HJRA;
	HJRA.SetNameOfEtablishment("Hopital Joseph Ravoahangy Andrianavalona");
	HJRA.SetPlaceOfEtablishment("Anosy");
	HJRA.SetTypeOfHospital("Public");

	Medecin psycologue;
	psycologue.SetName(nom);
	psycologue.SetFirstName(prenom);
	psycologue.SetYear(age);
	psycologue.SetGender(sexe);
	psycologue.SetSpecialty("psycologue");

	p.DisplayOfPerson();
	ecole.DisplayOfEtablishment();
	eleve.DisplayOfStudent();
	prof.DisplayOfTeacher();
	HJRA.DisplayOfHospital();
	psycologue.DisplayOfDoctor();
	return (0);
}

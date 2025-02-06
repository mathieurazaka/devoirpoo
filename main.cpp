#include "rationnel.h"

using namespace std;
int main ()
{
    int num1,denom1,num2,denom2;
    
    num1 = GetNum();
    denom1 = GetDen();
    num2 = GetNum();
    denom2 = GetDen();

    rationnel r1;
    r1.Setnumerateur(num1);
    r1.Setdenominateur(denom1);

    rationnel r2;
    r2.Setnumerateur(num2);
    r2.Setdenominateur(denom2);

    
    rationnel somme = r1.somme(r2);
    rationnel soustraction = r1.soustraction(r2);
    rationnel multiplication = r1.produit(r2);
    rationnel division = r1.division(r2);


    r1.display("Le rationnel 1");
    r2.display("Le rationnel 2");
    somme.display("La somme ");
    soustraction.display("La soutraction ");
    multiplication.display("La multiplication ");
    division.display("La division ");
    return(0);
}
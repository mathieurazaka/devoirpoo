#include <iostream>
#include <string>
#include "rationnel.h"

using namespace std;

rationnel::rationnel()
{
}

rationnel::~rationnel()
{
}

int rationnel::Getnumerateur()
{
    return numerateur; 
}

int rationnel::Getdenominateur()
{
    return denominateur; 
}

void rationnel::Setnumerateur(int num)
{
    numerateur = num;
}

void rationnel::Setdenominateur(int den)
{
    denominateur = den;
}

int GetNum()
{
    int num;
    cout << "Entrer le numerateur : " ;
    cin >> num;
    return num;
}

int GetDen()
{
    int den;
    do
    {
        cout << "Entrer le denominateur : " ;
        cin >> den;
    } while (den == 0);
    return den;
}

rationnel rationnel::somme(rationnel rat2)
{
    int num ,den;
    rationnel rat;
    if (denominateur != rat2.denominateur)
    {
        num = numerateur * rat2.denominateur + rat2.numerateur * denominateur;
        den = denominateur * rat2.numerateur;
    }
    else
    {
        num = numerateur + rat2.numerateur;
        den = denominateur;
    }
    rat.Setnumerateur(num);
    rat.Setdenominateur(den);
    return rat;
}

rationnel rationnel::soustraction(rationnel rat2)
{
    int num ,den;
    rationnel rat;
    if (denominateur != rat2.denominateur)
    {
        num = numerateur * rat2.denominateur - rat2.numerateur * denominateur;
        den = denominateur * rat2.numerateur;
    }
    else
    {
        num = numerateur - rat2.numerateur;
        den = denominateur;
    }
    if (num == 0)
        den = 0;
    rat.Setnumerateur(num);
    rat.Setdenominateur(den);
    return rat;
}

rationnel rationnel::produit(rationnel rat2)
{
    int num,den;
    rationnel rat;
    num = numerateur * rat2.numerateur;
    den = denominateur * rat2.denominateur;
    rat.Setnumerateur(num);
    rat.Setdenominateur(den);
    return rat;
}

rationnel rationnel::division(rationnel rat2)
{
    int num,den;
    rationnel rat;
    num = numerateur * rat2.denominateur;
    den = denominateur * rat2.numerateur;
    rat.Setnumerateur(num);
    rat.Setdenominateur(den);
    return rat;
}

void rationnel::display(string TYPE)
{
    cout << TYPE << " est de \n" << numerateur << " / " << denominateur << endl; 
}
#include <iostream>
#include"complexe.h"
using namespace std;

complexe::complexe()
{
}

complexe::~complexe()
{
}

double Getreel()
{
    double r;
    cout << "Entrer le reel : " ;
    cin >> r;
    return r;
}

double Getimage()
{
    double i;
    cout << "Entrer l'imaginaire : " ;
    cin >> i;
    return i;
}

void complexe::SetReel(double r)
{
    reel = r;
}

void complexe::SetImage(double i)
{
    image = i;
}

double  complexe::GetReel()
{
    return reel;
}

double complexe::GetImage()
{
    return image;
}

void complexe::display()
{
    cout << reel <<" + "<< image <<"i"<< endl;
}

complexe complexe::addition(complexe com2)
{
    double reel,image;
    complexe com1;
    reel = this->reel + com2.reel;
    image = this->image + com2.image;
    com1.SetReel(reel);
    com1.SetImage(image);
    return com1;
}

complexe complexe::soustraction(complexe com2)
{
    double reel,image;
    complexe com1;
    reel = this->reel - com2.reel;
    image = this->image - com2.image;
    com1.SetReel(reel);
    com1.SetImage(image);
    return com1;
}

complexe complexe::multiplication(complexe com2)
{
    double reel,image;
    complexe com1;
    reel = this->reel * com2.reel - this->image * com2.image;
    image = this->image * com2.reel + this->reel * com2.image;
    com1.SetReel(reel);
    com1.SetImage(image);
    return com1;
}

complexe complexe::division(complexe com2)
{
    double reel,image,denominateur;
    complexe com1;
    denominateur = com2.reel * com2.reel + com2.image * com2.image;
    reel = ((this->reel * com2.reel + this->image * com2.image)/denominateur);
    image = ((this->image * com2.reel - this->reel * com2.image)/denominateur);
    com1.SetReel(reel);
    com1.SetImage(image);
    return com1;
}

complexe complexe::conjugue(complexe com2)
{
    complexe com1;
    com1.SetReel(reel);
    com1.SetImage(-image);
    return com1;
}
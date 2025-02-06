#include <string>
using namespace std;

class rationnel
{
private:
    int numerateur;
    int denominateur;
public:
    //Constructeur
    rationnel();
    //Recuperation de donner
    void Setnumerateur(int num);
    void Setdenominateur(int den);

    int Getnumerateur();
    int Getdenominateur();

    rationnel somme(rationnel rat2);
    rationnel soustraction(rationnel rat2);
    rationnel produit(rationnel rat2);
    rationnel division(rationnel rat2);
    void display(string TYPE);
    ~rationnel();
};

class complexe
{
private:
    double reel;
    double image;
public:
    //Constructeur
    complexe();

     //Recuperation de donner
    void SetReel(double r);
    void SetImage(double i);

    double  GetReel();
    double GetImage();

    void display();

    complexe addition(complexe com2);
    complexe soustraction(complexe com2);
    complexe multiplication(complexe com2);
    complexe division(complexe com2);
    complexe conjugue(complexe com2);
    //Destructeur
    ~complexe();
};

double Getreel();
double Getimage();
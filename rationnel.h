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

int GetNum();
int GetDen();

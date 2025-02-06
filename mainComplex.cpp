#include "complexrationnel.h"

using namespace std;
int main ()
{
    double reel1,image1,reel2,image2,reel3,image3,reel4,image4;

    reel1 = Getreel();
    image1 = Getimage();

    complexe com1;
    com1.SetReel(reel1);
    com1.SetImage(image1);

    reel2 = Getreel();
    image2 = Getimage();

    complexe com2;
    com2.SetReel(reel2);
    com2.SetImage(image2);

    reel3 = Getreel();
    image3 = Getimage();

    complexe com3;
    com3.SetReel(reel3);
    com3.SetImage(image3);

    reel4 = Getreel();
    image4 = Getimage();

    complexe com4;
    com4.SetReel(reel4);
    com4.SetImage(image4);

    rationnel r1,r2;
    r1.Setnumerateur(rationnel(com1),rationnel(com2));
    r2.Setnumerateur(rationnel(com3),rationnel(com4));

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
     
    return (0);
}
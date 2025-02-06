#include "complexe.h"

using namespace std;
int main ()
{
    double reel1,image1,reel2,image2;

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

    complexe addition = com1.addition(com2);
    complexe soustraction = com1.soustraction(com2);
    complexe produit = com1.multiplication(com2);
    complexe division = com1.division(com2);
    complexe conjugue = com1.conjugue(com2);

    addition.display();
    soustraction.display();
    produit.display();
    division.display();
    conjugue.display();
     
    return (0);
}
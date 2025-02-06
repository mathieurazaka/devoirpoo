using namespace std;

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



#include <iostream>
#include <string>
using namespace std;

class Kurabiika {
private:
    int sugarPercentage;
    string flour;
protected:
    int baked;
public:
    Kurabiika() : sugarPercentage(0), baked(0), flour("") {}
    Kurabiika(int sugar, int b, const string &f) : sugarPercentage(sugar), baked(b), flour(f) {}

    ~Kurabiika() {}
    
    void setSugarPercentage(int sugar) { sugarPercentage = sugar; }
    
    int getSugarPercentage() const { return sugarPercentage; }
    
    void setFlour(const string &f) { flour = f; }
    
    string getFlour() const { return flour; }
    void setBaked(int b) { baked = b; }
    int getBaked() const { return baked; }
    void print() const
    {
        if (baked == 1)
        {
            
        }
        else
        {
            cout << "Surova kurabiika s " << sugarPercentage << "% RDA zahar ot " << flour << " brashno." << endl;

        }}
};

class Forma {
private:
    int numAngles;
public:
    Forma(const string &shape)
    {
        if (shape == "kvadrat")
        {
            numAngles = 4;
        }
        else if (shape == "triugulnik")
        {
            numAngles = 3;
        }
        else
        {
            numAngles = 0;
        }
    }
    string getShapeName() const
    {
        if (numAngles == 4)
        {
            return "kvadrat";
        }
        else if (numAngles == 3)
        {
            return "triugulnik";
        }
        else
        {
            return "neizvestna ili greshna forma";
        }
    }
};

class ModernKurabiika : public Kurabiika {
private:
    int veganska;
    Forma forma;
public:
    ModernKurabiika(int b, const string &flour, int vegan, const string &shape)
        : Kurabiika(5, b, flour), veganska(vegan), forma(shape) {}
    
    ~ModernKurabiika() {}
    
    void print() const
    {
        string bakedString = (getBaked() == 1) ? "Izpechena" : "Surova";
        string veganString = (veganska == 1) ? "veganska" : "neveganska";
        cout << bakedString << " moderna kurabiika s " << getSugarPercentage() 
             << "% RDA zahar ot " << getFlour() 
             << " brashno, " << veganString 
             << ", s forma na " << forma.getShapeName() << "." << endl;
    }
};

int main(){
    int baked, vegan;
    
    string flour, shape;
    
    cin >> baked >> flour >> vegan >> shape;
    
    ModernKurabiika ModernaKurabiika(baked, flour, vegan, shape);
    
    ModernaKurabiika.print();
    
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

class Mushroom
{
public:
    virtual void cook() const = 0;
    virtual ~Mushroom() {}
};

class Manatarka : public Mushroom
{
protected:
    bool posinqva;
public:
    Manatarka(bool posinqva) : posinqva(posinqva) {}
};

class ObiknovenaManatarka : public Manatarka
{
public:
    ObiknovenaManatarka() : Manatarka(false) {}

    void cook() const override {
        cout << "Obiknovena manatarka... Mmm :)" << endl;
    }
};

class DyavolskaManatarka : public Manatarka
{
public:
    DyavolskaManatarka() : Manatarka(true) {}

    void cook() const override {
        cout << "Dyavolska manatarka... RIP" << endl;
    }
};

void sgotvi(void* pointer)
{
    ObiknovenaManatarka* obiknovena = dynamic_cast<ObiknovenaManatarka*>((Mushroom*)pointer);
    
    if (obiknovena)
    {
        obiknovena->cook();
        return;
    }

    DyavolskaManatarka* dqvolska = dynamic_cast<DyavolskaManatarka*>((Mushroom*)pointer);
    if (dqvolska)
    {
        dqvolska->cook();
        return;
    }

    cout << "Nevaliden obekt" << endl;
}

int main()
{
    vector<Mushroom*> mushrooms;
    string input;

    while (cin >> input && input != "XX")
    {
        if (input == "OM")
        {
            mushrooms.push_back(new ObiknovenaManatarka());
        }
        else if (input == "DM")
        {
            mushrooms.push_back(new DyavolskaManatarka());
        }
    }

    int index;
    cin >> index;

    if (index >= 0 && index < (int)mushrooms.size())
    {
        sgotvi((void*)mushrooms[index]);
    }
    else
    {
        cout << "Nevaliden index" << endl;
    }
    
    for (Mushroom* m : mushrooms)
    {
        delete m;
    }

    return 0;
}

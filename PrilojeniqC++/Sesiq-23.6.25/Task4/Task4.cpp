#include <iostream>
using namespace std;

class Musaka
{
private:
    int grams;
    bool imaKanela;

public:
    Musaka(int kolihestvoMeso, bool kanela)
    {
        grams = kolihestvoMeso;
        imaKanela = kanela;
    }

    void eat() const
    {
        cout << "Izqjdam " << grams << " g musaka ";

        if (imaKanela)
        {
            cout << "s kanela.";
        }
        else
        {
            cout << "bez kanela. Mmm...";
        }

        cout << endl;
    }
};

int main()
{
    int broiMusaki;
    cin >> broiMusaki;

    for (int i = 0; i < broiMusaki; i++)
    {
        int grams, kanela;
        cin >> grams >> kanela;

        Musaka musaka(grams, kanela == 1);
        musaka.eat();
    }

    return 0;
}
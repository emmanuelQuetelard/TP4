#ifndef VOYANT_H
#define VOYANT_H

#include <string>
using namespace std;

namespace nsDigicode {
    enum Etat {allume = 0, eteint};

    enum Couleur {vert = 0, rouge};

    class Voyant
    {
    private:
        Couleur myCouleur;
        Etat myEtat;


    public:
        Voyant(Couleur couleur, Etat etat);
        void allumer();
        void eteindre();

        string getStatus();
    };
}
#endif // VOYANT_H

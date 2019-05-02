#ifndef VOYANT_H
#define VOYANT_H

#include <string>
using namespace std;

namespace nsDigicode {
    enum Etat {allume, eteint};

    enum Couleur {vert, rouge};

    class Voyant
    {
    private:
        Couleur myCouleur;
        Etat myEtat;


    public:
        Voyant(Couleur couleur, Etat etat);
        void allumer();
        void eteindre();

        string getStatut();
    };
}
#endif // VOYANT_H

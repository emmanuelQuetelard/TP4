#ifndef PORTE_H
#define PORTE_H

#include "objettempo.h"
#include "Chrono.h"
#include "capteur.h"

namespace nsDigicode {
    class Porte : public ObjetTempo
    {
    private:
        Capteur myCapteur;
        bool fermer();

    public:
        Porte(Chrono* pchrono, int delai);
        bool ouvrir();

    };
}

#endif // PORTE_H

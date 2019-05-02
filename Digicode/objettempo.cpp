#include "objettempo.h"

namespace nsDigicode {
    ObjetTempo::ObjetTempo(Chrono* pchrono, int delai) : mypChrono(pchrono), myDelai(delai)
    {

    }

    Chrono* ObjetTempo::getChrono()
    {
        return mypChrono;
    }

    void ObjetTempo::finTempo()
    {
        myAttente = false;
    }
    int ObjetTempo::getDelai()
    {
        return myDelai;
    }

}

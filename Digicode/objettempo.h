#ifndef OBJETTEMPO_H
#define OBJETTEMPO_H


#include "Chrono.h"

namespace nsDigicode {

    class ObjetTempo
    {
    protected:
        bool myAttente;
        int myDelai;
        Chrono* mypChrono;
    public:
        ObjetTempo(Chrono* pchrono, int delai);
        Chrono* getChrono();
        void finTempo();
        int getDelai();
    };

} /* ns_Digicode */

#endif // OBJETTEMPO_H

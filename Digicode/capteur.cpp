#include "capteur.h"

#include "kbhit.h"

namespace nsDigicode {


    Capteur::Capteur()
    {

    }

     int Capteur::detecter()
     {
         return _kbhit();
     }

}

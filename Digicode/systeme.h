#ifndef SYSTEME_H
#define SYSTEME_H

#include "InterfaceDeSaisie.h"
#include "porte.h"
#include "alarme.h"
#include "BD.h"
#include "Archivage.h"
#include "Chrono.h"
namespace nsDigicode {
    class Systeme
    {
    private:
        InterfaceDeSaisie myInterface;
        Porte myPorte;
        Alarme myAlarm;
        BD myBD;
        Archivage myArchive;
        Chrono myChrono;
    public:
        Systeme(int, int, int);
    };
}


#endif // SYSTEME_H

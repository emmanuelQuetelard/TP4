#include "alarme.h"

#include <unistd.h>
#include <iostream>

using namespace std;

namespace nsDigicode {

    Alarme::Alarme()
    {

    }

     void Alarme::declencher()
     {
         while(true)
         {
             cout<<"Alarme: la porte n'a pas été fermé"<<endl;
             sleep(1);
         }
     }

}

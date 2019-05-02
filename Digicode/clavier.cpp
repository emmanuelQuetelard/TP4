#include "clavier.h"

#include "kbhit.h"
#include <iostream>

using namespace std;

namespace nsDigicode {

    Clavier::Clavier()
    {

    }

     int Clavier::saisirChiffre()
     {
         int kb = _kbhit();
         if(kb == 0)
             return -1;
         else {
              return kb - '0';
         }

     }

}

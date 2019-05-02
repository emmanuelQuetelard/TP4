#include "systeme.h"

#include <iostream>

namespace nsDigicode {

    Systeme::Systeme(int dc, int dp, int nbca) :
        myInterface(&myChrono, dc, nbca), myPorte(&myChrono, dp)

    {
        int c;
        while(true)
        {
            myArchive.archiver(c = myInterface.saisieCode());
            cout<<c<<endl;
            if(myBD.verifier (c))
            {
                if(!myPorte.ouvrir())
                    myAlarm.declencher();
            }
        }
    }



}

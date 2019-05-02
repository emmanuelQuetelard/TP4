#include "systeme.h"
#include <iostream>

using namespace std;

#define DELAI_CLAVIER 5
#define DELAI_PORTE 8
#define NB_CHIFFRES_CLAVIER 4


int main(void)
{
   nsDigicode::Systeme system(DELAI_CLAVIER, DELAI_PORTE, NB_CHIFFRES_CLAVIER);
    return 0;
}

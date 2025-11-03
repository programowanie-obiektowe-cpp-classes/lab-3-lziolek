#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    Stocznia stocznia  {};
    unsigned int przetransportowano = 0;
    unsigned int zagle =0;
    while (towar>przetransportowano){
        Statek* s1 = stocznia();
        przetransportowano +=s1->transportuj();

        
        
        if(dynamic_cast <Zaglowiec*>(s1))
        { zagle++; }
        
        delete s1;
    }

    return zagle;

}
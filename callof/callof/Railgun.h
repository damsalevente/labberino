#pragma once
#include "Weapon.h"
#include <string>

class Railgun : public Weapon
{
    private:
        int energy;
    public:
    Railgun(unsigned int dmg = 90, int eg = 100) :Weapon(dmg)
    {
            energy = eg;
    }
    unsigned int use();
    int get_energy();
    void set_energy(int eng);
    
    void recharge();
    std::string toString();
};


/*
3) Railgun (elektromágneses fegyver), amivel lövedék kilövés hatására a 0 és 100 közötti energiájából
(energy) 10 egységet veszít, viszont újra lehet tölteni 8 energiaegységgel (recharge()). Alapértelmezetten
90 egységet sebez és 100-as energia szintről indul. Kilövéshez legalább 10 energiaegység szükséges.
*/
#pragma once
#include <iostream>
#include <string>
#include "Weapon.h"


class Pistol : public Weapon 
{
    private:
    int clipSize;
    int bulletsInClip;
    int totalBullets;
    public:
    Pistol(unsigned int dmg = 60, int cs = 12, int bc = 12, int tb = 48):Weapon(dmg)
    {
        clipSize = cs;
        bulletsInClip = bc;
        totalBullets = tb;
    }
    void reload();
    unsigned int use();
    int get_clipSize();
    int get_bulletsInClip();
    int get_totalBullets();
    void set_clipSize(int a);
    void set_bulletsInClip(int a);
    void set_totalBullets(int a);


    std::string toString();
};


/*
Pisztoly (Pistol), aminek van pisztolytár kapacitása (clipSize), amiben bulletsInClip db töltény van. Ezeken
kívül van egy tölténytáskája, amiben totalBullets db tölténye van, innen újra tudja tölteni (reload()) a
pisztolytárat. Alapértelmezetten 60-at sebez, 12 töltény fér el a tárban, teli tárral kezd és ezen kívül kap
még 36 töltényt.
*/
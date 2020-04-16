#include "Pistol.h"
void Pistol::reload()
{
    /* get bullets to clip with clipsize or less, depends on totalbullets */
    /* empty clip first */
    bulletsInClip  = 0;
    /*  remove clipsize amount of totalbullets */
    totalBullets -= clipSize;
    /* if totalbullets is less than clipsize, load that value and set totalbullets to zero*/
    if(totalBullets < 0)
    {
        bulletsInClip = clipSize + totalBullets;
        totalBullets = 0;
    }
    else{
        bulletsInClip += clipSize;
    }
}

unsigned int Pistol::use()
{
    /* degrade weapon even if we can't use it */
    Weapon::use();
    /* no dmg if out of bullets */
    if(bulletsInClip == 0)
    {
        return 0;
    }
    bulletsInClip --;
    return this->get_damage();  

}

std::string Pistol::toString()
{
    return Weapon::toString() + "\nPistol params\nclipsize: " + std::to_string(clipSize) + "\nTotalbullets:" + std::to_string(totalBullets) + "\nBulletsinclip: " + std::to_string(bulletsInClip);

}

int Pistol::get_clipSize()
{
    return this->clipSize;
}

int Pistol::get_bulletsInClip()
{
    return this->bulletsInClip;
}

int Pistol::get_totalBullets()
{
    return this->totalBullets;
}

void Pistol::set_clipSize(int a)
{
    this->clipSize = a;
}

void  Pistol::set_bulletsInClip(int a)
{

	this->bulletsInClip = a;
}

void Pistol::set_totalBullets(int a)
{
    this->totalBullets = a;
}


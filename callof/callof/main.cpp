#include <iostream>
#include "Weapon.h"
#include "Knife.h"
#include "Pistol.h"
#include "Railgun.h"

using namespace std;

int main() {

	Weapon excalibur(100);
	Knife knife;
	Pistol pistol;
	Railgun railgun;

	cout << excalibur.toString() << endl;
	cout << knife.toString() << endl;
	cout << pistol.toString() << endl;
	cout << railgun.toString() << endl;

	cout << endl;

	cout << "Damage caused with excalibur: " << excalibur.use() << endl;
	cout << "Damage caused with knife: " << knife.use() << endl;
	cout << "Damage caused with pistol: " << pistol.use() << endl;
	cout << "Damage caused with railgun: " << railgun.use() << endl;

	knife.sharpen();
	pistol.reload();
	railgun.recharge();

	cout << endl;

	cout << excalibur.toString() << endl;
	cout << knife.toString() << endl;
	cout << pistol.toString() << endl;
	cout << railgun.toString() << endl;

	return 0;
}

/*
2. CallOfC++: Fegyverek refaktorálása
Alakítsd át a múlthéten elkészített CallOfC++ osztályokat (megoldást megtalálod a portálon) a következőképp:
• Oldd meg, hogy a use() és a toString() függvények definícióját minden esetben a leszármazottól vegye a
program (late binding)
• A use() és a toString() függvényeknek ne legyen definíciója a Weapon osztályban, hiszen nem szükséges
• Foglald össze röviden, hogy mit is csináltál az előző két pontban és mi a következmény!
• Készítsd fel a fegyverek osztályait arra, hogy esetleges dinamikus memóriahasználat esetén minden
esetben lefussanak a leszármazottak destruktorai. Teszteld is le!
Ha nem emlékeznél pontosan, hogy melyik függvény mit csinál, nézd meg az előző laborfeladatsort.
*/
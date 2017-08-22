#include <iostream>
#include "Rect.h"

using namespace std;
void todo(int x);

void main()
{
	Rect rect1, r2(12, 30), r3(7);
	//Rect r4(r2);

	Rect r4=r2;

	/*Rect r4;
	r4=r2;*/
	r4.Print();

	//rect1.Print();
	/*Rect *p = new Rect;
	delete p;*/

	//Rect arr[10];

	rect1.SetLength(20);
}

void todo(int x)
{
	// ..
}

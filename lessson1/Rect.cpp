#include "Rect.h"
#include <iostream>
using namespace std;

void Rect::SetWidth(int x)
{
	width = x;
}

 void Rect::SetLength(int x)
{
	if(x>0)
		length=x;
	else
	{
		cout<<x<<" : Not valid value!";
	}
}

int Rect::getArea()
{
	return length*width;
}


Rect::~Rect()
{
	cout<<"by by!!";
}


// name: 
// ID: 

#pragma once

#ifndef RECT_H
#define RECT_H

#include<iostream>
using namespace std;

class Rect
{
private:
		int length, width;
		
public:
	//ctor
	//Rect(){length=width=1;}

	////Rect(int a, int b){length=a; width=b;}
	//Rect(int a, int b):length(a),width(b){}

	//Rect(int x){length=width=x;}

	//Rect (int n=1){length =width = n;}
	
	//Rect (int x=1, int y=1){length =x; width = y; }
	Rect(int x = 1, int y = 1) :width(y), length(x){}
	
	//dtor
	~Rect();

	void SetLength(int);
	int GetLength(){return length;};
	void SetWidth(int);

	int getArea();

	void Print(){cout<<"length= "<<length<<" , width= "<<width <<endl;};

	bool equal(Rect r){return (length==r.length && width==r.width);}
};

#endif
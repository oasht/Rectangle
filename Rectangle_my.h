#include <iostream>
#include <Windows.h>
#include<iomanip>
using namespace std;
class Rectangle_my
{
	double width, height;
	char symbol;
public:
	Rectangle_my(double _width, double _height, char _symbol);
	void Show_fig();
	friend void change_symb(Rectangle_my* r);
	friend void Show_per(Rectangle_my* r);
	friend void Set(Rectangle_my* r);

};


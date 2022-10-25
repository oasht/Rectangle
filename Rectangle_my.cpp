#include "Rectangle_my.h"

Rectangle_my::Rectangle_my(double _width, double _height, char _symbol)
{
	width = _width;
	height = _height;
	symbol = _symbol;
}

void Rectangle_my::Show_fig()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << symbol << " ";
		}
		cout << endl;
	}
}

void change_symb(Rectangle_my* r)
{
	char _s;
	cout << "Enter the symbol" << endl;
	cin >> _s;
	r->symbol = _s;
}

void Show_per(Rectangle_my* r)
{
		for (int i = 0; i < r->height; i++)
	{
		for (int j = 0; j < r->width; j++)
		{
			if (i == 0 || i == r->height - 1 || j == 0 || j == r->width - 1)
				cout << r->symbol;
			else
				cout << " ";
		}
		cout << endl;
	}
}

void Set(Rectangle_my* r)
{
	int a;
	int b;
	cout << "Enter height" << endl;
	cin >> a;
	cout << "Enter width" << endl;
	cin >> b;
	r->height = a;
	r->width = b;
}




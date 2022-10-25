#include "Rectangle_my.h"

void main()
{
	Rectangle_my r1(10, 5, '@');
	r1.Show_fig();
	change_symb(&r1);
	cout << "\n\n*********************************" << endl<<endl;
	r1.Show_fig();
	cout << "\n\n*********************************" << endl << endl;
	Show_per(&r1);
	cout << "\n\n*********************************" << endl << endl;
	Set(&r1);
	
	r1.Show_fig();

}
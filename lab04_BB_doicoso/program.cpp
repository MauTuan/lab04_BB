#include<iostream>
#include<conio.h>
#include <iomanip>
#include <math.h>
using namespace std;
#include"thuvien1.h"
#include"menu.h"

void chaychuongtrinh();

int main()
{

	chaychuongtrinh();


	return 0;
}

void chaychuongtrinh()
{
	
	int menu;
	int sochucnang;
	int n = 0;
	
	sochucnang = 4;
	do
     {
		menu = chonchucnang(sochucnang);
		xulimenu(menu, n);

	} while (menu > 0);


	_getch();
}
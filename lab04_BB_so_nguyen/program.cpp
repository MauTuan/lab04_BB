#include<iostream>
#include<conio.h>
using namespace std;
#include"thuvien.h"
#include"menu.h"

void chaychuongtrinh();

int main()
{

	chaychuongtrinh();

	
	return 0;
}

void chaychuongtrinh()
{
	int  menu;
	int sochucnang;
	int n = 0;
	sochucnang = 8;

	do
	{
		menu = chonchucnang(sochucnang);
		xulimenu(menu,n);

	} while (menu > 0);
	
	
	_getch();
}
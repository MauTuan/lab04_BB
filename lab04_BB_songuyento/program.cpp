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
	int n = 0;
	int sochucnang;
	sochucnang = 5;
	int menu;
	do
	{
		menu = chonchucnang(sochucnang);
		xulimenu(menu,n);
	} while (menu>0);
	

	_getch();
}
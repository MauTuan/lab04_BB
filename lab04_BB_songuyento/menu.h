#pragma once


void xuatmenu();
int chonchucnang(int sochucnang);
void xulimenu(int menu, int n);



void xuatmenu()
{
	cout << "---------CHON CHUC NAMG-----------";
	cout << "\n0: Thoat khoi chuong trinh";
	cout << "\n1: Kiem tra n co phai so nguyen to";
	cout << "\n2: Xuat ra man hinh cac so nguyen to";
	cout << "\n3: Dem so luong cac so nguyen to tu 1 toi n";
	cout << "\n4: Tinh tong cac uoc so nguyen to  cua n ";
	cout << "\n5: Phan tich n thanh tich cac thua so nguyen to";

}

int chonchucnang(int sochucnang)
{
	int stt;
	system("cls");

	for (; ;)
	{
		xuatmenu();
		cout << " \nnhap 1 so chuc nang (0<=stt" << "stt<=" << sochucnang << ") stt :=";
		cin >> stt;
		if ( 0 <= sochucnang && stt <=sochucnang )
			break;
	
	}
	return stt;
}

void xulimenu(int menu,  int n )

{
	switch (menu)
	{
	case 0:
		cout << "\n0: Thoat khoi chuong trinh";
		break;
	case 1:
		cout << "\n1: Kiem tra n co phai so nguyen to" << endl;
		cout << " nhap so n: ";
		cin >> n;
		kiemtrasonguyento(n);
		break;
	case 2:
		cout << "\n2: Xuat ra man hinh cac so nguyen to" << endl;
		cout << " nhap so n: ";
		cin >> n;
		xuatsonguyento(n);
		break;

	case 3:
		cout << "\n3: Dem so luong cac so nguyen to tu 1 toi n"<<endl;
		cout << " nhap so n: ";
		cin >> n;
		demsonguyento(n);
		break;
	case 4:
		cout << "\n4: Tinh tong cac uoc so nguyen to  cua n " << endl;
		cout << " nhap so n: ";
		cin >> n;
		tongcacuoc( n);
		break;
	case 5:
		cout << "\n5: Phan tich n thanh tich cac thua so nguyen to" << endl;
		cout << " nhap so n: ";
		cin >> n;
		tichcacthuaso(n);
		
		break;
	}
}
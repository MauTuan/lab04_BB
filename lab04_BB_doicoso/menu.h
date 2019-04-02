// khai báo nguyên mẫu các hàm trong hệ thống menu



// định nghĩa các hàm các hàm trong hệ thống menu 
int  chonchucnang(int sochucnang);
void xuatmenu();
void xulimenu(int menu,int n);
void Xuat(int so);
// hàm xuất menu :  xuất các chức năng ra màn hình 

void xuatmenu()
{
	cout << "----------CHON CHUC NANG---------- " << endl;
	cout << " 0: Thoat khoi man hinh "<<endl;
	cout << " 1: Doi sang he nhi phan" << endl;
	cout << " 2: Doi sang he bat phan " << endl;
	cout << " 3: Doi sang he thap luc phan" << endl;
	cout << " 4: Doi sang he co so 7 " << endl;

}

int  chonchucnang(int sochucnang)
{
	
	int stt;
	system("cls");
	for (; ; )
	{
		 xuatmenu();
		cout << " \nnhap so chuc nang (0<stt<" << sochucnang << " stt :=";
		cin >> stt;
		if (0 <= stt && stt <= sochucnang)
			break;
	}
	return stt;

}







void xulimenu(int menu,int n)
{
	switch (menu)
	{
	case 0:
		cout << " ban da thoat khoi chuong trinh !" << endl;
	
		
	case 1 :
		cout << " 1 : Doi sang he nhi phan" << endl;
		cout << " nhap n:";
		cin >> n;
		doicoso(n, 2);
		break;
	case 2:
		cout << " 2: Doi sang he bat phan" << endl;
		cout << " nhap n:";
		cin >> n;
		doicoso(n, 8);
		break;
	case 3:
		cout << " 3 : Doi sang he thap luc phan" << endl;
		cout << " nhap n:";
		cin >> n;
		doicoso(n, 16);
		break;
	case 4:
		cout << " 4 : Doi sang he co so 7 " << endl;
		cout << " nhap n:";
		cin >> n;
		doicoso(n, 7);
		break;
	
	}

}

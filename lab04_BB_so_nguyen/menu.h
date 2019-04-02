

// khai báo nguyên mẫu các hàm trong hệ thống menu
void xuatmenu();
int chonchucnang(int sochucnang);

void xulimenu(int menu, int n);

// định nghĩa các hàm các hàm trong hệ thống menu 


// hàm xuất menu :  xuất các chức năng ra màn hình 


void xuatmenu()
{
	
	cout << "--------- CHON CHUC NANG ---------" << endl;
	cout << " 0: Thoat khoi chuong trinh " << endl;
	cout << " 1: Xuat cac so tu 1 den n " << endl;
	cout << " 2: Dem so luong cac so chia het cho 3 khong chia het cho 4 " << endl;
	cout << " 3: Dem so luong chu so  n " << endl;
	cout << " 4: Dao nguoc so  n " << endl;
	cout << " 5: Tinh tong cac chu so n: " << endl;
	cout << " 6: Tim chu so dau tien n: " << endl;
	cout << " 7: Xuat cac so trong pham vi hoan chinh [1...n ]" << endl;
	cout << " 8: Tim so nguyen m lon nhat sao cho 1+2+...+m <= n " << endl;

}

int chonchucnang(int sochucnang)

{
	int stt;
	system("cls");
	for (; ;)
	{
		xuatmenu();
		cout << " nhap 1 so de chon menu (0<=stt<=" << sochucnang << "):stt=";
		cin >> stt;
		if (0 <= stt && stt <= sochucnang)
			break;
	}

	return stt;
}

void xulimenu(int menu,int n )
{
	int xuat;
	switch (menu)

	{
	case 0:
		cout << " Thoat khoi chuong trinh !" << endl;
		break;
	case 1:
		cout << " Xuat cac so tu 1 den n :" << endl;
		cout << " nhap 1 so n: ";
		cin >> n;
		xuatcacso(n);
		
			break;
	case 2:
		cout << " Dem so luong cac so chia het cho 3 khong chia het cho 4  " << endl;
		cout << " nhap 1 so n : ";
		cin >> n;
		
		 chia3kochia4(n);
		break;
	case 3:
		cout << " dem so luong chu so n " << endl;

		cout << " nhap 1 so n : ";
		cin >> n;
		demso(n);
		 
		break;
	case 4:
		cout << " dao nguoc so  n " << endl;
		cout << " nhap 1 so n: ";
		cin >> n;
		daonguocso(n);
		
		break;
	case 5 :
		
		cout << " Tinh tong cac chu so n: " << endl;
		cout << " nhap 1 so n: ";
		cin >> n;
		tongchuso(n);
		break;
	case 6:
		cout << "  chu so dau tien : " << endl;
		cout << " nhap 1 so n: ";
		cin >> n;
		chusodau( n);
		break;
	case 7 :
		cout << "  Xuat cac so trong pham vi hoan chinh [1...n ] " << endl;
		cout << " nhap 1 so n: ";
		cin >> n;
		sohoanchinh(n);
		break;
	case 8:
		cout << " Tim so nguyen m lon nhat sao cho 1+2+...+m <= n " << endl;
		cout << " nhap 1 so n: ";
		cin >> n;
		timsomlonnhat(n);
		break;
		
	}
	
}
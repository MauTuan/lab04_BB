

// định nghĩa các hàm số và dử liệu kiểu mới 

// khai báo nguyên mẫu các hàm 
int xuatcacso(int n);
int chia3kochia4(int n);
int demso(int n);
int daonguocso(int n);
int tongchuso(int n);
int chusodau(int n);
double timsomlonnhat(int n);
void sohoanchinh( unsigned long   n);
//định nghĩa các hàm 


// ham xuat cac so 1 den n 
int xuatcacso(int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << i << "\t";
	}
	_getch();
	return 0;
}

int   chia3kochia4(int n)
{
	int dem = 1;
	cout << "so luong so chia cho 3 khong chia het cho 4 la:";
	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 4 != 0)

			cout << dem++<<",";
		}	

	_getch();
	return dem;
}

int demso(int n)
{ 
	int dem = 0;
	while (n>=10)

	{
		n = n / 10;
		dem++;
		
	}
	cout <<" cac so la: "<<  dem + 1;
	

	_getch();
	return dem;
}
int daonguocso(int n)
{
	int chuso;
	cout << "so sau khi dao nguoc :";
	while (n!=0)
	{
		chuso = n %10;
		n =n / 10;
		cout<< chuso;
	}
	_getch();
	return chuso;
}

int tongchuso(int n)
{
	int tong = 0;
	int temp;
	while (n != 0)
	{
		temp = n % 10;
		n /= 10;
		tong += temp;
	}
	cout <<"tong cac so="<< tong;
	_getch();
	return tong;
}
int chusodau(int n)
{
	int chuso;
	while (n!=0)
	{
		chuso = n % 10;
		n /= 10;
	}
	cout <<"chu so dau tien la "<< chuso;
	_getch();
	return chuso;
}
void sohoanchinh( unsigned long  n)
{
	
		for (int i = 1; i<n; i++)
		{
			int tong = 0;
			for (int j = 1; j<i; j++)
				if (i%j == 0)
					tong += j;
			if (i == tong)
				cout << i << '\t';
		}
	
	
	_getch();
	
}
double  timsomlonnhat(int n)
{
		int somax;
		somax =((sqrt(8 * n + 1) - 1) / 2);// cong thuc tinh tong 1+2+...+m <= n
		cout << somax;
		_getch();
		return somax;
}
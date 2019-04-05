void tichcacthuaso(int n);
void tongcacuoc(int n);
void  xuatsonguyento(int n);
void demsonguyento(int n);
void   kiemtrasonguyento (int n)
{
	if (n < 2)
		cout << " khong phai so  nguyen to";
	 
	int dem = 1;
	
	for (int i = 2; i <= (float)sqrt(n); i++)
	{
		
		if (n%i == 0)

			dem = 0;
				
	}
		if (dem == 1)
			cout << "  so  nguyen to ";
		else
			cout << " khong  phai la so nguyen to ";
	
	
	
	_getch();
  }


void xuatsonguyento(int n)

{
	int dem =0 ;
	int demkc = 0;
	for (int i = 2; i <= n; i++)
	{
		for (int j =1;j<=i;j++)
			if (i%j == 0)
			{
				dem++;
			}
		
		if (dem == 2)
			
		
			cout << i << "\t";
		demkc++;
			if(demkc % 10 == 0)

			cout << "\n";
			dem= 0;
		
	
	}

	_getch();
}

void demsonguyento(int n)
{

	int dem = 0;
	int demkc = 1;
	cout << " tong co cac so nguyen to : ";
	for (int i = 2; i <= n; i++)
	{
		
		for (int j = 1; j <= i; j++)
			if (i%j == 0)
			{
				dem++;
			}
		
		if (dem == 2)
			cout << demkc++<< " "  ;
		
		dem = 0;
		
	}
		_getch();
}

void tongcacuoc(int n)
{
	    int tong = 0;
		int dem = 0;
		int demkc = 1;
		
		for (int i = 2; i <= n; i++)
		{

			for (int j = 1; j <= i; j++)
				if (i%j == 0)
				{
					dem++;
				}

			if (dem == 2)
				tong += dem;

			dem = 0;

		}
		cout << "tong cac uoc so nguyen to tu 1 den " << n << " la " << tong << endl;
		_getch();
	}
void tichcacthuaso(int n)
{
	int dem;

	for (int i = 2; i <= n; i++)
	{
		dem = 0;
		while (n % i == 0) {
			++dem;
			n /= i;
		}
		if (dem)
		{
			cout << i;
			if (dem > 1) cout << "^" << dem;
			if (n > i)

				cout << " * ";
		}
		
	}
	_getch();
}

// định nghĩa các hàm số và dử liệu kiểu mới 

// khai báo nguyên mẫu các hàm 

void Xuat(int so);

void doicoso(unsigned int n, unsigned int b);
//định nghĩa các hàm 


unsigned int tinhluythua( unsigned int n, unsigned int b)

{
	int luythua;
	for (int i = 0;pow((float)b,(float)i)<=n;i++)

	{
		luythua = i;

	}
	return pow((float)b, (float)luythua);
}
void Xuat(int so)
{
	switch (so)

	{
	case 10:
		cout << "A";
		break;
	case 11:          
		cout << "B";
		break;
	case 12:
		cout << "C";
		break;
	case 13:
		cout << "D";
		break;
	case 14:
		cout << "E";
		break;
	case 15:
		cout << "F";
		break;
	default:
		cout << so;
	}
}


void doicoso(unsigned int n, unsigned int b)

{
	unsigned int  v, so;
	v = tinhluythua(n, b);
	
	
	while (v > 0)
	{
		if (n < v)
			Xuat(0);

		else
			while (n >= v)
			{
				so = n / v;
				Xuat(so);

				n = n - so*v;//321
			}


		v = v / b;
	}
	
	_getch();
}
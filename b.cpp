#include<iostream>
using namespace std;
int main() 
{
	int a, b,m,n;
	cin >> a >> b;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			if (b%j == 0) 
			{
				m = j;
				if (a%m == 0)
				{
					n = m;
				}
			}
		}
		
	}
	cout << n;
	system("pause");
	return 0;
}

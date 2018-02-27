#include<iostream>
using namespace std;
int main() 
{
	int a, b,m,n;
	cin >> a >> b;
	for (int i = 2; i <= a; i++)
	{
		for (int j = 2; j <= b; j++)
		{
			if (b%i == 0) 
			{
				m = i;
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
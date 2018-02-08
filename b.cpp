#include<iostream>
using namespace std;
int main() 
{
	int a, b,i,m=1;
	cin >> a >> b;
	for (i=a ;i<=b;i++)
	{
		for (int j = 2; j <i; j++)
		{
			if (i%j == 0)
			{
				m = 0;
				break;

			}
			else
			{
				m = 1;
				continue;

			}
		}
		if (m)
		{
			cout << i;
			
		}
	}
	system("pause");
	return 0;
}
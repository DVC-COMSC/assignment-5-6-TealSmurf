
#include <iostream>
using namespace std;

int main()
{
	int N;
	cout << "Enter dimensions of the square: ";
	cin >> N;

	for(int i = 0; i < N; i++)
	{
		int a = N;
		for(int j = 0; j < N; j++)
		{
			if(a-i>1)
			{
				a--;
			}
			else if(0<a<=1)
			{
				cout << i << ", " << j << endl;
			}
		}

	}
}

#include <iostream>

using namespace std;

int main()
{
	const int size = 10;
	int arr[10];
	int x = 0;
	cout << "Enter value for X: " << endl;
	cin >> x;

	cout << "Enter " << size << " numbers:"<<endl;
	for (int i = 0; i < size; i++)
	{
		cout << "number[" << i << "]" << endl;
		cin >> arr[i];
	}
	for (int k = 0; k < size; k++)
	{
		if (arr[k] == x)
		{
			arr[k] = arr[k + 1];
			for (int b = k + 1; b < size; b++)
			{
				if (b != 9)
				{
					arr[b] = arr[b + 1];
				}
				else
				{
					arr[b] = -1;
				}
			}
		}
	}
	cout << "[ ";
	for (int v = 0; v <= 9; v++)
	{
		cout << arr[v] << ", ";
	}
	cout << "]" << endl;
	int a = 0;
	cin >> a;
	return 0;
}
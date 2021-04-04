#include <iostream>
using namespace std;
int main()
{
	int cases;
	cin >> cases;
	while (cases--)
	{
		int oddNumberCount = 0, evenNumberCount = 0, n, x;
		cin >> n >> x;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[n];
			if (arr[n] % 2 == 0)
				evenNumberCount++;
			else
				oddNumberCount++;
		}

		if (oddNumberCount > 0)
		{
			if (x % 2 == 0)
			{
				// Here the number of numbers required is even
				// So we ca pick the combination of numbers, Pick odd first and then even.
				if (oddNumberCount % 2 == 0)
				{
					int usableOddcount = oddNumberCount - 1;
					if ((usableOddcount + evenNumberCount) >= x)
						cout << "Yes" << endl;
					else
						cout << "No" << endl;
				}
				else
				{
					if ((oddNumberCount + evenNumberCount) >= x)
						cout << "Yes" << endl;
					else
						cout << "No" << endl;
				}
			}
			else
			{
				// Here the number of numbers required is odd, and sum is odd
				if (oddNumberCount % 2 == 0)
				{
					int pickedOddNumbers = oddNumberCount - 1;
					if (pickedOddNumbers >= x)
						cout << "Yes" << endl;
					else if ((pickedOddNumbers + evenNumberCount) >= x)
						cout << "Yes" << endl;
					else
						cout << "No" << endl;
				}
				else
				{
					if (oddNumberCount >= x)
						cout << "Yes" << endl;
					else if ((oddNumberCount + evenNumberCount) >= x)
						cout << "Yes" << endl;
					else
						cout << "No" << endl;
				}
			}
		}
		else
		{
			cout << "No" << endl;
		}

		// cout << evenNumberCount << oddNumberCount << endl;
	}
}
// C++ program to convert a decimal
// number to binary number

#include <bits/stdc++.h>
using namespace std;

// function to convert decimal to binary
int decToBinary(int n)
{
	// array to store binary number
	int binaryNum[32];

	// counter for binary array
	int i = 0;
	while (n > 0) {

		// storing remainder in binary array
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}


	// for (int j = i - 1; j >= 0; j--)
	// 	cout << binaryNum[j];
}


int main()
{
	int n;
  cin>>n;
	long int x = decToBinary(n);

	return 0;
}

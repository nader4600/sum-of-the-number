#include<iostream>
using namespace std;
int main()
{
	int num,i=1,sum=0;
	cout << "Enter the number : " << endl;
	cin >> num;// i entered -1
	while (num < 0)// 100<0 false
	{
		cout << "You entered negative number "<<endl;
		cout << "Enter the positive number: " << endl;
		cin >> num;//100

	}
	while (i <= num)
	{
		sum = sum + i;//sum=10+5=15
		cout << sum << " + " << i << endl;
		i++;
	}
	cout << "The sum from 1 to " << num << " = " << sum << endl;
}
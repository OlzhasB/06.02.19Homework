#include<iostream>
using namespace std;

template<typename T>
int arrayGreater(T a[], int n, T k)
{
	/*1.	*�������� �������, ������� ���������� ����������  ��������� ������������� �������, 
	������� ������ ������������� �����, ��� ����� ���� ���������� � �������. 
	����������� ���������� ��� ��������� ����� �������� */
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > k)
			count++;
	}
	return count;
}

template<typename T>
void arrayInvert(T a[], int n)
{
	/*2.	**�������� �������, ������� ������ ������� ��������� ������������� ������� �� ��������.
	������ ������� ��������� ������������ ��������������� ������. ����������� ���������� ��� ��������� ����� ��������.*/
	int j = n - 1;
	for (int i = 0; i < n / 2; i++)
	{
		swap(a[i], a[j--]);
	}
}

void task1()
{
	const int n = 10;
	int a[n] = { 0 }, k;
	for (int i = 0; i < n; i++)
	{
		a[i] = 1 + rand() % 20;
		cout << a[i] << "  ";
	}
	cout << endl;
	cout << "Write any number: ";
	cin >> k;
	cout << "Amount of numbers greater than " << k << " is " << arrayGreater(a, n, k) << endl;
	system("pause");
}

void task2()
{
	const int n = 10;
	int a[n] = { 0 }, k;
	for (int i = 0; i < n; i++)
	{
		a[i] = 1 + rand() % 20;
		cout << a[i] << "  ";
	}cout << endl;
	arrayInvert(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}cout << endl;
	system("pause");
}



int main()
{
	int fl;
	do {
		int task;
		cout << "The number of task: ";
		cin >> task;
		switch (task)
		{
		case 1:
		{
			task1();
			break;
		}
		case 2:
		{
			task2();
			break;
		}
		}

		cout << "Do you want to continue: 1/0? ";
		cin >> fl;
	} while (fl == 1);
}
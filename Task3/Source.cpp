#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main() {
	setlocale(0, "rus");
	vector<int>vecN;
	int A;
	int B;
	int n;
	int value;
	cout << "������� ������ ������� N : ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		int ch = i;
		cin >>value;
		if (value < 0) {
			i = ch;
			cout << "����� ������ ���� �������������" << endl;
			system("pause");
		}
		else
		{
			vecN.push_back(value);
		}
	}
	cout << "������� ��� ����� ������� " << endl;
	while (true)
	{
		cout << "A - ";
		cin >> A;
		cout << "B - ";
		cin >> B;
		if (B <= A) {
			system("cls");
			cout << "B - ������ ���� ������ A" << endl;
			cout << "��������� �������" << endl;
		}
		else
		{
			break;
		}
	}
	int result = 0;
	for (int i = A; i < B; i++) {
		result = vecN[i] + result;
	}
	cout << "������ : " << result << endl;
	system("pause");
}
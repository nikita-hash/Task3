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
	cout << "Введите размер массива N : ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		int ch = i;
		cin >>value;
		if (value < 0) {
			i = ch;
			cout << "Число должно быть положительным" << endl;
			system("pause");
		}
		else
		{
			vecN.push_back(value);
		}
	}
	cout << "Введите два числа запроса " << endl;
	while (true)
	{
		cout << "A - ";
		cin >> A;
		cout << "B - ";
		cin >> B;
		if (B <= A) {
			system("cls");
			cout << "B - должно быть больше A" << endl;
			cout << "Повторите попытку" << endl;
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
	cout << "Отчвет : " << result << endl;
	system("pause");
}
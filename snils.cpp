#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	string control;
	cout << "Enter SNILS" << endl;
	cin >> str >> control;
	int array[9];
	int index = 8;
	int cont = 0;

	char ar[2];
	ar[0] = control[0];
	ar[1] = '\0';
	cont = 10 * atoi(ar);
	ar[0] = control[1];
	cont += atoi(ar);

	for (int i = 0; i < str.length(); i++) {
		if (isdigit(str[i])) {
			char ch[2];
			ch[0] = str[i];
			ch[1] = '\0';
			array[index] = atoi(ch);
			index--;
		}
	}
	int res = 0;
	for (int i = 8; i > -1; i--) {
		res += array[i] * (i + 1);
	}
	res %= 101;
	if (res == cont) {
		cout << "Correct" << endl;
	}
	else {
		cout << "Wrong" << endl;
	}
	system("pause");
}
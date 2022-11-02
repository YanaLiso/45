#include <iostream>
using namespace std;
int main() {


	//дан массив из 5 элементов. вывести элементы в обратном порядке,
	//от элемента с номером 4 до элемента с номером 0.


	/*const int size = 5;
	int mas[size];
	for (int i = 1; i < size; i++) {
		cin >> mas[i];
	}
	for (int i = size - 1; i >= 0; i--) {
		cout << mas[i] << ' ';
	}
	cout << endl;*/


	//дан массив из 15 элементов. заполнить его случайными
	//числами из диопазона 0-20. посчитать количество четных в массиве.


	/*const int size = 15;
	int mas[size];
	for (int i = 1; i < size; i++) {
		mas[i] = rand() % 21;
		cout << mas[i] << ' ';
	}
	cout << endl;
	int kol = 0;
	for (int i = 1; i < size; i++) {
		if (mas[i] % 2 == 0) {
			kol++;
		}
	}
	cout << "kolichestvo = " << kol << endl;*/



	/*const int size = 15;
	int mas[size];
	for (int i = 1; i < size; i++) {
		mas[i] = rand() % 21;
		cout << mas[i] << ' ';
	}
	cout << endl;
	int kol = 0;
	for (int i = 1; i < size; i++) {
		if (mas[i] % 5 != 0) {
			kol++;
		}
	}
	cout << "kolichestvo = " << kol << endl;*/


	/*const int size = 20;
	int mas[size];
	for (int i = 1; i < size; i++) {
		mas[i] = rand() % 31;
		cout << mas[i] << ' ';
	}
	cout << endl;
	int sum = 0;
	for (int i = 1; i <= size; i++) {
		if (mas[i] % 3 == 0 && mas[i] % 5 == 0) {
			sum += mas[i];
		}
	}
	cout << "summa = " << sum << endl;*/


	/*const int size = 17;
	int mas[size];
	for (int i = 1; i < size; i++) {
		mas[i] = rand() % 46;
		cout << mas[i] << ' ';
	}
	cout << endl;
	long long prois = 1;
	for (int i = 1; i <= size; i++) {
		if (mas[i] % 2 == 0 || mas[i] % 3 == 0) {
			prois *= mas[i];
		}
	}
	cout << "proisvedenie = " << prois << endl;*/


	/*const int size = 17;
	int mas[size];
	for (int i = 1; i < size; i++) {
		mas[i] = rand() % 53;
		cout << mas[i] << ' ';
	}
	cout << endl;
	int sum = 0;
	double aref = 0;
	int kol = 0;
	for (int i = 1; i <= size; i++) {
		if (i % 2 == 0) {
			sum += mas[i];
			kol++;
			
		}
	}
	aref = sum / kol;
	cout << "aref = " << aref << endl;*/


const int size = 25;
int mas[size];
for (int i = 0; i < size; i++) {
	mas[i] = rand() % 67;
	cout << mas[i] << ' ';
}
cout << endl;
long long prois = 1;
double kor = 0;
for (int i = 0; i < size; i++) {
	if (i % 2 != 0) {
		prois *= mas[i];
	}
}
	kor = sqrt(prois);
	cout << "koren = " << kor << endl;
}
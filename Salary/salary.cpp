#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//
//class K {
//	string ID, name;
//	int salary1, salary2, salary3, bonus, deduce;
//public:
//	int Sum(int sum) {
//		sum = salary1 + salary2 + salary3 + bonus - deduce;
//		return sum;
//	}
//};
//
//void main() {
//	ofstream outfile("C:\\student.dat");
//	
//}
void main() {
	ofstream outData("C:\\student.dat");
	string  id, name;
	int salary1, salary2, salary3, bonus, deduce, sum;

	for (int i = 0; i < 3; i++) {
		cout << "������ְ�����:"; cin >> id;
		cout << "������������"; cin >> name;
		cout << "��������:"; cin >> salary1;
		cout << "�Ӱ๤��:"; cin >> salary2;
		cout << "����:"; cin >> bonus;
		cout << "�۳�:"; cin >> deduce;
		sum = salary1 + salary2 + bonus - deduce;
		outData << id << " " << salary1 << " " << salary2 << " " << bonus << " " << deduce << sum;
	}
	outData.close();
}
#include "Cannot_Convert_Value.h"
#include "Conversion_Error.h"
#include "Insufficient_Privileges.h"
#include "sSoftware_Errors.h"
#include "error.h"

void menu(sSoftware_Errors arr);

int main() {
	setlocale(LC_ALL, "ru");
	system("color f0");

	cout << "�������. ������� 7." << endl
		<< "�������� ���������, � ������� ������� �������� �������: ������ � ���������(������������� ����������, ������� ���������������, ����������� ������������� ��������, ����������� �������� � ����������)."
		<< endl << "������� ����� ��� �������� ��������� ������(������� ���������� �� ������� �����), � ������� ����������� �������� �[]�."
		<< endl << "��� �������� ������ � ��� �������� ����������� �������� � == �, � != �, � = �.������������������ ������ ����������." << endl;
	sSoftware_Errors arr(0);
	menu(arr);
	return 0;
}
void menu(sSoftware_Errors arr) {
	bool exit = false;
	while (!exit) {
		cout << "1 - �������� ������ ���������� ����������" << endl
			<< "2 - �������� ������ ��������������" << endl
			<< "3 - �������� ������ ������������� ������������� ��������" << endl
			<< "4 - �������� ������ ���������� ����������" << endl
			<< "5 - �������� ������ �� �������" << endl
			<< "6 - �������� ��� ������" << endl
			<< "7 - ������� � �����" << endl
			<< "8 - ������� �� �������" << endl
			<< "0 - Exit" << endl;
		try
		{
			int num;
			cin >> num;
			cout << endl;
			switch (num)
			{
			case 1:
			{
				Insufficient_Privileges* obj1 = new Insufficient_Privileges(0);
				obj1->Read();
				Insufficient_Privileges* obj2 = new Insufficient_Privileges(0);
				obj2 = obj1;
				bool temp = false;
				cout << "�������� � �����(0) ��� �� �������(1)?";
				cin >> temp;
				if (temp) {
					int index;
					cout << "������� ������: ";
					cin >> index;
					arr.add(index, obj2);
				}
				else {
					arr.addToTheEnd(obj2);
				}
				break;
			}
			case 2:
			{
				Conversion_Error* obj = new Conversion_Error(0);
				obj->Read();
				bool temp = false;
				cout << "�������� � �����(0) ��� �� �������(1)?";
				cin >> temp;
				if (temp) {
					int index;
					cout << "������� ������: ";
					cin >> index;
					arr.add(index, obj);
				}
				else {
					arr.addToTheEnd(obj);
				}
				break;
			}
			case 3:
			{
				Cannot_Convert_Value* obj = new  Cannot_Convert_Value(0);
				obj->Read();
				bool temp = false;
				cout << "�������� � �����(0) ��� �� �������(1)?";
				cin >> temp;
				if (temp) {
					int index;
					cout << "������� ������: ";
					cin >> index;
					arr.add(index, obj);
				}
				else {
					arr.addToTheEnd(obj);
				}
				break;
			}
			case 4:
			{
				Insufficient_Privileges obj1(0);
				obj1.Read();
				Insufficient_Privileges obj2(0);
				obj2.Read();
				if (obj1 == obj2) {
					cout << "������ �����" << endl;
				}
				else if (obj1 != obj2) {
					cout << "������ �� �����" << endl;
				}
				break;
			}
			case 5:
			{
				int index;
				cout << "������� ������: ";
				cin >> index;
				if (arr[index] != 0) {
					arr[index]->Print();
				}
				break;
			}
			case 6:
			{
				cout << "���������� ���� ������ = " << arr.get_count() << endl;
				for (int i = 0; i < arr.get_count(); i++) {
					arr[i]->Print();
				}
				break;
			}
			case 7:
			{
				arr.deleteFromTheEnd();
				break;
			}
			case 8:
			{
				int index;
				cout << "������� ������: ";
				cin >> index;
				arr.del(index);
				break;
			}
			case 0:
				exit = true;
			}
			cout << endl;
		}
		catch (IndexError & e)
		{
			cout << "������ �������: " << e.get_message() << endl;
		}
		catch (...)
		{
			cout << "����������� ������." << endl;
		}
	}
}

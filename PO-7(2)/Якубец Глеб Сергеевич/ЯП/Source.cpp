//                 .-> ����������
//  �����������   /-> �������� -> �����������
//

#include "Classes.h"

int main() {
	setlocale(LC_ALL, "rus");
	Monarchy a1 = Monarchy("���������", 12, 10, nullptr, "�������������", 24, 8);
	Republic a2 = Republic("��������", 16, 15, nullptr, 2.86, "�������������");
	Kingdom a3 = Kingdom("�������", 14, 48, nullptr, "����������", 49, 4, "������� � ���������");
	State::show_list();



	return 0;
}
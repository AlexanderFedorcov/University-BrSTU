#pragma once
#include <iostream>

using namespace std;
class Education {

protected:

	char* person;
	int room;
	virtual void show() = 0;

public:

	Education();
	static Education* head; //��������� �� ������ ���������� ������ ��������
	Education* next;
	void add();
	//����������� ������� ��� ��������� ������
	static void look_up_list();
	virtual~Education();
};
#pragma once

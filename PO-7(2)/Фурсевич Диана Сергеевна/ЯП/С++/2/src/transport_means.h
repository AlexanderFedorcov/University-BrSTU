#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;

class transport_means { // ����� ������������ ��������

protected:
	char* type; //���
	int weight; // ���

public:
	transport_means();
	void add();
	virtual void show() = 0; // ������ ����������� ������� 
	static transport_means* head; //��������� �� ������ �������� ������
	transport_means* next;
	static void show_list(); //��� �������� ������
	~transport_means();
};
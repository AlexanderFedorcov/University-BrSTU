#pragma once
#include <iostream>

using namespace std;

class Person { //�� ��������� private
	char* Person_name;
	char* Street;
	int House;
public:

	Person(); //����������� ��� ����������
	Person(char* name, char* streeet, int number); //����������� � �����������
	Person(const Person& copyPerson); //����������� �����������
	~Person(); //����������

	void set_name(char* name); //������� ��� ��������� �������� ���� ���
	void set_streeet(char* streeet); //������� ��� ��������� �������� ���� �������
	void set_number(int number); //������� ��� ��������� �������� ���� ���
	void set(char* name, char* streeet, int number); //������� ��� ��������� �������� �����
	void show(); //������� ��� ��������� ������
	void view(Person a); //������� ��� ��������� ������ (�����, ����� ������� ����������� �����������, ����� ������ ���������� ������� �� ��������

};

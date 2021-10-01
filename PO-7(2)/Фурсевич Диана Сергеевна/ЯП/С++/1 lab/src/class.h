#pragma once
#include <iostream>

using namespace std;

class Person {

private:

	char* m_name; //��� (��������� �� ��������� ������)
	int m_age; //�������
	int m_floor; //���

public:

	Person(); //����������� ��� ���������� 
	Person(char* name, int age, int floor); //����������� � �����������
	Person(const Person &other); //����������� �����������
	~Person(); //����������

	// ��� ��������� � ��������� ����� ������
	char* GETName();  //��� ��������� �������� ���� ���
	int GETAge(); //��� ��������� �������� ���� �������
	int GETFloor(); //��� ��������� �������� ���� ���
	void SETName(char* name); //��� ��������� �������� ���� ���
	void SETAge(int age); //��� ��������� �������� ���� �������
	void SETFloor(int floor); //��� ��������� �������� ���� ���
	void SET(char* name, int age, int floor); // ������������� ���� ����� �������
	void Show(); //�������� ����� �������
	void View(Person);


};

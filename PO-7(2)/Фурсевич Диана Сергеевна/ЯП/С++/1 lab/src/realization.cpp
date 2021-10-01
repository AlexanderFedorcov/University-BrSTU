#include "class.h"

Person::Person() //����������� �� ��������� 
{
	cout << "�������� ����������� ��� ���������� ��� ������� " << this << endl;

}

Person::Person(char* name, int age, int floor) // ������ ������������� ����������-����� ������
{
	m_name = name;
	m_age = age;
	m_floor = floor;
	cout << "�������� ����������� � ����������� ��� ������� " << this << endl;
}

Person::Person(const Person &other) { //����������� �����������
	m_name = new char[100];
	m_name = other.m_name;
	m_age = other.m_age;
	m_floor = other.m_floor;
	cout << "����������� ����������� " << this << endl;
}


Person:: ~Person() {  //����������
	cout << "�������� ���������� ��� ������� " << this << endl;
}

char* Person::GETName() { //��� ��������� �������� ���� ���
	return m_name;
}

int Person::GETAge() { //��� ��������� �������� ���� �������
	return m_age;
}


int Person::GETFloor() { //��� ��������� �������� ���� ���
	return m_floor;
}

void Person::SETName(char* name) { //��� ��������� �������� ���� ���
	m_name = name;
}

void Person::SETAge(int age) { //��� ��������� �������� ���� �������
	m_age = age;
}

void Person::SETFloor(int floor) { //��� ��������� �������� ���� ���
	m_floor = floor;
}


void Person::SET(char* name, int age, int floor) { // ������������� ���� ����� �������
	m_name = name;
	m_age = age;
	m_floor = floor;
}



void Person::Show() { //�������� ����� �������
	cout << "��� �������� " << m_name << endl;
	cout << "������� " << m_age << endl;
	cout << "��� " << m_floor << endl << endl;
}

void Person::View(Person a) {
	a.Show();
}
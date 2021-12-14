#include "Class.h"

State::State() {
	name = "���������";
	form = "��� ������";
	area = 10000.43;
	cout << "����������� ��� ���������� ������ ��� ������� " << this << endl;
}

State::State(string nm, string frm, float ar) {
	name = nm;
	form = frm;
	area = ar;
	cout << "����������� ������ ��� ������� " << this << endl;
}

void State::set_name(string nm) {
		name = nm;
}

void State::set_form(string frm) {
		form = frm;
}

void State::set_area(float ar) {
		area = ar;
}

void State::read() {
	cout << "������� �������� ���-��" << endl;
	cin >> name;
	cout << "������� ����� ���������" << endl;
	cin >> form;
	cout << "������� �������" << endl;
	cin >> area;
}

void State::show() {
	cout << "�������� ������� " << this << endl << "H�������: " << name << endl << "����� ���������: " << form << endl << "�������: " << area << endl;
}

State::~State() {
	cout << "������ " << name << " ����������! ����������" << endl;
}

State::State(const State&) {
	cout << "������ �����������";
}
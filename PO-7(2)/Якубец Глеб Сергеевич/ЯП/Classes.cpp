#include "Classes.h"

State* State::begin = nullptr;

State::State(string nm, int ar, int popn, State* p_next) {
	if (begin == nullptr){
		begin = this;
		name = nm;
		area = ar;
		population = popn;
		ptr_next = p_next;
	}
	else {
		State* cur = this->begin;
		while (cur->ptr_next != nullptr) {
			cur = cur->ptr_next;
		}
		cur->ptr_next = this;
		name = nm;
		area = ar;
		population = popn;
	}
}

Republic::Republic(string nm, int ar, int popn, State* p_next, float tm, string tp): State(nm, ar, popn, p_next) {
	term = tm;
	type = tp;
}
Republic::~Republic() {
	cout << "���������� ����������" << endl;
}
void Republic::show() {
	cout << "���������� " << name << endl << " �������: " << area << endl << " ���������: " << population << endl << " ���. ������ � ��������: " << term << endl << " ���: " << type << endl << endl;
}

Monarchy::Monarchy(string nm, int ar, int popn, State* p_next, string tp, int ag, int gn): State(nm, ar, popn, p_next) {
	type = tp;
	age_of_monarch = ag;
	gen = gn;
}
Monarchy::~Monarchy() {
	cout << "�������� ����������" << endl;
}
void Monarchy::show() {
	cout << "�������� " << name << endl << " �������: " << area << endl << " ���������: " << population << endl << " ������� �������: " << age_of_monarch << endl << " ��������� ��������: " << gen << endl << " ���: " << type << endl << endl;
}

Kingdom::Kingdom(string nm, int ar, int popn, State* p_next, string tp, int ag, int gn, string tp_of_cr) : Monarchy(nm, ar, popn, p_next, tp, ag, gn) {
	type_of_crown = tp_of_cr;
}
Kingdom::~Kingdom() {
	cout << "����������� ����������" << endl;
}
void Kingdom::show() {
	cout << "����������� " << name << endl << " �������: " << area << endl << " ���������: " << population << endl << " ������� �������: " << age_of_monarch << endl << " ��������� ��������: " << gen << endl << " ���: " << type << endl << " ��� ������: " << type_of_crown << endl << endl;
}

void State::show_list() {
	State* cur = begin;
	while (cur != nullptr) {
		cur->show();
		cur = cur->ptr_next;
	}
}


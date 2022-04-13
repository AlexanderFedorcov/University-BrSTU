#include "exam.h"

Exam::Exam() : Education() {}

Exam::Exam(char* person, int room, int kol) : Education() {

	this->person = person;
	this->room = room;
	this->kol = kol;

}

void Exam::set(char* person, int room, int kol) {

	this->person = person;
	this->room = room;
	this->kol = kol;

}

void Exam::show() {

	cout << "�������������: " << person << endl;
	cout << "���������: " << room << endl;
	cout << "���������� ���������: " << kol << endl;

}
Exam::~Exam() {}

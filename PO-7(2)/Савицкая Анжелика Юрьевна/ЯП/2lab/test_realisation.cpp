#include "test.h"

Test::Test() : Education() {}

Test::Test(char* person, int room, int hull) : Education() {

	this->person = person;
	this->room = room;
	this->hull = hull;

}

void Test::set(char* person, int room, int hull) {

	this->person = person;
	this->room = room;
	this->hull = hull;

}

void Test::show() {

	cout << "�������������: " << person << endl;
	cout << "���������: " << room << endl;
	cout << "������: " << hull << endl;

}

Test::~Test() {

}

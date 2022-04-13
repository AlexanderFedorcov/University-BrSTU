#include "Cannot_Convert_Value.h"
Cannot_Convert_Value::Cannot_Convert_Value() {}
Cannot_Convert_Value::Cannot_Convert_Value(int dif) {
	this->dif = dif;
}
Cannot_Convert_Value::Cannot_Convert_Value(const Cannot_Convert_Value& other) {
	dif = other.dif;
}
Cannot_Convert_Value::~Cannot_Convert_Value() {}
bool Cannot_Convert_Value::operator == (const Cannot_Convert_Value& right) {
	return (dif == right.dif);
}
bool Cannot_Convert_Value::operator != (const Cannot_Convert_Value & right) {
	return !(*this == right);
}
Cannot_Convert_Value& Cannot_Convert_Value::operator = (const Cannot_Convert_Value & right) {
	dif = right.dif;
	return *this;
}
void Cannot_Convert_Value::Print() {
	cout << "������ - ���������� ������������� ��������" << endl << "��������� ������ 	(�� 0 �� 10):" << dif << endl;
}
void Cannot_Convert_Value::Read() {
	cout << "������� ��������� ������ (�� 0 �� 10 ): ";
	cin >> dif;
}

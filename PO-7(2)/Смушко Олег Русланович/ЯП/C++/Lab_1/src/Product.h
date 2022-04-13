#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>

using namespace std;

class Product {
	string name;
	int amount;
	float cost;

public:
	Product();  //����������� ��� ����������
	Product(string name_, int amount_, float cost_);  //����������� � �����������
	Product(const Product& prod);  //����������� �����������
	~Product();  //����������
	string get_name() {  //������� ��� ������� � ���� name
		return name;
	}
	int get_amount() {  //������� ��� ������� � ���� amount
		return amount;
	}
	float get_cost() {  //������� ��� ������� � ���� cost
		return cost;
	}
	void print();  //������� ������ ����������� ����� ���������� ������
	void setName(string name_);  //������� ��� ��������� �������� ���� name
	void setAmount(int amount_);  //������� ��� ��������� �������� ���� amount
	void setCost(float cost_);  //������� ��� ��������� �������� ���� cost
};
#endif PRODUCT_H
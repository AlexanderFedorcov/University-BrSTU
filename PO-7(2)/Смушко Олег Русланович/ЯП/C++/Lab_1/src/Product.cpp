#include "Product.h"

Product::Product() :  //���������� ������������ ��� ����������
	name("Bread"), amount(3), cost(45.99)
{
	cout << "Constructor without parameters called for Product: " << name << endl;
}

Product::Product(string name_, int amount_, float cost_) :  //���������� ������������ � �����������
	name(name_), amount(amount_), cost(cost_)
{
	cout << "Constructor with parameters called for Product: " << name << endl;
}

Product::~Product() {  //���������� �����������
	cout << "Destructor called for Product: " << name << endl;
}

Product::Product(const Product&prod):  //���������� ������������ �����������
	name(prod.name), amount(prod.amount), cost(prod.cost)
{
	cout << "Copying was there." << endl;
}

void Product::print() {  //���������� ������� ������ ���������� ����� ���������� ������ � �������
	cout << "Name: " << name << "; Amount: " << amount << "; Cost: " << cost << endl;
}

void Product::setName(string name_) {  //���������� ������� ��������� �������� ���� name
	name = name_;
}

void Product::setAmount(int amount_) {  //���������� ������� ��������� �������� ���� amount
	amount = amount_;
}

void Product::setCost(float cost_) {  //���������� ������� ��������� �������� ���� cost
	cost = cost_;
}

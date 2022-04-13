#include "Product.h"

int main() {
	Product product_1;  //����� ������������ ��� ����������
	Product product_2("Sugar", 12, 1200.45);  //����� ������������ � �����������
	Product product_3(product_1);  //����� ������������ �����������
	Product* product_4 = new Product("Apple", 2, 540.72); //������������ �������� ���������� ������ � ������� ������������ � �����������

	product_1.print();  
	product_4->setCost(999.99);  
	product_4->print();
	delete(product_4);  //����� �����������

	Product set[3] = { Product("Juice", 11, 650), Product("Fish", 50, 900.19), Product("Tea", 9, 210.44) };
	//�������� ������� ����������� ������
	set[2].setAmount(39);
	set[2].print();

	void(Product:: * pointer_print)(); //�������� ��������� �� �������
	pointer_print = &Product::print;
	(set[0].*pointer_print)();

	Product* pointer_object = &product_3;  //�������� ��������� �� ��������� ������
	cout << pointer_object->get_name() << endl;

	return 0;
}
#include "car.h" 


car::car() : transport_means() {}
	
car::car(char* type, int weight, char* mark) {
		this->type = type;
		this->weight = weight;
		this->mark = mark;
	}
void car::car_set(char* type, int weight, char* mark) {
		this->type = type;
		this->weight = weight;
		this->mark = mark;
	}
void car::show()  {
		cout << "���: " << type << endl;
		cout << "���: " << weight << endl;
		cout << "�����: " << mark << endl;

	}

car::~car() {}

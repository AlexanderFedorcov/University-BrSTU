#include "express .h"


express::express() :train() {}

express::express(char* type, int weight, char* kind, char* otkuda, char* kuda) {
		this->type = type;
		this->weight = weight;
		this->kind = kind;
		this->otkuda = otkuda;
		this->kuda = kuda;
	}
void express::expres_set(char* type, int weight, char* kind, char* otkuda, char* kuda) {
		this->type = type;
		this->weight = weight;
		this->kind = kind;
		this->otkuda = otkuda;
		this->kuda = kuda;
	}

void express::show() {
		cout << "���: " << type << endl;
		cout << "���: " << weight << endl;
		cout << "���: " << kind << endl;
		cout << "������ ������������: " << otkuda << endl;
		cout << "���� ���������: " << kuda << endl;

	}

express::~express() {}

#include "train.h"

train::train() : transport_means() {}
train::train(char* type, int weight, char* kind) {
		this->type = type;
		this->weight = weight;
		this->kind = kind;
	}
void train::train_set(char* type, int weight, char* kind) {
		this->type = type;
		this->weight = weight;
		this->kind = kind;
	}
void train::show()  {
		cout << "���: " << type << endl;
		cout << "���: " << weight << endl;
		cout << "���: " << kind << endl;
	}

train::~train() {}
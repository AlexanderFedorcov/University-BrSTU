#pragma once
#include "transport_means.h"

class car : public transport_means { // ����� ���������� 

protected:
	char* mark; 
public:
	car();
	car(char* type, int weight, char* mark);
	void car_set(char* type, int weight, char* mark);
	void show() override;
	~car();
};
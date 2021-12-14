#pragma once

#include <iostream>
#include <string>

using namespace std;


class State {                  //����������� ������� �����
protected:	
	State* ptr_next;
	string name;
	int area;
	int population;
public:
	static State* begin;
	State(string, int, int, State*);
	static void show_list();
	virtual void show() = 0;
};

class Republic : public State {                 //����� ����������
protected:
	float term;
	string type;
public:
	Republic(string, int, int, State*, float, string);
	~Republic();
	void show();
};

class Monarchy: public State {                  //����� ��������
protected:
	string type;
	int age_of_monarch;
	int gen;
public:
	Monarchy(string, int, int, State*, string, int, int);
	~Monarchy();
	void show();
};

class Kingdom: public Monarchy {                //����� �����������
protected:
	string type_of_crown;
public:
	Kingdom(string, int, int, State*, string, int, int, string);
	~Kingdom();
	void show();
};
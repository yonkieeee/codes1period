#pragma once
#include <iostream>
#include <cassert>
using namespace std;

class Stack {
private:
	int* arr;//��������� �����
	int count;//���������
	int topp;//������� �������� � �����

public:

	Stack();//����������� ��� ���������

	bool empty();//�������� �� ���� ������

	void push(int value);//��������� �������� � ����
	int pop();//�������� �������� � �����
	int size();//��������� �����
	int top();//������� ������� �������
	void print();//��������� �����
	void expand();//��������� ������ �� ��� push()
	void reduce();//��������� �� ��� pop()

	~Stack();
};

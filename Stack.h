#pragma once
#include <iostream>
#include <cassert>
using namespace std;

class Stack {
private:
	int* arr;//динамічний масив
	int count;//розмірність
	int topp;//кількість елементів в стеку

public:

	Stack();//конструктор без параметрів

	bool empty();//перевірка чи стек пустий

	void push(int value);//додавання елементів в стек
	int pop();//віднімання елементів з стеку
	int size();//розмірність стеку
	int top();//останній доданий елемент
	void print();//виведення стеку
	void expand();//збільшення масиву під час push()
	void reduce();//зменшення під час pop()

	~Stack();
};

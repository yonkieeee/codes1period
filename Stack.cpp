#include "Stack.h"

Stack::Stack() {
    count = 0;//��������� ��������� ������
    arr = new int[count];//��������� ������ �� ������� count
    topp = -1;//��������� �������� ������ �����
}

bool Stack::empty()
{
    if (topp == -1)
        return true;
    else
        return false;
}

void Stack::push(int value)
{
    expand();//���� �� ������ ������� �� �����, ���������� �����
    topp++;
    arr[topp] = value;
}

int Stack::pop()//������� �������� ���������� ��������� ��������
{
    if (empty()) {
        return -1;//���� ���� ������ �� ��� �� �� �� ��������
    }
    else {
        int popValue = arr[topp];
        arr[topp] = 0;
        topp--;
        reduce();//��������� ������ ����������, ���� ���� �� ����� ��������
        return popValue;
    }
}

int Stack::size()
{
    return (topp + 1);
}

int Stack::top()
{
    if (topp == -1) {
        return 0;
    }
    else {
        return arr[topp];
    }
}

void Stack::print()
{
    cout << "Your stack is\n";

    for (int i = topp; i >= 0; i--) {
        cout << arr[i] << endl;
    }
}

void Stack::expand() {
    int newcount = count + 1;//��������� ���� ���������
    int* newArr = new int[newcount];//��������� ����� �����

    for (int i = 0; i < count; i++) {
        newArr[i] = arr[i];//������� �������� ������� ������ � �����
    }

    delete[] arr; // ��������� ���'��� ������������ ������
    arr = newArr;//������������� ����
    count = newcount;
}

void Stack::reduce() {
    int newCount = count - 1;
    int* newArr = new int[newCount];

    for (int i = 0; i < newCount; i++) {
        newArr[i] = arr[i];
    }
    delete[] arr;

    arr = newArr;
    count = newCount;
}

Stack::~Stack()
{
    delete[]arr;
}
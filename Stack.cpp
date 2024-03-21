#include "Stack.h"

Stack::Stack() {
    count = 0;//початкова розмірність масиву
    arr = new int[count];//створення масиву за основою count
    topp = -1;//початкове значення розміру стеку
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
    expand();//коли ми додаємо елемент до стеку, збільшується масив
    topp++;
    arr[topp] = value;
}

int Stack::pop()//повертає значення останнього забраного елементу
{
    if (empty()) {
        return -1;//якщо стек пустий то нам не має що забирати
    }
    else {
        int popValue = arr[topp];
        arr[topp] = 0;
        topp--;
        reduce();//розмірність масиву зменшується, коли стек має менше елементів
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
    int newcount = count + 1;//створюємо нову розмірність
    int* newArr = new int[newcount];//створюємо новий масив

    for (int i = 0; i < count; i++) {
        newArr[i] = arr[i];//копіюємо значення старого масиву в новий
    }

    delete[] arr; // Звільняємо пам'ять попереднього масиву
    arr = newArr;//перевизначаємо змінні
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
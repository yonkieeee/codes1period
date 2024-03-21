#include "abstract.h"
#include "Pyramind.h"
#include "ball.h"

using namespace std;

int main() {

    ifstream file("shape.txt");

    if (!file.is_open()) {
        cout << "Error!";
        return 0;
    }

    const int n = 100;
    Shape* shape[n];
    string ShapeName[n];
    int count = 0;

    string shapeName;
    float p1, p2, p3;

    while (file >> shapeName && count < n) {

        if (shapeName == "Pyramid") {
            file >> p1 >> p2 >> p3;
            shape[count] = new Pyramind(p1, p2, p3);
            ShapeName[count] = shapeName;
            count++;
        }
        else if (shapeName == "Ball") {
            file >> p1;
            shape[count] = new Ball(p1);
            ShapeName[count] = shapeName;
            count++;
        }
        else {
            continue;
        }
    }

    for (int i = 0; i < count; i++) {
        cout << "Type of shape: " << ShapeName[i];
        cout << "\nVolume: " << shape[i]->findCap();
        cout << "\n------------------" << endl;
    }

    file.close();

    for (int i = 0; i < count; ++i) {
        delete[]shape[i];
    }

    return 0;
}

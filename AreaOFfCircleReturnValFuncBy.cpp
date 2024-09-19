#include<iostream>
using namespace std;

float getArea(float radious) {
    return 3.14f * radious * radious;
}

int main() {
    float area, radious;
    cout << "Enter radius: ";
    cin >> radious;
    area = getArea(radious);
    cout << "Area: " << area << endl;

    return 0;
}

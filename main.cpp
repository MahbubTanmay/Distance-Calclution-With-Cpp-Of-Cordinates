#include <iostream>
using namespace std;


//30




class Distant{

int a, b;

public:

void Point(int x, int y) {

    a = x;
    b = y;
}

void Display(Distant o1, Distant o2) {

    int Distance = sqrt(((o1.a - o2.a) * (o1.a - o2.a)) + ((o1.b - o2.b) * (o1.b - o2.b)));

    cout << "Distance between points (" << o1.a << ", " << o1.b << ") and (" 
         << o2.a << ", " << o2.b << ") is: " << Distance << endl;
}
};



 int main() {

Distant point1, point2, Dist;


point1.Point(3, 0);
point2.Point(0, 4);

Dist.Display(point1, point2);

    return 0;
}

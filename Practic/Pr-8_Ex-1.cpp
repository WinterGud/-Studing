#include <cmath>
#include <iostream>
#include <cstdlib>
using namespace std;

float middleOfSegmentForx0(float x1, float x2) {
    float x0;
    x0 = (x2 - x1) / 2;
    return x0;
}

float middleOfSegmentFory0(float y1, float y2) {
    float y0;
    y0 = (y2 - y1) / 2;
    return y0;
}




int main() {

    cout << "x0 = " << middleOfSegmentForx0(5, 6) << "; y0 = " << middleOfSegmentForx0(6, 8);

    cout << endl;
    system("pause");
    return 0;
}

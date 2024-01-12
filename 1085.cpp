#include <iostream>
#include <cmath>
using namespace std;
int main(void) {
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int dx = (x <= abs(x - w)) ? x : abs(x - w);
    int dy = (y <= abs(y - h)) ? y : abs(y - h);
    cout << ((dx >= dy) ? dy : dx);
    return 0;
}
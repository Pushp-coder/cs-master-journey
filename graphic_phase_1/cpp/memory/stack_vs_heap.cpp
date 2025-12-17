#include <iostream>
using namespace std;

struct Vec3 {
    float x, y, z;
    };

 int main() {
    Vec3 stackVec{1, 2, 3};          // stack
    Vec3* heapVec = new Vec3{4,5,6}; // heap

    cout << "Stack Vec: " << stackVec.x << endl;
    cout << "Heap Vec: " << heapVec->z << endl;

    delete heapVec; // VERY important
    return 0;
}

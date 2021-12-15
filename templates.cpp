#include <iostream>

using namespace std;

template <class T>
class Vector{
    public:
        T *arr;
        int size;
        Vector(int m){
            size = m;
            arr = new T[size];
        }
    
    T dotProduct(Vector &v){
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    Vector<float> v1(3);
    v1.arr[0] = 1.2;
    v1.arr[1] = 2.4;
    v1.arr[2] = 3.1;
    Vector<float> v2(3);
    v2.arr[0] = 4.42;
    v2.arr[1] = 5.2;
    v2.arr[2] = 6.5;
    float res = v1.dotProduct(v2);
    cout<<res<<endl;
    return 0;
}
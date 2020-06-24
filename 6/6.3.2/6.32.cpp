#include<iostream>

using std::cout;

int &get(int *array, int index) {
    return array[index];
} 

int main() {
    int ia[10];
    int i = 9;
    for (int i = 0; i != 10; ++i) {
        get(ia, i) = i;
    }
    // get(ia, i) = 3;
    // cout << i << '\n';

    for (int i = 0; i != 10; ++i) {
        cout << ia[i] << '\n';
    }


    return 0;
}
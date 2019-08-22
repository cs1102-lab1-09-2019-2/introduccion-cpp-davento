#include <iostream>
using std::cout, std::vector;

int main() {

    vector<int> a {1, 2, 3, 4, 5};
    for (auto i : a) {
        cout<<i<<" ";
    }
    return 0;
}

#include <iostream>

#include <vector>

using std::cout;

using std::vector;


int main() {


    vector<int> a {1, 2, 3, 4, 5};

    for (auto i : a) {

        cout<<i<<" ";

    }

    cout<<"\n";

    return 0;

}
#include <string>

#include <iostream>

#include <vector>

using std::vector;

using std::string;

using std::cout;

int main() {

    int a = 5;


    string b;


    b = "Esto es una cadena";

    cout<<a<<"\n";

    cout<<b<<"\n";

    cout<<b[0]<<"\n";

    cout<<b[4]<<"\n";


    vector<int> numeros{4, 8, 9, 5, 6, 7};

    cout<<numeros[0]<<"\n";


    float numero{5.16};

    cout<<numero<<"\n";


}
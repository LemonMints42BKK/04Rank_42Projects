// Learning C++
// Exercise 02_04
// Type inference with auto, by Eduardo Corpeño

#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
auto    a = 42;
auto    b = 24456734567;
auto    c = 4.2f;
auto    d = 42.4242;
auto    e = true;
auto    f = 'F';

cout << typeid(a).name() << endl;
cout << typeid(b).name() << endl;
cout << typeid(c).name() << endl;
cout << typeid(d).name() << endl;
cout << typeid(e).name() << endl;
cout << typeid(f).name() << endl;
    return (0);
}

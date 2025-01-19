
#include <iostream>

using namespace std;

int f(int x){
x+=8;
return x;
}

int main() {
cout << f(5) << endl;
return 0;
}
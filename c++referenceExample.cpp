#include <iostream>

using namespace std;



int add(int& x, int& y){

x = 5;

return x+y;
}

int main()
{

int a=2;
int b=5;

cout<<"addintin : "<< add(a,b)<<"\n";

cout<<a<<"\n";



    cout << "Hello world!" << endl;
    return 0;
}


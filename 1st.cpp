#include <iostream>

using namespace std;

int fun1 (int,int);
int fun2(int);

int main()
{
    int a=5;
    int b=10;

    fun2((fun1)(a,b));


    return 0;
}

int fun1 (int a,int b){

    cout << "enter the value of i : ";
    cin >> a;

    cout << "enter the value of j : ";
    cin >> b;

    return a+b;
    
}

int fun2 (int m){

    cout << "The sum of a and b : "<< m;

}
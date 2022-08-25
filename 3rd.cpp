#include <iostream>

using namespace std;

int fact(int);

int main(int argc, char const *argv[])
{
    int num;

    cout << "Enter the you want factorial of : ";
    cin >> num;



    cout <<" your factoral is : " << fact(num);

    return 0;
}

int fact (int num){

    if (num > 1){

        return num*fact(num-1);

    }
    else {
        return 1;
    }

}



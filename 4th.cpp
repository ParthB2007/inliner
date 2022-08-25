#include <iostream>

using namespace std;

inline int tab (int);
int main(int argc, char const *argv[])
{

    int num;

    cout << "Enter the number you want talbe of : ";
    cin >> num;

    tab(num);

        return 0;
}

int tab (int num){
  
    cout << "Youe table of "<<num << " : \n\n";

    for (int i=1;i<=11;i++){

       
        cout << num << " * " << i << " = " << num*i<<endl;

    }
}
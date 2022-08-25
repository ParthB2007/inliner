#include <iostream>

using namespace std;

 void swap ();

int main(int argc, char const *argv[]){
    
    

    swap ();
    return 0;
}

void swap ()
{
    int arr1[3],arr2[3],arr[3],i;

    cout << "Enter your 1st array : ";
    for (i=0;i<3;i++){

    cin >> arr1[i];

    }

    cout << "Enter your 2nd array : ";

    for (i=0;i<3;i++){

        cin >> arr2[i];

    }

    for (i=0;i<3;i++){
        arr[i]=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=arr[i];

    }

    cout << "Your first array after swap : ";

    for (i=0;i<3;i++){

        cout << arr1[i] ;
    
    }

    cout <<endl << "Your second array after swap : ";

    for (i=0;i<3;i++){

        cout << arr2[i] ;
    
    }
}

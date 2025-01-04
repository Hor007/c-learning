#include <iostream>
using namespace std;
int main ()
{
    int apple_cout=2; //Number of apples
    int orange_cout=3; // Number of oranges
    int total_fruit{apple_cout + orange_cout}; //Total number of fruit
    cout << "The valure of apple_cout is"  <<apple_cout<<
    endl;
    cout << "The value of orange_cout is" << orange_cout<<
    endl;
    cout << "The value of total_fruit is" << total_fruit<<
    endl;
    int i, n ,sum=0;
    n=5;
    cout << "Enter Number";
    for(i=1; i<=n; i++){
        sum+=i;
    }
    cout<<"The result " <<sum ;
    return 0;
}

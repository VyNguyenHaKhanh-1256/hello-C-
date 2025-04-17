#include <iostream>
using namespace std;
int main()
{
    //khai báo biến
    int n;
    cout<<"Moi nhap so nguyen: ";
    cin>>n;

    string anwers = (n % 2 == 0) ? "Chan" : "Le";
    cout<<anwers;

    return 0;
}
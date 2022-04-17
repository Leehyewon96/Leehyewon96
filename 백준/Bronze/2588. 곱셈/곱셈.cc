#include <iostream>
using namespace std;

int main()
{
    int A, B;
    
    cin >> A;
    cin >> B;
    
    cout << A * (B % 10) << endl;
    cout << A * ((B / 10) % 10) << endl;
    cout << A * ((B / 100) %10) << endl;
    cout << A * B << endl;
    
    return 0;
}
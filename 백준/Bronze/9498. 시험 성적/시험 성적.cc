#include <iostream>

using namespace std;

int main()
{
    int score;
    char grade;

    cin >> score;

    if(90 <= score && score <= 100)
        grade = 'A';
    else if(80 <= score && score <= 89)
        grade = 'B';
    else if(70 <= score && score <= 79)
        grade = 'C';
    else if(60 <= score && score <= 69)
        grade = 'D';
    else if(score <= 59)
        grade = 'F';

    cout << grade << endl;

    return 0;
}
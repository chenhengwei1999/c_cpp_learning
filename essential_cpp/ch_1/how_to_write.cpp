#include <iostream>
#include <string>
using namespace std;

/*
    "int" is "keyword"关键字 in c++;
*/
int main()
{
    string user_name;
    cout << "Please enter your first name: ";
    cin >> user_name;
    cout << "\n"
         << "Hello, "
         << user_name 
         << " ... and goodbye!\n";

    return 0;
}
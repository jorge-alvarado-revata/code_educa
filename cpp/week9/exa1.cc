#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string s = "12127765 121255   1212 555555555   1212 1           121";
    istringstream iss(s);

    do
    {
        string subs;
        iss >> subs;
        cout << "Substring: " << subs << endl;
    } while (iss);
}
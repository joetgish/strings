// Utility program to practice string operations
//


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string valA = "houseboatestablish";
    
    cout << "length =" << valA.length() << endl;
    
    for(int ix = 0; ix < valA.length(); ix++)
    {
        cout << valA.at(ix) << endl;
    
    }
    
    valA.erase(3,6);
    cout << valA << endl;
    


    return 0;
}

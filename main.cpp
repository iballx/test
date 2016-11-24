#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
    //This is a mod on the master while the my_mod branch is active
    cout << "Hello world!" << endl;
    vector<string> clArgs {};
    for (int i {}; i != argc; ++i)
    {
        clArgs.push(argv[i]);
    }
    
    for (vector<string>.iterator i {clArgs.begin()}; i != clArgs.end(); ++i)
    {
        cout << i << endl;
    }
    cout << argc << endl;
    cout << "Test mod" << endl;
    return 0;
}
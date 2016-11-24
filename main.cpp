#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
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
    //mod on branch
    return 0;
}
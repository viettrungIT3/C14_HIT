#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    //ofstream f("Test2.txt", ios::app);    xuất file
    // ghi de : ios::out
    // ghi them: ios::app
    //f<<"End"<<endl;
    //f.close();

    // ifstream f("inPut.txt", ios::in);    //  đọc file
    // char s[255];
    //f.getline( s, 255);
    // while ( !f.eof())       // đọc cả file theo từng dòng đúng form
    // {
    //     f.getline( s, 255);
    //     cout<<s<<endl;
    // }
    // while ( !f.eof())       // đọc từng từ một
    // {
    //     f>>s;
    //     cout<<s<<endl;
    // }

    // ofstream f("FILE2.txt", ios::app);
    // f<<"7 4 4 2"<<endl;
    // f.close();

    ofstream f("FILE3.txt", ios::app);
    ifstream f("FILE.txt", ios::in);
    f.copyfmt(FILE1.txt);
    f.close();
    return 0;
}

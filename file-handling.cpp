#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    ofstream w;
    ifstream f;

    f.open("tmp.txt");

    char str[30],ch;

    if(f!=NULL)
    {
        cout<<"file exists"<<endl;

        while(!f.eof())
        {
           // f>>ch;   // Traditional method which will not escpae special characters and spaces
                cout<<ch;
            f.get(ch);

        }


    }
    else {
        w.open("tmp.txt");
        w.close();
    }

    f.close();





    return 0;
}

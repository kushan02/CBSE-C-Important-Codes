#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string.h>

using namespace std;

struct data
{
    int rn;
    char type;
    char name[30];
};

int main()
{
    ofstream fout;ifstream fin;


        fout.open("data.txt",ios::binary);

        data obj; // Create instance of our structure;

    for (int i = 0; i < 3; ++i) {
        cout<<endl<<"Loop "<<i<<endl;
        cout<<"int: ";cin >> obj.rn;
        cout<<"char: ";cin >> obj.type;
      // cout<<"string: ";
        //gets(obj.name);(obj.name);
        strcpy(obj.name,"string");

        //    while(fout.write((char *)&obj, sizeof(obj)));
        fout.write((char *)&obj, sizeof(data));
    }

    fout.close();

    fin.open("data.txt",ios::binary);

    cout<<"Original Content is";

    fout.open("tmp.txt",ios::binary);

    while(fin.read((char *)&obj, sizeof(data)))
    {
        cout<<endl;
        cout<<obj.name<<" ";
        cout<<obj.type<<" ";
        cout<<obj.rn<<" ";

        if (obj.rn==0)
        {
            //continue;
            obj.rn=99;
        }



        fout.write((char*)&obj, sizeof(data));



    }

    cout<<endl<<"new content is"<<endl;

    fin.close();
    fout.close();

    fin.open("tmp.txt",ios::binary);
    fout.open("data.txt",ios::binary);

    while(fin.read((char*)&obj, sizeof(data)))
    {
        fout.write((char*)&obj, sizeof(data));
    }

    fout.close();
    fin.close();

    fin.open("data.txt",ios::binary);


    while(fin.read((char *)&obj, sizeof(data)))
    {
        cout<<endl;
        cout<<obj.name<<" ";
        cout<<obj.type<<" ";
        cout<<obj.rn<<" ";


    }

    fin.close();

    remove("data.txt");
    rename("tmp.txt","data.txt");


    return 0;



    }



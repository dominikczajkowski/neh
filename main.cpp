#include <iostream>
#include <regex>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    int machN, taskN;
    string header;
    regex ptt("data.*");
    int  *tasks;

    fstream f("data.txt");
    while(1)
    {
        while(1)
        {
            f >> header;
            if (regex_match(header,ptt))
                break;
        }
        if(f.eof()) break;
        f >> machN >> taskN;
        tasks = new int[machN*taskN];
        for(int i=0;i<machN*taskN;i++)
            f >> tasks[i];

        for(int i=0;i<machN*taskN;i++)
        {
            cout << tasks[i] << " ";
            if (i % machN == 0)
                cout << endl;
        }


        cout << endl;


    }
    return 0;
}


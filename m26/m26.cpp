#include <iostream>
#include<cstdlib>
#include<fstream>
#include<string>
using namespace std;



void typer()
{

}
void typer(string file_name)
{
    fstream code;
    code.open(file_name+".txt", std::ios::app);//? xDDD
    while (true)
    {
        string content;
        getline(cin, content);
        int a=content.length();
        if (content=="/end")
        {
            break;
        }
        else 
        {
            code << content;
            
        }
        code.close();
    } 
}
int main()
{
    string file_name;
    cout << "\t";
    cin >> file_name;
    ifstream infile(file_name + ".txt");
    if (!infile.bad())
    {
        cout << infile.rdbuf();
    }
    else
    {
        //typer();
    }
    typer(file_name);

    return 0;
}


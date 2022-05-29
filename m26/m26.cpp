#include <iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<Windows.h>
#include<stdio.h>

using namespace std;


   
void decoder(string file_name)
{

}
void encoder(string file_name)
{
    ifstream infile(file_name + ".txt");
    if (!infile.bad())
    {
        cout << infile.rdbuf();
    }
    else
    {
        //typer();
    }
}
void typer(string file_name)
{

    ifstream infile(file_name + ".txt");
    if (!infile.bad())
    {
        cout << infile.rdbuf();
    }
    else
    {
        //typer();
    }
    fstream code;
    code.open(file_name + ".txt", std::ios::app);//? xDDD
    while (true)
    {
        string content;
        getline(cin, content);
        if (content == "/end")
        {
            code.close();
            break;
        }
        else
        {
            code << content << endl;

        }
        content.clear();
    }
    
    system("cls");
}
void deleter(string file_name)
{
    string extension = ".txt";
    const char* c_extension = extension.c_str();
    const char* c_file_name = (file_name.c_str());
    remove(c_file_name);
}
int mainmenu()
{
    string file_name;
    int choice;
    cout << "\n\n\n1-write to file\n2-code file\n3-decode file\n4-delete file\n5-Close program\nChoice:\t";
    cin >> choice;
    switch (choice)
    {
    case 1:

        cout << "\tfile name:";
        cin >> file_name;
        system("dir");
        typer(file_name);
        break;

    case 2:
        cout << "\tfile name:";
        cin >> file_name;
        system("dir");     
        encoder(file_name);
        break;

    case 3:
        cout << "\tfile name:";
        cin >> file_name;
        system("dir");
        decoder(file_name);
        break;

    case 4:

        cout << "select file to delete:\n";
        system("dir");
        printf("\n\n\n\tNOTE:\n\tremember to add \".txt\" extension\n\tYou can't remove directiores!\n\n\n");
        cin >> file_name;
        deleter(file_name);
        break;
    case 5:
        exit(0);
        break;
    default://just give good number you stupid wanker 
        mainmenu();
        break;
    }
}

int main()
{
    system("md textFiles");
    system("cd textFiles");
    system("cls");
    do
    {
        mainmenu();
    } while (true);
    return 0;
}


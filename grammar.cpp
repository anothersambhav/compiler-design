#include<iostream>
using namespace std;
int main()
{
    string str=" ";
    cout<<"grammar is S-> aS / bS / ab / epsilon \nEnter the string: ";
    cin>>str;
    int k=1;
    if(str != " ")
    {
        for(int i=0;i<str.length();i++)
        {
            if(str[i] != 'a' && str[i] != 'b')
            {
                k=0;
                break;
            }
        }
    }
    if(k==0)
    {
        cout<<"this is not a language for this grammar"<<endl;
    }
    else
    {
        cout<<"this is a language for this grammar"<<endl;
    }
    return 0;
}
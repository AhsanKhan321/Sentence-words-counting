#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int j=1;
    cout<<"Enter words = ";
     getline(cin,s);
   cout<<s<<" " <<s.length()<<endl;
    for(int i=0;i<=s.length();i++)
    {
    if(s[i]==' ')
    { if(s[i+1]!=' ')
        j++;
    }
    }
    cout<<"Total Words = "<<j<<endl;
    return 0;

}
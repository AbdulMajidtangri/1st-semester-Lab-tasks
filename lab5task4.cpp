#include<iostream>
using namespace std;
int main()
{
    char a=65;
    for (a;a<=90;a++)
    {
        if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        cout<<a<<endl;

    else cout<<"\t\t\t"<<a<<endl;
    }
return 0;
}
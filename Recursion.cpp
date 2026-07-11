#include<iostream>
using namespace std;

void printName(int cnt)
{
    
if (cnt==5)
return;
 cout<<"KHIZAR"<<endl;

printName(cnt+1);

}

int main()
{
    printName(0);
    return 0;
}
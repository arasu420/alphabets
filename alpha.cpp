#include <iostream>
using namespace std;
int main()
{
char a;
cout << "Enter an alphabet: ";
cin >> a;
if((a>='a' && a<='z')||(a>='A' && a<='Z'))
cout << a << " is an alphabet";
else
cout << a << " is  not an alphabet";
return 0;
}
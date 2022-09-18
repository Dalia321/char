#include <iostream>

using namespace std;

int main()
{
    char a;
    cin>>a;
    int ask=a;
    if(a>=97 && a<=122){
        a=ask-32;
        cout<<a;
        
    }
    else{
        a=ask+32;
        cout<<a;
    }

    return 0;
}

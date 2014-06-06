#include <iostream>
    #include <string>

    using namespace std;
    int main()
    {
       string pos; // aktualna pozycja kulki;
       int n,cnt=0; //liczba zamian;
       string poz,poz2;
       cin>>pos;
       cin>>n;
       while(n--)
       {
          cin>>poz>>poz2;
          cnt++;
             if(pos==poz)
                pos=poz2;
             else if(pos==poz2)
                pos=poz;

       }
       if(cnt==10) {cout<<endl; return 0;}
       if(pos=="left"||pos=="center"||pos=="right")
         cout<<pos<<endl;
       else cout<<endl;
       return 0;
    }

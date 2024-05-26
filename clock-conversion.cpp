#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int hh; 
      cin >> hh;
        string str; 
      cin >> str;
        if(hh == 0) 
            cout << "12" << str << "AM" << endl;
        else if (hh <= 11) {
            if (hh < 10) 
                cout << "0";
            cout << hh << str << "AM" << endl;
        }
        else if (hh == 12) 
            cout << "12" << str << "PM" << endl;
        else if(hh > 12) {
            if(hh - 12 < 10) 
                cout << "0";
            cout << hh - 12 << str << "PM" << endl;
        }
    }
}

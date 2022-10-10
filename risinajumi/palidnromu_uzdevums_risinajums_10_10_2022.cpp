#include <iostream>
#include <string>
using namespace std;

void palindr(string x){
    bool check=true;
    for (int i=0, j=x.length()-1; i<j; i++, j--){
        if (x[i]!=x[j]){
            cout<<"NAV PALINDROMS!"<<endl;
            check = false;
            break;
        }
    }
    if (check == true)
        cout<<"IR PALINDROMS"<<endl;
}

void palindr1(string x){
    int i, j;
    i=0;
    j=x.length()-1;
    bool check = true;
    while (i<j){
        if (x[i]!=x[j]){
            cout<<"NAV PLAINDROMS!"<<endl;
            check = false;
            break;
        }
        i++;
        j--;
    }
    if (check == true)
        cout<<"IR PALINDROMS!"<<endl;

}

int main(){
    string x;
    cin>>x;
    palindr1(x);
}

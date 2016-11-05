#include<iostream>
using namespace std;

int main() {
    int a,b,n;
    int f[55];
    while(cin>>a>>b>>n) {
        if(a==0 && b ==0 && n ==0) {
            break;
        }
        f[1] = f[2] = 1;
        f[3] = (a*1+b*1)%7;
        f[4] = (a*f[3]+b*f[2])%7;
        bool flag = false;
        int T=0;
        T=0;
        for(int i=5;i<54;i++) {
            f[i] = (a*f[i-1]+b*f[i-2])%7;
            if(f[i] == f[4] && f[i-1] == f[3] && flag == false) {
                T = i-4;
                flag = true;
            }
        }
        n = (n-2)%T;
        cout<<f[n+2]<<endl;

    }
    return 0;
}


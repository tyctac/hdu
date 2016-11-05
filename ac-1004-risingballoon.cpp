
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main888() {
    int cnt;
    string tmp;
    while(cin>>cnt){
        if(cnt == 0) break;
        map<string,int> tmap;
        string most;
        int mostcount =0;
        for(int i=0; i<cnt; i++) {
            cin>>tmp;
            if(tmap.find(tmp) == tmap.end()) {
                tmap[tmp] =1;
                if(tmap[tmp]>mostcount) {
                    mostcount = tmap[tmp];
                    most = tmp;
                }
            }
            else {
                if(tmap[tmp]>mostcount) {
                    mostcount = tmap[tmp];
                    most = tmp;
                }
                tmap[tmp] += 1;
            }
        }
        cout<<most<<endl;
    }
    return 0;
}


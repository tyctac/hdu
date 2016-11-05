#include <iostream>
#include <string>

using namespace std;

int add(char a,char b) {
    int ia = a -'0';
    int ib = b - '0';
    return ia+ib;
}

int main()
{
    string num1,num2;
    char ret[1010];
    int n;
    cin>>n;
    for(int t =0;t<n;t++) {
        if(t!=0) {
            cout<<endl;
        }
        cin>>num1>>num2;
        string longer,shorter;
        if(num1.length()>=num2.length()) {
            longer = num1;
            shorter = num2;
        }
        else {
            longer = num2;
            shorter = num1;
        }
//        cout<<num1.at(num1.length()-1)<<endl;
        int pos = longer.length()-1;
        int len2 = shorter.length()-1;
        int x = pos - len2;
        int up =0;
        int tempsum = 0;
        int len = 0;
        for(int k = pos;k >x-1;k--) {
            tempsum = add(longer.at(k),shorter.at(k-x)) + up;
            up = tempsum/10 ;
            ret[len] = tempsum%10 + '0';
            len ++;
        }
        int i = x-1;
        while(up ==1) {
            if(i<0) {
                ret[len++] = 1+'0';
                break;
            }
            int temp = add(longer.at(i),(1+'0'));
            i--;
            up = temp/10;
            temp = temp%10;
            ret[len++] = temp + '0';
        }
        if( up ==0) {
            for(int j = i ;j>=0;j--) {
                ret[len++] = longer.at(j);
            }

            cout<<endl;
        }
                cout<<"CASE "<<t+1<<":"<<endl;
        cout<<num1<<" + "<<num2<<" = ";
        int j = len -1;
        while(ret[j] == '0') {
            j--;
        }
        for (;j>=0;j--) {

            cout<<ret[j];
        }
        cout<<endl;



    }
    return 0;
}

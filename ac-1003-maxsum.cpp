#include<iostream>
#include<vector>

using namespace std;

int main() {
    int ca;
    cin>>ca;
    vector<int> vec;
    int temp;
    int cnt;
    for(int j =0;j<ca;j++) {
        vec.clear();
        bool allNeg = true;
        int ttmax = -2000;
        int tti = -1;
        cin>>cnt;
        while(cnt-->0) {
            cin>>temp;
            if(temp>ttmax){
                ttmax = temp;
                tti = vec.size() +1;
            }
            if(temp > 0) {
                allNeg = false;
            }
            vec.push_back(temp);

        }
        if(allNeg == true) {
            cout<<"Case "<<j+1<<":"<<endl;
            cout<<ttmax<<" "<<tti<<" "<<tti<<endl;
            if(j<ca-1) cout<<endl;
            continue;
        }
        int maxsum=0,sum = 0,endposition = 0;

        int tempPosition = 0;
        int start = tempPosition;
        for(int i=0;i<vec.size();i++) {
            sum += vec[i];
            if(sum > maxsum) {
                maxsum = sum;
                start = tempPosition;
                endposition = i;
            }
            if(sum<0) {
                tempPosition =i+1;
                sum = 0;
            }
        }
        cout<<"Case "<<j+1<<":"<<endl;
        cout<<maxsum<<" "<<start+1<<" "<<endposition+1<<endl;
        if(j<ca-1) cout<<endl;

    }


    return 0;

}

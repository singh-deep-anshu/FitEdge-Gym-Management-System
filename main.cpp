#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; string s;
        cin>>n;
        cin>>s;
        vector<string> sv;
        int k=0;
        string temp = "";
        for (int i = 0; i < n; i++)
        {   
            if(s[i]==' '){
                sv.push_back(temp);
                temp="";
                k++;
            }
            else if(s[i]==s[n-1]){
                temp = temp+ s[i];
                sv.push_back(temp);
                temp="";
                break;
            }
            temp = temp+ s[i];

        }
        vector<string> svs;
        vector<string> svm;
        vector<string> svl;
        vector<string> str(k);
        for (int i = 0; i < n; i++)
        {
            if( sv[i].back()=='S' or sv[i].back()=='M'){
                svs.push_back(sv[i]);
            }
            else svl.push_back(sv[i]);
        }
        sort(svs.begin(),svs.end());
        sort(svl.begin(),svl.end());
        for(int i = 0; i < k; i++)
        {
            if(i<svs.size()) str[i]=svs[i];
            else str[i]=svl[i-svs.size()];
        }
        for(int i=0; i<k; i++){
            if(i==k-1){
                cout<<str[i];
                break;
            }
            else{
                cout<<str[i]+" ";
            }
        }
        cout<<endl;
        
    }


return 0;
}
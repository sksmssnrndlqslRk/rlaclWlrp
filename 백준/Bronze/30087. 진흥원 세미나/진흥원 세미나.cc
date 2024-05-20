#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        if(a=="Algorithm") cout<<204;
        else if(a=="DataAnalysis") cout<<207;
        else if(a=="ArtificialIntelligence") cout<<302;
        else if(a=="CyberSecurity") cout<<"B101";
        else if(a=="Network") cout<<"303";
        else if(a=="Startup") cout<<"501";
        else if(a=="TestStrategy") cout<<"105";
        cout<<"\n";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4>>x5>>y5>>x6>>y6;
    int area_white = abs(y2-y1)*abs(x2-x1);
    int area_of_1st = abs(y2-y1)*abs(x4-x1);
    int area_of_2nd = abs(y2-y1)*abs(x2-x5);
    int combined_Area = area_of_1st + area_of_2nd;
    if(combined_Area<area_white){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    
    }

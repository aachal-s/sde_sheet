#include<bits/stdc++.h>
using namespace std;

vector<int> rowAns(int nn){
    vector<int> answer;
    long long ans = 1;
    answer.push_back(1);
    for(int i=1;i<nn;i++){
        ans = ans*(nn-i);
        ans = ans/i;
        answer.push_back(ans);
    }
    return answer;
}

vector<vector<int>> pascal_triangle(int n){
    vector<vector<int>> ans;
    for(int i=1;i<=n;i++){
        ans.push_back(rowAns(i));
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> triangle = pascal_triangle(n);
    
    for (const auto& row : triangle) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    return 0;
}
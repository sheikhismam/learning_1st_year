#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public: 
        void reverseArray(vector<int>&vec,int n){
            int i=0, j=n-1;
            while(i<j){
                swap(vec[i],vec[j]);
                i++;
                j--;
            }
        }
        
};

int main() {
    int n;
    cin>>n;
    vector <int>vec(n);
    for(int i=0; i<n;i++){
        cin>>vec[i];
    }
    
    Solution solution;
    solution.reverseArray(vec,n);
    
    for(int i=0; i<n;i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 0;
}

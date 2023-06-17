#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int> nums,int target){    // Bruteforce method

    int size=nums.size();

    for(int i=0; i<size; i++)
        for(int j=0; j<i; j++)
            if(nums[i]+nums[j] == target)
                return {i,j};
        
    return {};
}

int main(){
    int size,temp;      // Variable declaration
    vector<int> nums;
    
    cin>>size;    // Inputing the values
    for(int i=0; i<size; i++){
        cin>>temp;
        nums.push_back(temp);
    }
    cin>>temp;

    vector<int> result = twoSum(nums,temp);      // Calling the function

    cout<<"The solution recieved {"<<result[0]<<","<<result[1]<<"}";        // Printing the result
    return 0;
}
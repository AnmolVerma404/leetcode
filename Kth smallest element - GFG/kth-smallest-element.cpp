// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int n, int p) {
        // int pos = p;
        // for(int i = 0;i<=n;i++){
        //     int mn = INT_MAX;
        //     int k = 0;
        //     for(int j = i;j<=n;j++){
        //         if(mn>arr[j]){
        //             k = j;
        //             mn = arr[j];
        //         }
        //     }
        //     int temp = arr[i];
        //     arr[i] = mn;
        //     arr[k] = temp;
        //     p--;
        //     if(p == 0){
        //         return arr[pos-1];
        //     }
        // }
        // // for(auto i = 0;i<=n;i++) cout<<arr[i]<<" ";
        // return 0;//code here
           sort(arr,arr+(n+1));
       // Since k=index+1 you will have to return arr[k-1]th element
       return arr[p-1];
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends
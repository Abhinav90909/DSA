class Solution {
public:
    void nextPermutation(vector<int>& A) {//O(n) TC O(1) SC
        
        //find the pivot
        int pivot=-1;
        int n=A.size();
        for(int i=n-2;i>=0;i--){
            if(A[i]<A[i+1]){
                pivot=i;
                break;
            }
        }
        if(pivot==-1){//in-place changes
            reverse(A.begin(),A.end());
            return;
        }
        //2nd-step : next larger element
        for(int i=n-1;i>pivot;i--){
            if(A[i]>A[pivot]){
                swap(A[i],A[pivot]);
                break;
            }
        }
        // 3rd step : reverse (pivot+1 to n-1)
        reverse(A.begin()+pivot +1,A.end());

    }
};
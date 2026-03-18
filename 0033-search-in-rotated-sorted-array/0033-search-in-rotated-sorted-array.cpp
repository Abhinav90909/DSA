class Solution {
public:
    int search(vector<int>& A, int tar) {
        int start=0;int end=A.size()-1;

        while(start<=end){
            int mid=start+(end-start)/2;
            if(A[mid]==tar){
                return mid;
            }
            if(A[start]<=A[mid]){//left sorted
                if(A[start]<=tar && tar <=A[mid]){
                    end=mid-1;
                }else{
                    start=mid+1;
                }
            }else{ // right sorted
                if(A[mid]<=tar && tar<=A[end]){
                    start=mid+1;
                }else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};
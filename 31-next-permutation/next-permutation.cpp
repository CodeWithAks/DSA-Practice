class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int pivot=-1,n=A.size();

        //step1-find pivot
        for(int i=n-2;i>=0;i--){
            if(A[i]<A[i+1]){
                pivot=i;
                break;
            }
        }
        if(pivot==-1){  //descending -> ascending
            reverse(A.begin(),A.end()); //in place changes
            return;
        }

        //step2-find larger el.
        for(int i=n-1;i>pivot;i--){
            if(A[i]>A[pivot]){
                swap(A[i],A[pivot]);
                break;
            }
        }

        //step3-reverse elements
        int i=pivot+1;
        int j=n-1;
        while(i<j){
            swap(A[i],A[j]);
            i++;
            j--;
            //reverse(A.begin() + pivot+1,A.end());
        }
    }
};
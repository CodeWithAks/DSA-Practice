class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int idx=m+n-1,i=m-1,j=n-1;

        while(i>=0&&j>=0){
            if(A[i]>=B[j]){ //compare 
                A[idx]=A[i];
                idx--; //shift left
                i--;
            } else{
                A[idx]=B[j]; //store largest value backwards
                idx--;
                j--;
            }
        }

        while(j>=0){ //if(i is -ve)
            A[idx]=B[j];
            idx--;
            j--;
        }
    }
};
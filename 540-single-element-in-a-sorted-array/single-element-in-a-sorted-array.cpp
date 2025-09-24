class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size();
        if(n == 1) return A[0];

        int st = 0, end = n - 1;

        while(st <= end){
            int mid = st + (end - st) / 2;

            if(mid == 0 && A[0] != A[1]) return A[0];
            if(mid == n - 1 && A[n - 1] != A[n - 2]) return A[n - 1];
            if(A[mid] != A[mid - 1] && A[mid] != A[mid + 1]) return A[mid];

            
            if((mid % 2 == 0 && A[mid] == A[mid + 1]) || 
               (mid % 2 == 1 && A[mid] == A[mid - 1])) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return -1; 
    }
};

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int low=0,high=matrixSize-1,mid;
    while(low<=high){
        mid = (low+high)/2;
        if(target>=matrix[mid][0] && target <= matrix[mid][*matrixColSize-1]){
            int l =0,h = *matrixColSize-1;
            while(l<=h){
                int m = (l+h)/2;
                if(target == matrix[mid][m]) return 1;
                else if(target<matrix[mid][m]) h = m-1;
                else if(target>matrix[mid][m]) l = m+1; 
            }
            return 0;
        }
        else if(target<matrix[mid][0]) high = mid-1;
        else if(target > matrix[mid][*matrixColSize-1]) low = mid+1;
    }
    return 0;
}
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);



class Solution {
public:             // 1 for bad , O for not bad;
    int firstBadVersion(int n) {
         int left = 1 , right = n;
        while(left < right){
            int mid= left + (right - left ) / 2;
            if(isBadVersion(mid) == true){
                right = mid;
            }
            else{
                left = mid + 1;
            }
        }
        return left;
    }
};
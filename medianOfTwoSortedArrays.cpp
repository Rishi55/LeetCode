class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(), len2 = nums2.size(), max;
        double ans;
        int first=0, second=0;
        max = (len1+len2)/2;
        int i=0, j=0;
        for(int cnt=0; cnt<=max; cnt++) {
            first = second;
            if((i<len1) && (j<len2)) {
                if(nums1[i] < nums2[j]){
                    second = nums1[i];
                    i++;
                }
                else{
                    second = nums2[j];
                    j++;
                }
            }
            else if(i<len1) {
                second = nums1[i];
                i++;
            }
            else{
                second = nums2[j];
                j++;
            }
            cout << "First: " << first << "; Second: " << second << endl;
        }

        if((len1+len2)%2 == 0) ans=(first+second)/2.0;
        else ans=second;

        return ans;
    }
};

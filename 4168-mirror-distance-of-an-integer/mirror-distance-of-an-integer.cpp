class Solution {
public:
    int mirrorDistance(int n) {
        int me=n;
        int mirror=0,c=0;
        while(n!=0){
            c=n%10;
            mirror=mirror*10+c;
            n/=10;
        }
        return abs(me-mirror);
    }
};
class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp = 0, sum = 0, mul = 1;

    while(n!=0){
            temp = n % 10;
            n /= 10;
            sum += temp;   
            mul *= temp;
    }
    return mul-sum;
    }
};

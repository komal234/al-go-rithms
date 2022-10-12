class Solution {
public:
    int divide(int d, int divis) {
        long long int dividend=d;
        long long int divisor=divis;
         int sign = ((dividend < 0) ^(divisor < 0)) ? -1 : 1;
 
  // remove sign of operands
  dividend = abs(dividend);
  divisor = abs(divisor);
 
  // Initialize the quotient
 long long int quotient = 0, temp = 0;
 
  // test down from the highest bit and
  // accumulate the tentative value for
  // valid bit
  for (int i = 31; i >= 0; --i) {
 
    if (temp + (divisor << i) <= dividend) {
      temp += divisor << i;
      quotient |= 1LL << i;
    }
  }
  //if the sign value computed earlier is -1 then negate the value of quotient
  if(sign==-1) quotient=-quotient;
   if(quotient<INT_MIN)
       return INT_MIN;
        if(quotient>INT_MAX)
            return INT_MAX;
  return quotient;
    }     
};
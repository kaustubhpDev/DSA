bool isPowerof2 (int n)
{
//n is power of 2 only = one bit of binary representation of n is set 
if(n==0)
{
    return false;
}
else {
//do an and operation between the n and n-1 ,if the n is power of 2 then the and opeation between n and n-1 will result 0.
    return (n &(n-1)==0);
}

}
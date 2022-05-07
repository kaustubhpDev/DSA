//check whether kth bit is set or not 

void kthbit(int n ,int k)
{
if((n>>(k-1))&1==1)
{
cout<<"yes";
}
else 
{
cout<<"no";
}
}
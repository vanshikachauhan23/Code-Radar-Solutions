int fab(int n);
void fabonacciSeries(int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" %d",fab(i));
    }
}
int fab(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return fab(n-1) + fab(n-2);

}
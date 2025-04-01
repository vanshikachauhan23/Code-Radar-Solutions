int PrimeInRanges(int a,int b)
{
    for(i=a;i*i<=b;i++)
    {
      if(b%i==0)
      {
        return 0;
      }
      printf(" %d",i)
    }

}
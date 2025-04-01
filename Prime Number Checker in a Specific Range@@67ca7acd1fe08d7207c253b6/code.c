int printPrimeInRanges(int a,int b)
{
    for(int i=a;i*i<=b;i++)
    {
      if(b%i==0)
      {
        return 0;
      }
      printf(" %d",i);
    }

}
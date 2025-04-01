void printPrimeInRanges(int a,int b)
{
    for(int i=a;i*i<=b;i++)
    {
      if(b%i==0)
      {
        b++;
        continue
      }
      printf(" %d",i);
      
    }

}
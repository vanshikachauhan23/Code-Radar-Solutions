void printPrimeInRanges(int a,int b)
{
    for(int i=a;i*i<=b;i++)
    {
      if(b%i==0)
      {
        i++;
        continue;
      }
      printf(" %d",i);
      
    }

}
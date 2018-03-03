unsigned int countSetBits(unsigned int n)
{
  unsigned int count = 0;
  while (n)
  {
    count += n & 1;
    n >>= 1;
  }
  return count;
}

/* Program to test function countSetBits */
int main()
{
    int i = 15;
    printf("%d", countSetBits(i));
    return 0;
}

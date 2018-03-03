unsigned int countSetBits(int n)
{
    unsigned int count = 0;

    while (n)
    {
        n &= (n-1) ;
        count++;
    }
    return count;
}

int hammingDistance(int x, int y) {

    int count = 0;
    int ithxbit, ithybit;
    int i = 0;

    while (x | y)
    {
        ithxbit = (x & (1 << i));
        ithybit = (y & (1 << i));

		int xorvalue = ithxbit ^ ithybit;
        printf("%d", xorvalue);
        if (xorvalue > 1)
            count++;

        i++;
    }
    return count;
}

int main()
{
    //int i = 10;

    //printf("\n Unsigned %u", (i));
    //printf("\n Decimal %d", (i));
    //printf("\n Hexadecimal %x", (i));
    //printf("\n Octal %o", (i));


    //printf("\nOnes are %d", countSetBits(i));
    int x = 1; int y = 4;

    printf("\nHamming Distance is %d", hammingDistance(x,y));
    getchar();
    return 0;
}

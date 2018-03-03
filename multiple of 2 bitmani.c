unsigned int twoMultiple(unsigned int n)
{
    unsigned int mask = 1<<0;
    unsigned temp = n & mask;

    printf("%d\n", n);
    printf("%u\n", n); //important when converting negative value to unsigned
    //signed = there is sign, so -8 is shown as -8
    //unsigned = no sign, so we need to show -8 as something
    //so we show it as 2^32 + that number = 2^32 -8 = 4294967296 -8 = 4294967288

    if (temp > 0){
        printf("\n%d is not multiple of 2", n);
    }
    else{
        printf("\n%d is multiple of 2", n);
    }
    return 0;
}

int main()
{
    unsigned int i = -8;
    twoMultiple(i);
    getchar();
    return 0;
}

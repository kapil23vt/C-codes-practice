unsigned int reverseBits(unsigned int num)
{
    //Set what is the number of bits in the binary number
    unsigned int reverse_num = 0, i;
    unsigned int helper;
    for (i = 0; i < 4; i++)
    {
        helper = (num & (1 << i)); //ithbit = 0001 or 0010

        if(helper > 0)
            //Do OR since you are adding this number
            //1 << (3-i=0), = 1000
            //1 << (3-i=1), = 0100
            //When you do the OR, 1100
            reverse_num |= (1 << (3 - i));
    }
    return reverse_num;
}

int main()
{
    unsigned int x = 3; // 3 = 0011, reverse = 1100
    printf("%u", reverseBits(x));
    getchar();
}

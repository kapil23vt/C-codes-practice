unsigned int swapadjacent(unsigned int num)
{
	unsigned int evenbits = num & 0xA;
	unsigned int oddbits = num & 0x5;
	
	//num = xyzw, num &0xA = x0z0, right shift = 0x0z
	//num = xyzw, num&0x5 = 0y0w, left shift = y0w0
	
	evenbits >>= 1;
	oddbits <<= 1;
	
    return (evenbits|oddbits);
}

int main()
{
    unsigned int x = 10; // 10 = 1010, swapped = 0101
    printf("%u", swapadjacent(x)); //returns 5
    getchar();
}

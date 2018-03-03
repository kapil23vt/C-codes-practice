#include <stdio.h>

int main(void)
{

    unsigned int number = 0xa2; // 1010 0100 [10100] comes 1 times
    unsigned int pattern = 0x14; // pattern = [10100]
    unsigned int pattern_mask = 0x1f; // mask for this pattern = [11111]

    int count = 0;
    while(number > 0) {

            // when number = pattern, ^ gives 0
            // 0 with mask = 0
            // so when you get 0, you have found the pattern

            int patternmatch = number ^ pattern;
            int result = patternmatch & pattern_mask;

            if (result == 0)
            {
                count = count + 1;
              printf("Found the pattern!");
            }

            number >>= 1;

    }

    printf("\ncount:  %d\n", count);

    return 0;
}

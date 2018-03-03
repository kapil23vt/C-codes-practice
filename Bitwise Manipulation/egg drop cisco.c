# include <stdio.h>
# include <limits.h>

int max(int a, int b) { return (a > b)? a: b; }

int eggDrop(int eggs, int floor)
{
    // If there are no floors, then no trials needed. OR if there is
    // one floor, one trial needed.
    if (floor == 1 || floor == 0)
        return floor;

    // We need k trials for one egg and k floors
    if (eggs == 1)
        return floor;

    int min = INT_MAX;
    int current, result;

    // Consider all droppings from 1st floor to kth floor and
    // return the minimum of these values plus 1.
    for (current = 1; current <= floor; current++)
    {
        result = max(eggDrop(eggs-1, current-1), eggDrop(eggs, floor-current));

        if (min > result)
            min = result;
    }

    return min + 1;
}

int main()
{
    int n = 2, k = 2;
    printf ("Minimum number of trials in worst case with %d eggs and "
             "%d floors is %d", n, k, eggDrop(n, k));
    return 0;
}

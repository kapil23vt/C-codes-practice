int main()
{
    int i;
    double number, sum = 0.0;

    for(i=1; i <= 5; ++i)
    {
        printf("Enter a n%d: ",i);
        scanf("%lf",&number);

        // If user enters negative number, Game over!
        if(number < 0.0)
        {
            printf("You entered negative number fool, this will not be added\n");
            break;
        }

        sum += number; // sum = sum + number;
    }

    printf("Sum = %.2lf",sum);

    return 0;
}

// DESCRIPTION:
//     Given a year, Return the century it is in.

// My Solution:
int centuryFromYear(int year)
{
    if (year <= 100)
    {
        return 1;
    }
    else
    {
        year -= 1;
        return (year / 100) + 1;
    }
}
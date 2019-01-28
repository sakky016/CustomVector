#include "header.h"

int main(int argc, char *argv[])
{
    MyArray arr;

    int val = 0;
    int size = 0;
    int capacity = 0;

    int i = 0;
    while (i < argc-1)
    {
        val = atoi(argv[i+1]);
        arr.Insert(val);
        size = arr.Size();
        capacity = arr.Capacity();
        printf("Inserting %d | Size: %d | Capacity: %d\n", val, size, capacity);

        i++;
    }

    i = 0;
    printf("Values: ");
    while (i < argc-1)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    int findVal = 0;
    printf("Enter num to find: ");
    cin>>findVal;
    int findIndex = arr.Find(findVal);
    if (findIndex == -1)
    {
        printf("%d not found!\n", findVal);
    }
    else
    {
        printf("%d found at index %d\n", findVal, findIndex);
    }

    return 0;
}

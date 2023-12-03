#include <stdio.h>
#define MAX 50

int main()
{
    int arr[MAX], n, i, pos, value;

    printf("Enter the size of the array (max %d): ", MAX);
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the position to insert the element (1 to %d): ", n+1);
    scanf("%d", &pos);

    if(pos < 1 || pos > n+1)
        printf("Invalid position");
    else
    {
        printf("Enter the value to insert: ");
        scanf("%d", &value);

        for(i=n-1; i>=pos-1; i--)
            arr[i+1] = arr[i];

        arr[pos-1] = value;
        n++;
        printf("Array after insertion:\n");
        for(i=0; i<n; i++)
            printf("%d ", arr[i]);
    }

    return 0;
}


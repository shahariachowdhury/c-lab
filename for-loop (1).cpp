#include<stdio.h>
main()
{
    int i,j,n;

    printf("Declare Array Size:");
    scanf("%d",&n);

    int a[n];

    printf("Enter Elements Into Array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("The Array Is:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

    printf("\nInput the Element to Search:");
    scanf("%d",&j);

    for(i=0;i<n;i++){
        if(a[i]==j){
            printf("%d found at index %d\n",a[i],i);
            n=i;

        }
    }

    if(i==n){printf("Data Not Found\n");}
    printf("\nThe condition was false at %d<%d",i,n);
    return 0;
}

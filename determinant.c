#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3],i,j,det=0;
    printf("\nenter values for arra1-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Arr1[%d][%d]=",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nvalues for arra1-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            //printf("Arr1[%d][%d]=",i,j);
            printf("%d  ",arr1[i][j]);
        }
        printf("\n");
    }
    arr2[0]=arr1[1][1]*arr1[2][2]-arr1[2][1]*arr1[1][2];
    arr2[1]=arr1[1][0]*arr1[2][2]-arr1[2][0]*arr1[1][2];
    arr2[2]=arr1[1][0]*arr1[2][1]-arr1[2][0]*arr1[1][1];
    for(i=0;i<3;i++)
    {
        if(i%2==0)
            det+=arr1[0][i]*arr2[i];
        else
            det-=arr1[0][i]*arr2[i];
    }
    printf("\n determinant=%d" ,det);
}

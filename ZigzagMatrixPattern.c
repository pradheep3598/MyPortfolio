#include<stdio.h>

int main()
{
    int n=3;
    int arr[3][3] ={{1,2,3},
                    {4,5,6},
                    {7,8,9}
                    };

    for(int i=0;i<n;i++)
    {
        if(i%2 ==0)
        {
            int x = i,y=0;
            while(x>=0 && y<=i)
            {
                printf("%d ",arr[x][y]);
                x--;
                y++;
            }
        }
        else
        {
            int x = 0,y=i;
            while(x<=i && y>=0)
            {
                printf("%d ",arr[x][y]);
                x++;
                y--;
            }
        }
    }
    if(n%2==0)
    {
        for(int i =1;i<4;i++)
        {
            if(i%2!=0)
            {
                int x = n-1 , y = i;
                while(x>=i && y<=n-1)
                {
                    printf("%d ",arr[x][y]);
                    x--;
                    y++;
                }
            }
            else 
            {
                int x = i,y = n-1;
                while(x<=n-1 && y>=i)
                {
                    printf("%d ",arr[x][y]);
                    x++;
                    y--;
                }
            }
        }
    }
    else 
    {
        for(int i=1;i<n;i++)
        {
            if(i%2!=0)
            {
                int x = i , y = n-1;
                while(x<=n-1 && y>=i)
                {
                    printf("%d ",arr[x][y]);
                    x++;
                    y--;
                }
            }
            else 
            {
                int x = n-1,y = i;
                while(x>=i && y<=n-1)
                {
                    printf("%d ",arr[x][y]);
                    x--;
                    y++;
                }
            }
        }
    }
return 0;
}
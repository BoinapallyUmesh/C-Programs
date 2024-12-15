//Inserting Elements using insert()

/*#include<stdio.h>
int main()
{
    int a[]={11,22,33,44,55};
    int size=5,element=78,index=2;
    disp(a,size);
    insert(a,size,element,index);
    size++;
    disp(a,size);
    return 0;
}
void insert(int a[],int size,int element,int index)
{
    for(int i=size-1;i>=index;i--)
        a[i+1]=a[i];
    a[index]=element;
}
void disp(int a[],int size)
{
    for(int i=0;i<size;i++)
        printf("%d ",a[i]);
    printf("\n");
}*/


//Deletion The Elements;

/*#include<stdio.h>
int main()
{
    int a[]={11,22,33,44,55};
    int size=5,element=77,index=3;
    //size++;
    //disp(a,size);
    deletion(a,size,2);
    size--;
    disp(a,size);
    return 0;
}
void deletion(int a[],int size,int index)
{
    for(int i=index;i<=size-1;i++){
        a[i]=a[i+1];

}
}
void disp(int a[],int size)
{
    for(int i=0;i<size;i++)
        printf("%d ",a[i]);
    printf("\n");
}*/


//Linear Search;

#include<stdio.h>
int main()
{
    int a[]={100,200,300,402,555},i;
    int size=sizeof(a)/sizeof(int),element=300;
    for(i=0;i<size;i++)
    {
        if(a[i]==element)
        {
            printf("%d Element found @ index %d",element,i);
            break;
        }
        if(a[i]==a[size-1])
        {
            printf("Element not found \n");

        }
    }
}


//Binary Search;

/*#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,99,0};
    int size=sizeof(a)/sizeof(int),element=6;
    int searchindex=bs(a,size,element);
    (searchindex==-1)?printf("Element not found"):
    printf("Element %d found @ index %d",element,searchindex);
}
int bs(int a[],int size,int element)
{
    int low=0;
    int high=size-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==element)
            return mid;
        if(a[mid]<element)
            low=mid+1;
        else{
            high=mid-1;
        }
    }
    return-1;
}*/

//Interpolation Search;

/*#include<stdio.h>
int main()
{
int a[]={11,15,25,35,36,42,43,56};
int element=36;
int size=sizeof(a)/sizeof(int);
int searchindex=Is(a,size,element);
searchindex==-1? printf("Element not found"):printf("element %d found @ index %d",element,searchindex);
}
int Is(int a[],int size,int element)
{
    int low=0;
    int high=size-1;
    int mid;
    while(element<=a[high])
    {
        mid=low+((high-low)/(a[high]-a[low]))*(element-a[low]);
        if(a[mid]==element)
            return mid;
        if(a[mid]<element)
            low=mid+1;
        else{
            high=mid-1;
        }
    }
    return-1;

}*/


//Linear Search;

/*#include<stdio.h>
int main()
{
    int a[10]={0,5,10,20,30,40,50,60,70,80};
    int key,i,flag=0;
    printf("enter searching key");
    scanf("%d",&key);
    for(i=0;i<10;i++)
    {
        if(key==a[i])
        {
          flag=1;
          break;
        }

    }
    if(flag==1)
    {
        printf("Key is found");

    }
    else
    {
        printf("Key is not found");
    }
}*/

//Linear Search
/*#include<stdio.h>
int main()
{
    int a[]={100,200,300,100,402,555},i;
    int size=sizeof(a)/sizeof(int);
    int element=100;
    for(i=0;i<size;i++)
    {
        if(a[i]==element)
        {
            printf("Element %d found @ index %d \n",element,i);
            continue;

        }

        if(a[i]==a[size-1])

        {
             break;
            printf("Element not found \n");

        }
    }
}*/

#include<stdio.h>
#include<stdlib.h>
void disp(int a[],int s){
for(int i=0;i<s;i++)
    printf("%d ",a[i]);
    printf("\n");
}
void rmdup(int a[],int *s){
for(int i=0;i<*s;i++){
    for(int j=i+1;j<*s;j++){
        if(a[i]==a[j]){
            for(int k=j;k<*s;k++)
                a[k]=a[k+1];
        j--;
        (*s)--;}
    }
}
}
int main(){
int a[]={1,2,2,3,4,5,6,6,8,9,1};
int s=sizeof(a)/sizeof(int);
rmdup(a,&s);
disp(a,s);
}

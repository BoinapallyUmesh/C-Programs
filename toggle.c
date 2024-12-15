#include<stdio.h>
void swaprbit(int b[],int k,int s1,int e1,int s2,int e2){
    int ki=0;
    for(int i=s1;i<=e1;i++){
        int t=b[i];
        b[i]=b[s2+ki];
        b[s2+ki]=t;
        ki++;
    }
    for(int i=k-1;i>=0;i--)
    printf("%d",b[i]);
}
int setbit(int n,int pos){
n|=(1<<pos);
n&=~(1<<pos);
return n;
}
int main(){
int n;
printf("\nEnter a num:\n");
scanf("%d",&n);
unsigned int bits[32],k=0;
printf("Set bits at 4 %d\n",setbit(n,4));
while(n){
    bits[k++]=n&1;
    n=n>>1;
}
for(int i=k-1;i>=0;i--)
    printf("%d",bits[i]);
int s1,e1,s2,e2;
printf("Enter start and end indexes of range1\n");
scanf("%d%d",&s1,&e1);
printf("Enter start and end indexes of range1\n");
scanf("%d%d",&s2,&e2);
swaprbit(bits,k,s1,e1,s2,e2);
}


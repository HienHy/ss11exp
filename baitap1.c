#include<stdio.h>
int main(){
	int A[20];
	int B[20];
	int n,h;
	int i,j,k;
	int trunggian;
	printf("nhap vao so phan tu mong muon : ");
	scanf("%d",&n);
	for(h=0;h<n;h++){
		printf("phan tu so : %d ", h+1);
		scanf("%d",&A[h]);}
	for(k=0;k<n;k++){
		B[k]=A[k];}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(B[i]<B[j])
			{
				trunggian=B[i];
				B[i]=B[j];
				B[j]=trunggian;
			}
		}
	}
	for(i=0;i<n;i++)
	 printf("\nGia tri tai [%d] la %d",i+1,B[i]);}
	 
	

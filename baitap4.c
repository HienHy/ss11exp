#include<stdio.h>
int main(){
	int A[20];
	int B[20];
	int h;
	int i,j,k;
	int trunggian;
	for(h=0;h<5;h++){
		printf("phan tu so : %d ", h+1);
		scanf("%d",&A[h]);}
	for(k=0;k<5;k++){
		B[k]=A[k];}
	for(i=0;i<5-1;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(B[i]<B[j])
			{
				trunggian=B[i];
				B[i]=B[j];
				B[j]=trunggian;
			}
		}
	}
	for(i=0;i<5;i++)
	 printf("\nGia tri la %d",B[i]);}
	 
	

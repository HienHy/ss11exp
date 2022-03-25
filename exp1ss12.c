#include<stdio.h>
int main(){
	int n;
	int h,k;
	int i,j,temp;
	int num[100];
	int desnum[100];
	printf("Enter the total number of marks to be entered : ");
	scanf("%d",&n);
	for(h=0;h<n;h++)
	    {
		printf("Enter the marks of student %d ",h+1);
		scanf("%d",&num[h]);
		}
	for(k=0;k<n;k++)
		desnum[k]=num[k];
		
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(desnum[i]<desnum[j])
			{
				temp=desnum[i];
				desnum[i]=desnum[j];
				desnum[j]=temp;
			} 
		}
	}
	for(i=0;i<n;i++){
	
	    printf("\n Number at [%d] is %d", i, desnum[i]);}
	    return 0;
	
}

#include<stdio.h>
int main(){
	int A[10];
	int i,max,min,n;
	printf("Nhap so phan tu mong muon : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("nhap cac phan tu : ");
		scanf("%d",&A[i]);
	if(i!=0){
		max=A[0];
		min=A[0];
	if(max<A[i]){
		max=A[i];}
	if(min>A[i]){
		min=A[i];}
		}}
printf("\nMax = %d",max);
printf("\nMin = %d",min);
}
	
	

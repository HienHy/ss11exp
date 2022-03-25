#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    int i;
    int item;
    char x[7][12];
    char temp[12];
printf("nhap 7 ten can sap xep : \n");
for(i=0;i<7;i++){
	 printf("String %d : ", i+1);
        scanf("%s",x[i]);}
      for(item=0;item<7;item++)
        {
            for(i=item+1;i<7;++i){
                if(strcmp (x[item],x[i])>0)
				{
                    strcpy(temp,x[item]);
                    strcpy(x[item],x[i]);
                    strcpy(x[i],temp);
				}
            }
		}
for(i=0;i<7;++i){
        printf("\nString %d is %s",i+1,x[i]);
    }
    }

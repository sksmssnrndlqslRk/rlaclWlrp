#include <stdio.h>


int main(){
	
	int arr[3];
	for(int i=0;i<3;i++){
		int a;
		scanf("%d",&a);
		arr[i]=a;
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<i;j++){
			int temp;
			if(arr[i]<arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
			
		}
	}
	
	printf("%d",arr[1]);
	return 0;
}
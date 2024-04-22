#include <stdio.h>

int main() {
	int arr[20];
	int a,cnt=0;
	for(int i=0; i<10; i++)
	{
		scanf("%d",&a);	
		arr[i] = a % 42;
	}
	for(int i=0; i<10; i++)
	{
		int num=0;
		for(int j=i+1; j<10; j++)//여기 아까 너가 i++로 해놨고 j는 0으ㅗ로 하고 j<i로 해 왜냐하면 
	
		{
			if(arr[i] == arr[j])
			{
				num++;
			}	
		}
		if(num==0){
		
		cnt++;
		}
	}
	printf("%d",cnt);
	return 0;
}
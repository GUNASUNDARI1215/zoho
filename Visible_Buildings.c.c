#include<stdio.h>

int main()
{
	int size,max,i;
	
	//get the total number of buildings
	printf("Enter the number of buildings:  ");
	scanf("%d",&size);

	//get the height of the buildings
	int arr[size];
	printf("Enter the heights : \n");
	for(i=0;i<size;i++)
	{
		printf("height[%d]= ",i);
		scanf("%d",&arr[i]);
	}
		
	int position;
	int visible=1;  //First building is always visible;
	printf("Enter the position(2=left and 4= right) : ");
	scanf("%d",&position);
	
		
	//If Position of sun is left	
	switch(position)  
	{
	case(2):
	{
		max=arr[0];
		for(i=1;i<size;i++)
		{
			if(arr[i]!=arr[i+1]) // If consecutive buildings have same height, sun is not visible to 2nd building;
			{
				if(arr[i]>max)
					visible++;
			}
		}
		break;
	}
	 
	 
	//If Position of sun is right    
	case(4):
	{
		max=arr[size-1];
		for(i=size-1;i>0;i--)
		{
			if(arr[i]!=arr[i-1])
			{
				if(arr[i]>max)
				{
					visible++;
				}
			}
		}
		break;
	}
	}
			
	//display the total number of visible buildings
	printf("The no of building visible to the sun is : %d",visible);
	
	return 0;
}

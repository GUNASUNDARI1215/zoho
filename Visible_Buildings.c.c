/*Question 1. Given array indicates height of the building. The problem is to identify which are all the buildings can see the sunrise based on the location of the sun. 

If sun is in right side of the sky, building will be in the left side and vice versa. If the next building is of the same height, then we can ignore that building.

Input 1:
7 4 8 2 9
Position of sun : Left
Output: 3

Explanation : 
Sun is in the left, and the first building of height 7, so sun is visible.
Next building is of height 4 which is lower than first building, so sun is not visible
Next building is of height 8 which is higher than first building, so sun is visible.
Next building is of height 2 which is lower than other building, so sun is not visible
Next building is of height 9 which is higher than third building, so sun is visible.
Totally 3.

Input 2 : 
2 3 4 5 5
Position of sun : Left
Output: 4

Input 3 : 
2 3 4 5
Position of sun : Right
Output: 1

5 6 3 2 8 1 9
output : 4
*/



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

#include<stdio.h>
#define SIZE 5

void matrix(int arr[][SIZE]){
	int i,j,d;
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
void sumofminor(int arr[][SIZE]){
	int i,j,sum;
	 for(i=0; i<5; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            
            if(i+j == ((SIZE+1)-2))
            {
                sum += arr[i][j];
            }
        }
    }

    printf("\nSum of minor diagonal elements = %d", sum);

    
}
void averagemajor(int arr[][SIZE]){
	int i,j,z;
	double sum,average;
	
	for(i=0;i<SIZE;i++){
		z=arr[i][i];
		sum+=z;
	}
	average=sum/SIZE;
		printf("\nThe average of the major diagonal in this matrix is; %lf",average);
}
void maxcolumn(int arr[][SIZE]){
	int num,max,i;
	printf("\nPlease enter the column from which you want the maximum element: ");
	scanf("%d",&num);
	max=arr[0][num];
	for(i=1;i<SIZE;i++){
		if(arr[i][num]>max)
			max=arr[i][num];
	}
	printf("\n%d",max);
	
}
void minrow(int arr[][SIZE]){
	int num,min,i;
	printf("\nPlease enter the row from which you want the minimum element: ");
	scanf("%d",&num);
	min=arr[num][0];
	for(i=1;i<SIZE;i++){
		if(arr[num][i]<min)
			min=arr[num][i];
	}
	printf("\n%d",min);
	
}
void sumaverage(int arr[][SIZE]){
	double average;
	int i,j,sum=0,x;
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			x=arr[i][j];
			sum+=x;
		}
		
	}
	average=sum/(25.0);
	printf("\nThe sum of this matrix is %d and its average is %.2lf",sum,average);

}


int main(){
	int arr[SIZE][SIZE];
	int choice,i,j,d,s;
	FILE *p= fopen("Q1.txt","r");
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			fscanf(p,"%d",&d);
			arr[i][j]=d;
		}
	}
	printf("Diplay the ...\n");
	printf("1. Matrix\n");
	printf("2. Sum of the minor diagonal\n");
	printf("3. Average of the major diagonal\n");
	printf("4. Maximum of the given column\n");
	printf("5. Minimum of the given row\n");
	printf("6. Sum and average of the matrix\n");
	printf("7. Exit\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	while(choice!=7){
		switch(choice){
			case 1: matrix(arr);
			break;
			case 2: sumofminor(arr);
			break;
			case 3: averagemajor(arr);
			break;
			case 4: maxcolumn(arr);
			break;
			case 5: minrow(arr);
			break;
			case 6: sumaverage(arr);
			break;
			
			
		}
	printf("\n\nDiplay the ...\n");
	printf("1. Matrix\n");
	printf("2. Sum of the minor diagonal\n");
	printf("3. Average of the major diagonal\n");
	printf("4. Maximum of the given column\n");
	printf("5. Minimum of the given row\n");
	printf("6. Sum and average of the matrix\n");
	printf("7. Exit\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	}
	
	
	
	
	
	
	
	
	
	return 0;
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int*ptr,n,i,j;
	int a;
	printf("enter size of array :");
	scanf("%d",&n);

	a=n;

	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL){
		printf("error not allocated");

    }
    else{
    	printf("\nenter the number of array\n");

    		for(i=0;i<n;i++){
    			scanf("%d",ptr+i);
			}
    	printf("\narray elements before resizing\n");

    		for(i=0;i<n;i++){
    			printf("%d, ",*(ptr+i));
			}

	    printf("\nenter the new size for array\n");
	    scanf("%d",&n);

        ptr = (int*)realloc(ptr, n * sizeof(int));

	    printf("\nmemory successfully reallocated\n");

	    printf("\nenter the elements of a array\n");

	    for(i=a;i<n;i++)
	    {
	    	scanf("%d",ptr+i);
		}

    	printf("\narray elements with newly added elements\n");
		for(i=0;i<n;i++){
			printf("%d, ",*(ptr+i));
		}
		free(ptr);
	}
	return 0;

}

// matrix addition
#include<stdio.h>
 int main()
 {
 	int a[10][10],b[10][10],ca[10][10],r,c,i,j;
 	printf("enter no.of rows and colums for the matrices...");
 	scanf("%d %d",&r,&c);
 	printf("enter the 1st matrix elements.....\n");
 	for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 		scanf("%d",&a[i][j]);
		 }
	 }
	 printf("enter the 2nd matrix elements.....\n");
 	for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 		scanf("%d",&b[i][j]);
		 }
	 }
	 printf("the given matrices are.....\n");
	 for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 		printf("%d ",a[i][j]);
		}
		printf("\n");
	 }
	 		printf("\n");
		printf("\n");

	 for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 		printf("%d ",b[i][j]);
		}
		printf("\n");
	 }
	 printf("sum of the matrices is....\n");
	 for(i=0;i<r;i++){
	 	for(j=0;j<c;j++){
	 		ca[i][j]=a[i][j]+b[i][j];
		 }
	 }
	 for(i=0;i<r;i++)
	 {
	 	for(j=0;j<c;j++)
	 	{
	 		printf("%d ",ca[i][j]);
		}
		printf("\n");
	 }
 }

#include<stdio.h>
#define MAX100

void sumsparseMatrices(int matrix1[MAX][3].int matrix2[MAX][3],int result[MAX][3],int *r1,int*r2)
{
int i=0,j=0,k=0;
while (i<*r1 && j<*r2)
{
if(mat1[i][0]==mat2[j][0]&&mat1[i][1]==mat2[j][1])
{
result[k][0]=mat1[i][0];
result[k][1]=mat1[i][1];
result[k][2]=mat1[i][2]+mat2[j][2];
i++;
j++;
}
else if (mat1[i][0]<mat2[j][0] ||(mat1[i][0]==mat2[j][0] &&mat1[i][1]<mat2[j][1])
{
result[k][0]=mat1[i][0];
result[k][1]=mat1[i][1];
result[k][2]=mat1[i][2]+mat2[j][2];
i++;
j++;
;
} 
else
{
result[k][0]=mat1[i][0];
result[k][1]=mat1[i][1];
result[k][2]=mat1[i][2]+mat2[j][2];
i++;
j++;

}

}
while (i<*r1)
{
result[k][0]=mat1[i][0];
result[k][1]=mat1[i][1];
result[k][2]=mat1[i][2]+mat2[j][2];
i++;
j++;


}
while(j<*r2)
{
result[k][0]=mat1[i][0];
result[k][1]=mat1[i][1];
result[k][2]=mat2[j][2];
i++;
j++;
}
*r1=k;
}
void printsparseMatrix(int SparseMatrix matrix[MAX][3],int rows)
{

printf("\n Row column value\n");

for(int i=0;i< rows;i++)
{
printf("Row:%d,col:%d,value:%d\n",matrix[i][0],&matrix[i][1],&matrix[i][2]);
scanf("%d",&rows);
for(int i=0;i<*rows;i++){
  printf("enter row index column index and value for element %d: ",i+1);
  scanf("%d %d


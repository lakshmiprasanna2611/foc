#include<stdio.h>

#include<conio.h>

void main()

{

int a[10][10],b[10][10],i,j,m,n;

clrscr();

printf("input row &column of matrix:");

scanf("%d%d",&n,&m);

printf("enter the elements of matrix\n");

for(i=0;i<n;++i)

for(j=0;j<m;++j)

scanf("%d",&a[i][j]);

for(i=0;j<m;++i)

for(j=0;j<n;++j)

b[i][j]=a[j][i];

printf("transpose of the matrix is:\n");

for(i=0;i<m;++i)

{

for(j=0;j<n;++j)

printf("%3d",b[10][10]);

printf("\n");

}

getch();

}

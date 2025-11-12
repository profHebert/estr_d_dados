// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int q=15;
 char mat[q][q];
 for(int i=0;i<q;i++){
     for(int j=0;j<q;j++){
         mat[i][j]='*';
     }
 }
  for(int i=0;i<q;i++){
     for(int j=0;j<q;j++){
        //  if(i==j || i==q-1-j)
        // if(i==q/2||j==0||j==q-1)
        // if(i==j||i==q-1-j||i==q/2||j==q/2||i==0||i==q-1||j==0||j==q-1)
        if(i==0||i==q/2||j==0)
         printf("%c",mat[i][j]);
         else printf(" ");
     }
     printf("\n");
 }
 printf("\n-------\n");
    int matriz [4][4] = { 
		{1, 3, 5, 7},
		{2, 4, 6, 8},
		{1, 9, 2, 6},
		{7, 8, 5, 3}
	};
	for(int i=0; i<4;i++){
	    for(int j=0;j<4;j++){
//	        if(i==0&&j==0|| i==0&&j==4-1||i==4-1&&j==0||i==4-1&&j==4-1)
            if(i==j||i==4-1-j)
	        printf("%d",matriz[i][j]);
	        else
	        printf(" ");
	    }
	    printf("\n");
	}
	
	
    return 0;
}
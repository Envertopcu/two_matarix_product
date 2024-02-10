#include<stdio.h>
#include<stdlib.h>

int main(void){
    int i, j, k, row1, column1, row2, column2, num1, sum = 0;
    
    printf("enter the number of row1: ");
    scanf("%d", &row1);
    printf("enter the number of column1: ");
    scanf("%d", &column1);

    printf("enter the number of row2: ");
    scanf("%d", &row2);
    printf("enter the number of column2: ");
    scanf("%d", &column2);
    
    int matrix1[row1][column1];
    int matrix2[row2][column2];
    int matrix3[row1][column2];
    
    if(column1==row2){
        
        printf("enter the value for matrix1: \n");
        
        for(i=0; i<row1; i++){
            for(j=0; j<column1; j++){
                printf("matrix1[%d][%d] = ", i, j);
                scanf("%d", &num1);

                matrix1[i][j] = num1;
                num1=0 ;
            }
        }

        printf("enter the value for matrix2: \n");
        
        for(i=0; i<row2; i++){
            for(j=0; j<column2; j++){
                printf("matrix2[%d][%d] = ", i, j);
                scanf("%d", &num1);
                
                matrix2[i][j] = num1; 
                num1=0;
            }
        }

        for(i=0; i<row1; i++){
            for(j=0; j<column2;j++){
                for(k=0; k<row2; k++){
                    sum=sum + ((matrix1[i][k]) * (matrix2[k][j]));
                }
                matrix3[i][j]=sum;
                sum=0;
            }
        }
        
        printf("matrix1: \n");
        
        for(i=0; i<row1; i++){
            for(j=0; j<column1; j++){
                printf("%5d", matrix1[i][j]);
            }
            printf("\n");
        }
        
        printf("matrix2: \n");
        
        for(i=0; i<row2; i++){
            for(j=0; j<column2; j++){
                printf("%5d", matrix2[i][j]);
            }
            printf("\n");
        }
        printf("product: \n");
        
        for(i=0; i<row1; i++){
            for(j=0; j<column2; j++){
                printf("%5d", matrix3[i][j]);
            }
            printf("\n\n");
        }

    }
        else{
            printf("These matrices don't product.");
        }

    return 0 ;
}
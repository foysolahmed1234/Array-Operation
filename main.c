#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100], n=0, choice, val, position, i, j, temp;
    while(1){
        printf("\n1.Insert\n2.Update\n3.Delete\n4.Sort\n5.Search\n6.Display\n7.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice==1)
        {
            printf("Enter value to insert: ");
            scanf("%d", &val);
            arr[n]=val;
            n++;
            printf("Inserted!\n");
        } else if(choice==2){
            printf("Enter position to update: ");

            scanf("%d", &position);
            if(position>=0 && position<n){
                printf("Enter new value: ");
                scanf("%d", &val);
                arr[position]=val;
                printf("Updated!\n");
            }else
            {
                printf("Invalid position!\n");
            }
        }else if(choice==3){
            printf("Enter position to delete: ");
            scanf("%d", &position);


            if(position>=0 && position<n){
                for(i=position; i<n-1; i++){
                    arr[i]=arr[i+1];
                }
                n--;
                printf("Deleted!\n");
            }else{
                printf("Invalid Position!\n");
            }
        }else if(choice==4){
            for(i=0; i<n-1; i++){
                for(j=i+1; j<n; j++){
                    if(arr[i]>arr[j]){
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                    }
                }
            }

            printf("Array Sorted!\n");
        }else if(choice==5){
            printf("Enter value to search: ");
            scanf("%d", &val);
            int found=0;
            for(i=0; i<n; i++){
                if(arr[i]==val){
                    printf("Found at position %d\n", i);
                    found=1;
                    break;
                }
            }
            if(!found)
                printf("Not found!\n");
            }else if(choice==6){
                printf("Array: ");
                for(i=0; i<n; i++){
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            else if(choice==7){
                printf("Goodbye!\n");
                break;
            }else{
                printf("Invalid choice!\n");
            }

    }
    return 0;
}

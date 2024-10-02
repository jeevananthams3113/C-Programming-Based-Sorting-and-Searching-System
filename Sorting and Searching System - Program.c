//==========================================  SORTING AND SEARCHING SYSTEM  ===========================================================//





//---------------------------------------------------HEADER FILES----------------------------------------------------------------------//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


//----------------------------------------------------SWAP FUNCTION-------------------------------------------------------------------//
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}


//------------------------------------------------------------------------------------------------------------------------------------//





//--------------------------------------NORMAL SORT FUNCTION FOR DESCENDING ORDER-----------------------------------------------------//
void normalSort_descendingOrder(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                swap(&a[i],&a[j]);
            }
        }
    }
}
//------------------------------------------------------------------------------------------------------------------------------------//




//-------------------------------------BUBBLE SORT FUNCTION FOR DESCENDING ORDER------------------------------------------------------//
void bubbleSort_descendingOrder(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
//------------------------------------------------------------------------------------------------------------------------------------//




//------------------------------------SELECTION SORT FUNCTION FOR DESCENDING ORDER----------------------------------------------------//
void selectionSort_descendingOrder(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int max=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>a[max])
            {
                max=j;
            }
        }
        swap(&a[i],&a[max]);
    }
}
//------------------------------------------------------------------------------------------------------------------------------------//




//-------------------------------------INSERTION SORT FUNCTION FOR DESCENDING ORDER---------------------------------------------------//
void insertionSort_descendingOrder(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]<key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
//------------------------------------------------------------------------------------------------------------------------------------//




//---------------------------MERGER FUNCTION FOR IMPLEMENTATION OF MERGE SORT FOR DESCENDING ORDER-----------------------------------//

void merger_descendingOrder(int a[],int start,int mid,int end)
{
    int ls=mid-start+1,rs=end-mid;
    int la[ls],ra[rs];
    int i,j;
    for(i=0;i<ls;i++)
    {
        la[i]=a[i+start];
    }
    for(j=0;j<rs;j++)
    {
        ra[j]=a[j+mid+1];
    }
    i=j=0;
    int k=start;
    while(i<ls && j<rs)
    {
        if(la[i]>ra[j])
        {
            a[k++]=la[i++];
        }
        else
        {
            a[k++]=ra[j++];
        }
    }
    while(i<ls)
    {
        a[k++]=la[i++];
    }
    while(j<rs)
    {
        a[k++]=ra[j++];
    }
}
//----------------------------------------------------------------------------------------------------------------------------------//




//--------------------------------------MERGE SORT FUNCTION FOR DESCENDING ORDER----------------------------------------------------//
void mergeSort_descendingOrder(int a[],int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        mergeSort_descendingOrder(a,start,mid);
        mergeSort_descendingOrder(a,mid+1,end);
        merger_descendingOrder(a,start,mid,end);
    }
}
//-----------------------------------------------------------------------------------------------------------------------------------//




//-----------------------PARTITION FUNCTION FOR IMPLEMENTATION OF QUICK SORT FOR DESCENDING ORDER-----------------------------------//
int partition_descendingOrder(int a[],int start,int end)
{
    int pivot=a[end];
    int pi=start-1;
    for(int i=start;i<end;i++)
    {
        if(a[i]>pivot)
        {
            swap(&a[i],&a[++pi]);
        }
    }
    swap(&a[end],&a[++pi]);
    return pi;
}
//-----------------------------------------------------------------------------------------------------------------------------------//




//---------------------------------------QUICK SORT FUNCTION FOR DESCENDING ORDER---------------------------------------------------//
void quickSort_descendingOrder(int a[],int start,int end)
{
    if(start<end)
    {
        int pi=partition_descendingOrder(a,start,end);
        quickSort_descendingOrder(a,start,pi-1);
        quickSort_descendingOrder(a,pi+1,end);
    }
}
//----------------------------------------------------------------------------------------------------------------------------------//








//--------------------------------------NORMAL SORT FUNCTION FOR ASCENDING ORDER-----------------------------------------------------//
void normalSort_ascendingOrder(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                swap(&a[i],&a[j]);
            }
        }
    }
}
//------------------------------------------------------------------------------------------------------------------------------------//




//-------------------------------------BUBBLE SORT FUNCTION FOR ASCENDING ORDER------------------------------------------------------//
void bubbleSort_ascendingOrder(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
//------------------------------------------------------------------------------------------------------------------------------------//




//------------------------------------SELECTION SORT FUNCTION FOR ASCENDING ORDER----------------------------------------------------//
void selectionSort_ascendingOrder(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        swap(&a[i],&a[min]);
    }
}
//------------------------------------------------------------------------------------------------------------------------------------//




//-------------------------------------INSERTION SORT FUNCTION FOR ASCENDING ORDER---------------------------------------------------//
void insertionSort_ascendingOrder(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
//------------------------------------------------------------------------------------------------------------------------------------//




//---------------------------MERGER FUNCTION FOR IMPLEMENTATION OF MERGE SORT FOR ASCENDING ORDER-----------------------------------//
void merger_ascendingOrder(int a[],int start,int mid,int end)
{
    int ls=mid-start+1,rs=end-mid;
    int la[ls],ra[rs];
    int i,j;
    for(i=0;i<ls;i++)
    {
        la[i]=a[i+start];
    }
    for(j=0;j<rs;j++)
    {
        ra[j]=a[j+mid+1];
    }
    i=j=0;
    int k=start;
    while(i<ls && j<rs)
    {
        if(la[i]<ra[j])
        {
            a[k++]=la[i++];
        }
        else
        {
            a[k++]=ra[j++];
        }
    }
    while(i<ls)
    {
        a[k++]=la[i++];
    }
    while(j<rs)
    {
        a[k++]=ra[j++];
    }
}
//------------------------------------------------------------------------------------------------------------------------------------//




//--------------------------------------MERGE SORT FUNCTION FOR ASCENDING ORDER------------------------------------------------------//
void mergeSort_ascendingOrder(int a[],int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        mergeSort_ascendingOrder(a,start,mid);
        mergeSort_ascendingOrder(a,mid+1,end);
        merger_ascendingOrder(a,start,mid,end);
    }
}
//------------------------------------------------------------------------------------------------------------------------------------//




//-----------------------PARTITION FUNCTION FOR IMPLEMENTATION OF QUICK SORT FOR ASCENDING ORDER-------------------------------------//
int partition_ascendingOrder(int a[],int start,int end)
{
    int pivot=a[end];
    int pi=start-1;
    for(int i=start;i<end;i++)
    {
        if(a[i]<pivot)
        {
            swap(&a[i],&a[++pi]);
        }
    }
    swap(&a[end],&a[++pi]);
    return pi;
}
//------------------------------------------------------------------------------------------------------------------------------------//




//-------------------------QUICK SORT FUNCTION FOR ASCENDING ORDER-------------------------------------------------------------------//
void quickSort_ascendingOrder(int a[],int start,int end)
{
    if(start<end)
    {
        int pi=partition_ascendingOrder(a,start,end);
        quickSort_ascendingOrder(a,start,pi-1);
        quickSort_ascendingOrder(a,pi+1,end);
    }
}
//------------------------------------------------------------------------------------------------------------------------------------//






//----------------------------------LINEAR SEARCH------------------------------------------------------------------------------------//

bool linearSearch(int a[], int n, int num)
{
    for(int i=0;i<n;i++)
    {
        if(num == a[i])
            return true;
    }
    return false;
}
//------------------------------------------------------------------------------------------------------------------------------------//




//----------------------------------BINARY SEARCH-------------------------------------------------------------------------------------//

int binarySearch(int a[], int n, int num) {
    int start = 0, end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (a[mid] == num)
            return true;

        if (a[mid] < num)
            start = mid + 1;
            
        else
            end = mid - 1;
    }

    return false;
}

//-----------------------------------------------------------------------------------------------------------------------------------//





//----------------------------------DISPLAY FUNCTION---------------------------------------------------------------------------------//
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
//----------------------------------------------------------------------------------------------------------------------------------//





//-----------------------------------------------------MAIN FUNCTION----------------------------------------------------------------//

int main()
{
    printf("\n\n==================================================    SORTING AND SEARCHING SYSTEM    ==================================================\n\n\n\n");
    int n;
    int *a;
    printf("CHOOSE AN OPTION BELOW:\n\n");
    printf("1.ARRAY SORTING    2.ARRAY SEARCHING\n\n");
    int choose;
    scanf("%d",&choose);
    
    if(choose == 1)
    {
        printf("\n1.ARRAY SORTING\n\n");
        printf("ENTER THE NUMBER OF ELEMENTS YOU WANT TO STORE IN THE ARRAY:\n");
        scanf("%d",&n);
        if(n<0)
        {
            printf("\nSORRY...!!!  THE NEGATIVE NUMBER OF ELEMENTS CANNOT BE CONSIDERED.");
            return 0;
        }
        if(n==0)
        {
            printf("\nAT LEAST 1 ELEMENT MUST BE PRESENT IN THE ARRAY...!!!     PLEASE PROVIDE MORE THAN 0 ELEMENT(S) TO THE ARRAY.");
            return 0;
        }
        printf("\n");
        
        if(n==1)
            printf("ENTER THE %d ELEMENT:\n",n);
        else
            printf("ENTER THE %d ELEMENTS:\n",n);
            
        a=(int *)malloc(sizeof(int)*n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("\nIN WHICH ORDER YOU WANT TO SORT THE ARRAY ELEMENTS?\n\n");
        printf("1.ASCENDING ORDER\n2.DESCENDING ORDER\n\n");
        int order;
        scanf("%d",&order);
        if(order==1)
            printf("\n1.ASCENDING ORDER\n");
        else if(order==2)
            printf("\n2.DESCENDING ORDER\n");
        else
        {
            printf("YOU MUST CHOOSE ONLY FROM THE TWO GIVEN TYPES OF SORTING ORDERS (EITHER ASCENDING OR DESCENDING).");
            return 0;
        }
        
        int choice,isSorted=0;
        printf("\nENTER YOUR CHOICE FOR THE SORTING ALGORITHM YOU WANT TO USE:\n\n");
        printf("1.NORMAL SORT\n2.BUBBLE SORT\n3.SELECTION SORT\n4.INSERTION SORT\n5.MERGE SORT\n6.QUICK SORT\n\n");
        scanf("%d",&choice);
        if(choice>=1 && choice<=6)
            isSorted=1;
            
        switch(choice)
        {
            case 1:
            printf("\n1.NORMAL SORT:\n\n");
            if(order==1)
                normalSort_ascendingOrder(a,n);
            else if(order==2)
                normalSort_descendingOrder(a,n);
            if(isSorted)
            {
                printf("SORTED ARRAY:\n");
                display(a,n);
            }
            printf("\n\nTIME COMPLEXITY & SPACE COMPLEXITY:\n\n");
            printf("TIME COMPLEXITY : O(N^2)\nSPACE COMPLEXITY : O(1)");
            break;
            case 2:
            printf("\n2.BUBBLE SORT:\n\n");
            if(order==1)
                bubbleSort_ascendingOrder(a,n);
            else if(order==2)
                bubbleSort_descendingOrder(a,n);
            if(isSorted)
            {
                printf("SORTED ARRAY:\n");
                display(a,n);
            }
            printf("\n\nTIME COMPLEXITY & SPACE COMPLEXITY:\n\n");
            printf("TIME COMPLEXITY : O(N^2)\nSPACE COMPLEXITY : O(1)");
            break;
            case 3:
            printf("\n3.SELECTION SORT:\n\n");
            if(order==1)
                selectionSort_ascendingOrder(a,n);
            else if(order==2)
                selectionSort_descendingOrder(a,n);
            if(isSorted)
            {
                printf("SORTED ARRAY:\n");
                display(a,n);
            }
            printf("\n\nTIME COMPLEXITY & SPACE COMPLEXITY:\n\n");
            printf("TIME COMPLEXITY : O(N^2)\nSPACE COMPLEXITY : O(1)");
            break;
            case 4:
            printf("\n4.INSERTION SORT:\n\n");
            if(order==1)
                insertionSort_ascendingOrder(a,n);
            else if(order==2)
                    insertionSort_descendingOrder(a,n);
            if(isSorted)
            {
                printf("SORTED ARRAY:\n");
                display(a,n);
            }
            printf("\n\nTIME COMPLEXITY & SPACE COMPLEXITY:\n\n");
            printf("TIME COMPLEXITY : O(N^2)\nSPACE COMPLEXITY : O(1)");
            break;
            case 5:
            printf("\n5.MERGE SORT:\n\n");
            if(order==1)
                mergeSort_ascendingOrder(a,0,n-1);
            else if(order==2)
                mergeSort_descendingOrder(a,0,n-1);
            if(isSorted)
            {
                printf("SORTED ARRAY:\n");
                display(a,n);
            }
            printf("\n\nTIME COMPLEXITY & SPACE COMPLEXITY:\n\n");
            printf("TIME COMPLEXITY : O(N LOG N)\nSPACE COMPLEXITY : O(N)");
            break;
            case 6:
            printf("\n6.QUICK SORT:\n\n");
            if(order==1)
                quickSort_ascendingOrder(a,0,n-1);
            else if(order==2)
                quickSort_descendingOrder(a,0,n-1);
            if(isSorted)
            {
                printf("SORTED ARRAY:\n");
                display(a,n);
            }
            printf("\n\nTIME COMPLEXITY & SPACE COMPLEXITY:\n\n");
            printf("TIME COMPLEXITY : O(N LOG N)\nSPACE COMPLEXITY : O(N)");
            break;
            default:
            printf("INVALID CHOICE ENTERED, PLEASE ENTER A VALID CHOICE!");
            break;
        }
        if(!isSorted)
        {
            printf("NORMAL ARRAY:\n");
            display(a,n);
        }
    }
    
    if(choose == 2)
    {
        printf("\nWHICH TYPE OF SEARCHING DO YOU WANT TO USE?\n\n");
        printf("1.LINEAR SEARCH     2.BINARY SEARCH (ONLY APPLICABLE FOR A SORTED ARRAY)\n\n");
        int searchChoice;
        scanf("%d",&searchChoice);
        
        int num;
        bool isPresent;
        if(searchChoice == 1)
        {
            printf("\n\n1.LINEAR SEARCH\n\n");
            printf("\nENTER THE NUMBER OF ELEMENTS YOU WANT TO STORE IN THE ARRAY:\n");
            scanf("%d",&n);
            if(n<0)
            {
                printf("\nSORRY...!!!  THE NEGATIVE NUMBER OF ELEMENTS CANNOT BE CONSIDERED.");
                return 0;
            }
            if(n==0)
            {
                printf("\nAT LEAST 1 ELEMENT MUST BE PRESENT IN THE ARRAY...!!!     PLEASE PROVIDE MORE THAN 0 ELEMENT(S) TO THE ARRAY.");
                return 0;
            }
            printf("\n");
            
            if(n==1)
                printf("ENTER THE %d ELEMENT:\n",n);
            else
                printf("ENTER THE %d ELEMENTS:\n",n);
                
            a=(int *)malloc(sizeof(int)*n);
            for(int i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            printf("\nENTER THE NUMBER YOU WANT TO SEARCH:\n");
            scanf("%d",&num);
            isPresent = linearSearch(a,n,num);
            isPresent?printf("\n%d IS PRESENT IN THE ARRAY\n",num):printf("\n%d IS NOT FOUND IN THE ARRAY\n",num);
            printf("\n\nTIME COMPLEXITY & SPACE COMPLEXITY:\n\n");
            printf("TIME COMPLEXITY : O(N)\nSPACE COMPLEXITY : O(1)");
        }
        if(searchChoice == 2)
        {
            printf("\n\n2.BINARY SEARCH (ONLY APPLICABLE FOR A SORTED ARRAY)\n\n");
            printf("\nENTER THE NUMBER OF ELEMENTS YOU WANT TO STORE IN THE ARRAY:\n");
            scanf("%d",&n);
            
            if(n<0)
            {
                printf("\nSORRY...!!!  THE NEGATIVE NUMBER OF ELEMENTS CANNOT BE CONSIDERED....");
                return 0;
            }
            if(n==0)
            {
                printf("\nAT LEAST 1 ELEMENT MUST BE PRESENT IN THE ARRAY...!!!     PLEASE PROVIDE MORE THAN 0 ELEMENT(S) TO THE ARRAY.");
                return 0;
            }
            printf("\n");
            
            if(n==1)
                printf("ENTER THE %d ELEMENT:\n",n);
            else
                printf("ENTER THE %d ELEMENTS:\n",n);
                
            a=(int *)malloc(sizeof(int)*n);
            for(int i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            
            int ascending = 1;  
            int descending = 1;

            for (int i=0;i<n-1;i++)
            {
                 if(a[i] > a[i+1])
                {
                    ascending = 0;
                }
                if(a[i] < a[i+1])
                {
                    descending = 0;
                }
            }
            if(!(ascending || descending))
            {
                printf("ARRAY IS NOT SORTED. CAN'T USE BINARY SEARCH\n\n");
                return 0;
            }
            
            printf("\nENTER THE NUMBER YOU WANT TO SEARCH:\n");
            scanf("%d",&num);
            isPresent = binarySearch(a,n,num);
            isPresent?printf("\n%d IS PRESENT IN THE ARRAY\n",num):printf("\n%d IS NOT FOUND IN THE ARRAY\n",num);
            printf("\n\nTIME COMPLEXITY & SPACE COMPLEXITY:\n\n");
            printf("TIME COMPLEXITY : O(LOG N)\nSPACE COMPLEXITY : O(1)");
        }
    }
    else
    {
        printf("PLEASE ENTER A VALID CHOISE.");
    }

    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------//
#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[10];
    int age;
}RECORD;

void sort_age(RECORD *a,int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j].age>a[j+1].age)
            {
                RECORD temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void sort_name(RECORD *a,int n)
{
    int i,j;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(strcmp(a[j].name,a[j+1].name)>0)
            {
                RECORD temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void display(RECORD *a,int s)
{
    int i;
    
    for(i=0;i<s;i++)
    {
        printf("\nName : %s",a[i].name);
        printf("\nAge : %d\n",a[i].age);
    }
}



int main()
{   RECORD rec[4];
	int i,temp, choice,start;
	for(i=0;i<4;i++)
	{
		printf("Enter name:");
		scanf("%s",rec[i].name);
		printf("Enter age:");
		scanf("%d",&rec[i].age);
		fflush(stdin);
	}
	start = 1;
	while( start )
	{
		printf("\n Press 1 For Sorting By Age ");
		printf("\n Press 2 For Sorting By Name ");
		printf("\n Press 3 For Display ");
		printf("\n Press 4 For Exit \n");
        printf("enter choice:");
        scanf("%d",&choice);
    switch(choice)
   {
      case 1:
         sort_age(rec,4);
         printf("sorting by agewise is done");
         break;
      case 2:
	    sort_name(rec,4);
	    printf("sorting by namewise is done");
	    break;
	  case 3:
	  	printf("details are:");
	  	display(rec , 4);
	  	break;
	  case 4:
	  	start=0;
	  	printf("bye bye");
	  	break;
	  default:
      {
       printf("Entered Choice is Invalid, Try Again");
      }
   }
   }
}

//4.5.13.20

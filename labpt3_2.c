#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 256

struct students
{
    int grade;
    char name[256];
}student[SIZE];

void sortBeta(struct students student[],unsigned stdNr){
    char temp[100];
    unsigned tmp;
    for(unsigned i=0;i<(stdNr-1);i++){
        for(unsigned j=i+1;j<stdNr;j++){
            if(strcmp(student[i].name,student[j].name)>0){
                strcpy(temp,student[i].name);
                tmp=student[i].grade;
                strcpy(student[i].name,student[j].name);
                student[i].grade=student[j].grade;
                strcpy(student[j].name,temp);
                student[j].grade=tmp;
            }
        }
    }
    if (student[0].grade==0)
    {
        for (unsigned i = 0; i < stdNr; i++)
        {
            strcpy(student[i].name,student[i+1].name);
            student[i].grade=student[i+1].grade;
        }
    }

}

void sortGrades(struct students student[],unsigned stdNr){
    unsigned temp;
    char tmp[100];
    for (unsigned i = 0;i<(stdNr-1); i++)
    {
        for (unsigned j = i+1;j<stdNr; j++)
        {
            if (student[i].grade<student[j].grade)
            {
                temp=student[i].grade;
                strcpy(tmp,student[i].name);
                student[i].grade=student[j].grade;
                strcpy(student[i].name,student[j].name);
                student[j].grade=temp;
                strcpy(student[j].name,tmp);
            }

        }

    }
    if (student[0].grade==0)
    {
        for (unsigned i = 0; i < stdNr; i++)
        {
            strcpy(student[i].name,student[i+1].name);
            student[i].grade=student[i+1].grade;
        }
    }

}

int main()
{
    int n=0;
    int key=1;
    int nishere=0;
    int studentAss=0;
    while(key)
    {
	printf(" 0. Exit program\n 1. Give N, number of students\n 2. Enter the students\n 3. Display class in alphabetic order \n 4. Display class creating a top based on grades\n 5. Display the first 3 students according to their grades\n");
	scanf("%d",& key);
	if(key==1 && !nishere)
	{
	    printf("Number of students\n");
	    scanf("%d",&n);
	    nishere=1;
	}   
	else if(key==1 && nishere)
	{
	    printf("Number of students allready initialized\n");
	}
	else if(key==2 && !studentAss && n)
	{
	    printf("Enter the students name and grades\n");
	    for(int i=0;i<n;i++)
	    {
		scanf("%s %d",student[i].name, &student[i].grade);
	    }
	    studentAss=1;
	}
	else if(key==2 && studentAss)
	{
	    printf("\nNames and grades allready entered\n");
	}
	else if(key==3)
	{
	    sortBeta(student,n);
	    for(int i=0;i<n;i++)
	    {
		printf("%d)  %s %d\n",i+1,student[i].name,student[i].grade);
	    }
	}
	else if(key==4)
	{
	    sortGrades(student,n);
	    for(int i=0;i<n;i++)
	    {
		printf("%d) %s %d\n",i+1,student[i].name,student[i].grade);
	    }
	}
	else if(key==5)
	{
	    sortGrades(student,n);
	    
	    for(int i=0;i<3;i++)
	    {
		if(student[i].grade!=0)
    		printf("%d) %s %d\n", i+1,student[i].name,student[i].grade);
	    }
	}
	else
	{
    	    printf("U have down syndrome\n");
	}
    }

    return 0;
}
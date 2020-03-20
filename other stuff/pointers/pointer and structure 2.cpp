#include<stdio.h>


struct student_data
{
    char name[5];
    int dsd;
    int dic;
    int total;  
};

int main()
{
struct student_data s[2];  // array of size 2


int i;

for(i=0; i<2; i++)      // i will have values 0 and 1 which is 2 (same as size of your array)
{
    printf("Enter Name of Student\n");
    scanf("%s", s[i].name);

    printf("\nEnter marks of DSD\n");
    scanf("%d", &s[i].dsd);

    printf("Enter marks of DIC\n");
    scanf("%d", &s[i].dic);

    s[i].total = s[i].dsd+s[i].dic;

}

    printf("%-10s %7s %7s  %7s\n ","Name","DSD","DIC","Total");

    for(i=0; i<2; i++)   // same mistake was repeated here
    {
        printf("%-10s %5d  %6d     %6d\n",s[i].name,s[i].dsd,s[i].dic,s[i].total);
    }
return 0;
}

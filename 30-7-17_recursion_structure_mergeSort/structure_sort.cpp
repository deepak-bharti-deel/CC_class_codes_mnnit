#include<bits/stdc++.h>
using namespace std;
struct student
{
	char name[100];
	int age;
};
int n;
void structure_sort(student students[]);
int main()
{  
	student students[100];
	int i; 

	scanf("%d",&n);
	for(i=0; i<n; ++i){
		scanf("%s",students[i].name);
		scanf("%d",&students[i].age);
	}
	structure_sort(students);

	for(i=0; i<n; ++i){
		printf("%s %d\n",students[i].name,students[i].age);
	}

	return 0;
}

void structure_sort(student students[])
{

	int i,j;
	for(i=0; i<n-1; ++i){
		int min=i;
		for(j=i+1; j<n; ++j){
			if(strcmp(students[j].name,students[i].name)<0){
				char temp[100];
				strcpy(temp,students[i].name);
				strcpy(students[i].name,students[j].name);
				strcpy(students[j].name,temp);
				int temp_age;
				temp_age = students[j].age;
				students[j].age = students[i].age;
				students[i].age = temp_age;
			}
		}
	}
}
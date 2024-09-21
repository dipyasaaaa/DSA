#include<stdio.h>

struct Dibya{
    int age;
    double height;
    char name[20];
};

int main(){
    struct Dibya d[3];

    for(int i=0;i<3;i++){
        printf("Enter the age of person:");
        scanf("%d", &d[i].age);
        printf("Enter the height of the person:");
        scanf("%lf",&d[i].height);
        printf("Enter the name of the person:");  
        scanf("%s",d[i].name);

    }
    for(int j=0;j<3;j++){
        printf("age of the person is: %d\n",d[j].age);
        printf("height of the person is: %lf\n",d[j].height);
        printf("name of the person is: %s\n",d[j].name);

    }
    return 0;
}
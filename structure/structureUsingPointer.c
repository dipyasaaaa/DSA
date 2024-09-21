#include<stdio.h>
struct student{ 
    int age;
    char name[100];
    
};
int main(){
    struct student* s1;
    struct student obj;
    //obj.s1 = 133423;// you can store data in pointer but that's bad practice
    // printf("%d",obj.s1);
    s1->age = 18;
    printf("%d", s1->age);
    printf("%d",obj.age);
    s1 = &obj;
    s1->age = 19234;
    return 0;
}
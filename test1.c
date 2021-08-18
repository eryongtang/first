#include<stdio.h>
#include<cstring>
struct student{
    int age;
    char name[20];
};
int main(){
    struct student s={16,"张三"};
    struct student s1 = {20,"李四"}；
    printf("%d %s\n",s.age,s.name);
    return 0;
}

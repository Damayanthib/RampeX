#include<stdio.h>
int main(){
    int java,se,oop,python,ai,average,sum;
    printf("Enter your JAVA mark:");
    scanf("%d",&java);
    printf("Enter your Software Engineering mark:");
    scanf("%d",&se);
    printf("Enter your OOPs mark:");
    scanf("%d",&oop);
    printf("Enter your Python mark:");
    scanf("%d",&python);
    printf("Enter your Artifcial Intelligence mark:");
    scanf("%d",&ai);
    sum=java+se+oop+python+ai;
    average=sum/5;
    printf("Total Marks Obtained %d !\n",sum);
    printf("Average %d !\n",average);
    if(average>=35){
        printf("Pass\n Your Grade is\t");
    if (average >= 90) {
        printf("Grade A\n");
    } else if (average >= 75) {
        printf("Grade B\n");
    } else if (average >= 60) {
        printf("Grade C\n");
    } else if (average >= 38) {
        printf("Grade D\n");
    } }else {
        printf("Fail!\n");
    }
    return 0;
}
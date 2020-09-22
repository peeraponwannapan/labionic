#include<stdio.h>
#include<iostream>
#include<string.h>
class Student
{
   public:char firstname[100] = "John";
   public:char lastname[100] = "Lennon";
   public:int score = 100;
   
   public:char getGrade(){
     if(score<50){
         return 'F';
     }
     else if(score <60){
         return 'D';
     }
     else if(score<70){
         return 'C';
     }
     else if(score<80){
         return 'B';
     }
     else{
         return 'A';
     }
    }
};
int main(int argc, char const *argv[])
{
    Student student2 = Student();
    printf("\n Student2 Grade = %c",student2.getGrade());
    return 0;
}


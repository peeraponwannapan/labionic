#include<stdio.h>
#include<string.h>

class Student{
    private: char firstname[100];
    private: char lastname[100];
    public: int score = 50;

    public:Student(){
 
    }
    public:int getScore(){
        return score;
    }
    public:char setFirstName(){
        
    }
};
main()
{
    Student student1 = Student();
    student1.setFirstName("man");
    printf("\nStudent1 Score = %s ",student1.setFirstName());
    printf("\nStudent1 Score = %d ",student1.getScore());
    

}

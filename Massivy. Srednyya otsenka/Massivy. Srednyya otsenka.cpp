#include <iostream>

int main()
{
    int studnets[] = { 74,69,83,88,76,91,81,71,69,82 };
    int studentsSize = sizeof(studnets) / sizeof(studnets[0]); 
    int totalScore = 0; //В переменную totalScore суммируются балы всех студентов
        
    for (int person = 0; person < studentsSize; person++)
    {
        totalScore += studnets[person];
    }

    double avarageScoreStudents = static_cast<double> (totalScore) / studentsSize;

    std::cout << "Avarage score of all students score is: " << avarageScoreStudents << std::endl;
}


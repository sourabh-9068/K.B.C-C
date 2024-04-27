#include<stdio.h>

int main() 
{
    int choice;
    int score = 0; // Initialize score to zero
    printf("\n\t\tQuiz\n");
    printf("1. Start the quiz\n");

    while(1)
    {
            printf("\nQ1. What is the capital city of Nepal?\n1. Hetauda\n2. Kathmandu\n3. Pokhara\n4. Butwal\n");
           printf("enter");
           
            scanf("%d", &choice);
          if(choice==2)
          {
                    printf("Correct!\n");
                    score++; // Increment score for correct answer
                  
          }
                else
                 {   printf("Wrong. The correct answer is 2. Kathmandu.\n");
                    score--;
                 }


            printf("\nQ2. What is the capital city of India?\n1. Kolkata\n2. Delhi\n3. Bihar\n4. Dehradun\n");
            scanf("%d", &choice);
         if(choice==2)
                  {  printf("Correct!\n");
                    score++;
                  }
                  else
                  {
                    printf("Wrong. The correct answer is 2. Delhi.\n");
                score--;
                 }
            

            printf("\nQ3. What is the capital city of USA?\n1. Angeles\n2. New York City\n3. San Francisco\n4. Washington, D.C.\n");
            scanf("%d", &choice);
         if(choice==4)
              {
                    printf("Correct!\n");
                    score++;
                }
                else
                {
                    printf("Wrong. The correct answer is 4. Washington, D.C.\n");
                    score--;
                }
      printf("\nYour score is: %d\n", score); // Display the score
    }
    
    return 0;
}
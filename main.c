#include <ctype.h>
#include <stdio.h>

int main(void) {
  char questions[][100] = {
      "1. What is the largest organ in the human body ?",
      "2. What is the name of the tallest mountain in the world?",
      "3. Who is the author of the Harry Potter book series?",
      "4. What is the chemical symbol for gold?"};
  char options[][100] = {"A. Brain",
                         "B. Liver",
                         "C. Heart",
                         "D. Lungs",
                         "A. Mount Everest",
                         "B. Mount Kilimanjaro",
                         "C. Mount Denali",
                         "D. Mount Aconcagua",
                         "A. J.K. Rowling",
                         "B. Stephen King",
                         "C. Dan Brown",
                         "D. George R.R. Martin",
                         "A. Au",
                         "B. Ag",
                         "C. Fe",
                         "D. Pb"};
  char ansoptions[4] = {'B', 'A', 'A', 'A'};
  int noofquestions = sizeof(questions) / sizeof(questions[0]);
  char answer;
  int count = 0;
  for (int i = 0; i < noofquestions; i++) {
    printf("***********************************************\n");
    printf("%s\n", questions[i]);
    printf("***********************************************\n");
    for (int j = (i * 4); j < (i * 4) + 4; j++) {
      printf("%s\n", options[j]);
    };
    printf("choose option:");
    scanf("%c", &answer);
    scanf("%c");
    answer = toupper(answer);
    if (answer == ansoptions[i]) {
      printf("correct!! \n");
      count++;
  } else {
      printf("Incorrect!!\n");
    };
  };
    printf("***********************************************\n");
  printf("your score is %d / %d \n", count, noofquestions);
    printf("***********************************************\n");
return 0;
}
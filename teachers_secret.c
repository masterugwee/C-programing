#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void teachers_secret() {
    //enter your code here
    //split the the answer key and the answer of the student also split the score
    //iterate through all the answer of the student with each key and if present add the following score from the split score

    int num_of_cases;
    scanf("%d",&num_of_cases );
    char ans_key[50];
    char ans_score_char;
    int ans_score[50];
    int score = 0,i = 0;
    char stud_answer[100];
    scanf(" %[^\n]s",ans_key );
    do {
    scanf("%d%c", &ans_score[i], &ans_score_char);
    i++;
       } while(ans_score_char != '\n');
    scanf(" %[^\n]s",stud_answer);
    char * key_split, *ret;
    key_split = strtok (ans_key," ");
    i = 0;
    while (key_split != NULL)
    {
      ret=strstr(stud_answer,key_split);
      if(ret)
      {
        score += ans_score[i];
      }
      key_split = strtok (NULL, " ");
      i++;
      if(i > num_of_cases)
      {
        printf("Your input is wrong!\n");
        break;
      }
    }
    if(i == num_of_cases){
    printf("%d\n",score );
  }
}

int main() {
    teachers_secret();
    return 0;
}

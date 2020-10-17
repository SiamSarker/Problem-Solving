#include "stdio.h"

struct Student{
  char name[20];
  float gpa[3];
  int ID;
};

int find_max_cgpa(struct Student student[]){
  int avg[];
  int max = 0, index = 0;
  for(int i = 0; i<n; i++)
  {
    for(int j = 0; j<n; j++){
      avg[i] += student[i].cgpa[j];
    }
    avg[i] = avg[i]/3;
    if(avg[i] > max)
    {
      max = avg[i];
      index = i;
    }
  }
  return index;
}

int main(int argc, char const *argv[]) {
  int n, avg[i];
  scanf("%d", &n);
  struct Student student[n];
  for(int i = 0; i<n; i++){
    scanf("%s", student[i].name);
    for(int j = 0; j<n; j++){
      scanf("%f", &student[i].gpa[j]);
    }
    scanf("%d", &student[i].ID);
  }

  int index = find_max_cgpa(student);
  for(int j = 0; j<n; j++){
    avg[index] += student[i].cgpa[index];
  }

  printf("%s %f %d", student.name[index], cgpa, student.ID[i]);

  return 0;
}

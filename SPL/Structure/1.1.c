#include "stdio.h"
#include "string.h"

struct time{
  int hr, min, sec;
};

int main(int argc, char const *argv[]) {
  struct time time1, time2;
  scanf("%d%d%d", &time1.hr, &time1.min, &time1.sec);
  scanf("%d%d%d", &time2.hr, &time2.min, &time2.sec);
  if(time1.hr >= time2.hr && time1.min >= time2.min && time1.sec >= time2.sec)
    printf("%d %d %d\n", time1.hr, time1.min, time1.sec);
  else
    printf("%d %d %d\n", time2.hr, time2.min, time2.sec);
  return 0;
}

#include "stdio.h"
#include "string.h"

struct Measurement{
  int yard, foot, inch;
};

int main(int argc, char const *argv[]) {
  int n, i, j;
  scanf("%d", &n);
  struct Measurement arr[n], arr1;
  arr1.yard = 0;
  arr1.foot = 0;
  arr1.inch = 0;
  for(i = 0; i<n; i++)
    {
      scanf("%d", &arr[i].yard);
      arr1.yard += arr[i].yard;
      scanf("%d", &arr[i].foot);
      arr1.foot += arr[i].foot;
      scanf("%d", &arr[i].inch);
      arr1.inch += arr[i].inch;
    }

    printf("%d %d %d\n", arr1.yard, arr1.foot, arr1.inch);

  return 0;
}

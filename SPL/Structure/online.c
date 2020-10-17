#include "stdio.h"
struct Room{
  int length, width, room_no;
};

int main(int argc, char const *argv[]) {
  int n;
  scanf("%d", &n);
  struct Room room[n], temp;
  for(int i = 0; i<n; i++){
    scanf("%d %d %d", &room[i].length, &room[i].width, &room[i].room_no);
  }
  for(int i = 0; i<n; i++)
  {
    for(int j = 0; j<n-1; j++)
    {
      if(room[j].length * room[j].width < room[j+1].length * room[j+1].width)
      {
        temp.length = room[j].length;
        temp.width = room[j].width;
        temp.room_no = room[j].room_no;


          room[j].length = room[j+1].length;
          room[j].width = room[j+1].width;
          room[j].room_no = room[j+1].room_no;

            room[j+1].length = temp.length;
            room[j+1].width = temp.width;
            room[j+1].room_no = temp.room_no;
      }
    }
  }
  for(int i = 0; i<n; i++)
  {
    printf("%d %d %d\n", room[i].length, room[i].width, room[i].room_no);
  }
  return 0;
}

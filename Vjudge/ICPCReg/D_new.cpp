#include <iostream>

using namespace std;

int main()
{
        int W, H, N;
        bool boards[510][510];

        while(cin >> W >> H >> N)
        {
            if (W == 0 && H == 0 & N == 0) break;

            while(N--)
            {
                int x1, y1, x2, y2;
                cin >> x1 >> y1 >> x2 >> y2;

                int temp; 

                if (x1 > x2)
                {
                    temp = x1;
                    x1 = x2;
                    x2 = temp;
                }
                if (y1 > y2) 
                {
                    temp = y1;
                    y1 = y2;
                    y2 = temp;
                }

                for(int i = x1-1; i < x2; i++)
                {
                    for (int j = y1-1; j < y2; j++)
                    {
                        boards[j][i] = true;
                    }
                }

            }
            int count = 0;

            for (int n = 0; n < W; n++)
            {
                for (int m = 0; m < H; m++)
                {
                    if (boards[m][n] == false) count++;
                    else boards[m][n] = false;
                }
            }

            if(count == 0) cout << "There is no empty spots." << endl;
            else if(count == 1) cout << "There is one empty spots." << endl;
            else cout << "There are " << count << " empty sports." << endl;
        }

    return 0;
}
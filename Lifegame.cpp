#include <iostream>
using namespace std;
int main() {
    int Array[30][30];
    int NewArray[30][30];
    for(int i=0;i<30;i++)
        for(int j=0;j<30;j++)
        {
            int p=rand()%10;
            if(p>5)
                Array[i][j]=1;
            else
                Array[i][j]=0;
        }
      for (int i = 1; i < 30; i++)
            for (int j = 1; j < 30; j++) {
                int count = 0;
                /*if (Array[i + 1][j + 1] == 1)
                    count++;
                if (Array[i + 1][j] == 1)
                    count++;
                if (Array[i + 1][j - 1] == 1)
                    count++;
                if (Array[i][j + 1] == 1)
                    count++;
                if (Array[i][j - 1] == 1)
                    count++;
                if (Array[i - 1][j] == 1)
                    count++;
                if (Array[i - 1][j + 1] == 1)
                    count++;
                if (Array[i - 1][j - 1] == 1)
                    count++;*/
                count=Array[i-1][j-1]+Array[i-1][j]+Array[i-1][j+1]+Array[i][j-1]+Array[i][j+1]+Array[i+1][j-1]+Array[i+1][j]+Array[i+1][j+1];
                if (count == 3)
                    NewArray[i][j] = 1;
                if (count != 3 && count != 2)
                    NewArray[i][j] = 0;
                if (count == 2)
                    NewArray[i][j] = Array[i][j];

            }
        for (int j = 0; j < 30; j++) {
            NewArray[0][j] = Array[0][j];
            NewArray[29][j] = Array[29][j];
        }
        for (int i = 0; i < 30; i++) {
            NewArray[i][0] = Array[i][0];
            NewArray[i][29] = Array[i][29];
        }


        for (int i = 0; i < 30; i++) {
            for (int j = 0; j < 30; j++)
                cout << Array[i][j] << " ";
            cout << endl;

        }
    cout<<"New Array is"<<endl;
    for(int i=0;i<30;i++){
        for(int j=0;j<30;j++)
            cout<<NewArray[i][j]<<" ";
            cout<<endl;
        }


    return 0;
}

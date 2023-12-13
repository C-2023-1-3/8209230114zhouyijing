#include<iostream>
using namespace std;
bool is_prime(int num)
{
 for (int i = 2; i < num; i++)
  {
   int c = num % i;
   if (c == 0)
    {
     return 0;
     break;
    }
  }    
 return 1;
}
int main()
{
    int a = 0;
    int arr[200];
    for(int num=2;a<200;num++)
    {
        if(is_prime(num)==1)
        {
            arr[a] = num;
            a++;
        }
    }
    for (int j = 0; j <= 20; j++)
    {
        for (int k = 0; k<10  ; k++)
        {
            cout <<arr[j*10+k]<<" ";
        }
        cout << endl;
    }
    return 0;
}
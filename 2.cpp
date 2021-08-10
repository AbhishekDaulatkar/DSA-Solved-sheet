#include <iostream>
using namespace std;

int main()
{
  int arr[] = { 1000, 11, 445,
                    1, 330, 3000 };
 int n = sizeof(arr) / sizeof(arr[0]);

for (size_t i = 0; i<=n-1; i++) {
cout<<"OriginalArray is:"<< arr[i] <<endl;
}
int max;
int min;
for (size_t i = 0; i <=n-1; i++) {

      if(arr[i]>max){
        max = arr[i];  }
      if(arr[i]<min){
        min=arr[i];
       }

  }
  cout<<"max:-"<<max;
  cout<<"min:-"<<min;


return 0;
}

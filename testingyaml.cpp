#include <iostream>
#include <tuple>
using namespace std ;

tuple<int, int, int> sort() {
   int arr[5] = {7 , 6 , 1 , 3 , 35} ;
    for (int i = 0; i < 5; i++)
    {
      for (int j = 1 ; j < 5; j++)
      {
         if (arr[j]<=arr[i]){
          int x;
          x = arr[i];
          arr[i] = arr[j];
          arr[j] = x;
         }
      }
      
    }
    return {arr[0], arr[2] , arr[4]} ;
}

int main() {

sort();

}
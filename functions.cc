#include <iostream>
#include <string>
using namespace std;

 int q1_palindrome(const char *str, int len){
   //Checks if first is same as last letter
   if(str[0] == str[len-1]){
     //Move up char array 1 and decrement the length 2
     return q1_palindrome(str+1, len-2);
   }
   //Base case
   if(len < 1){
     return 1;
   }
   else{
     return 0;
   }
 }

 void q2_reverse(char *str, int len){
   //Base Case
   if(len <= 1){
   }
   else{
     //Swap first and last int then move inward
     char temp = str[len-1];
     str[len-1] = str[0];
     str[0] = temp;
     //Recursive call
     q2_reverse(str+1,len-2);
   }
 }

 void q3_print_reversed_letters(const char *str){
   //Run through str array
   if(*str){
     //Recursive call moves array over 1
     q3_print_reversed_letters(str+1);
     //Check if letter is lowercase
     if(*str >= 'a' && *str <= 'z'){
       //Print each lowercase letter
       cout << str[0];
     }
   }
 }

 long int q4_power(int b, int e){
   //Base case
   if(e < 1){
     return 1;
   }
   if(e >= 1){
     //recursive call, power is decremented
     return b * q4_power(b,e-1);
   }
   else{
     return 1;
   }
 }

unsigned long int q5_prefix_sum(int n){
  if(n >= 1){
    //recursive call
    return n + q5_prefix_sum(n-1);
  }
  //Base case
  if (n < 1) {
    return 0;
  }
}

int q6_sum_digits(int num){
  if (num >= 1){
    //return the first digit + recursive call with number/10
    return num%10 + q6_sum_digits(num/10);
  }
  //Base case
  if(num < 1){
    return 0;
  }
}

int q7_bin_search(const int *A, int len, int k){
  //Middle element
  int mid;
  mid = len/2;
  //Checks if number is middle element
  if(k == A[mid]){
    return 1;
  }
  //Checks if array has acceptable size
  if(mid < 1){
    return 0;
  }
  if(k > A[mid]){
    len = len - mid;
    //Recursive call, A moved mid places
    return q7_bin_search((A+mid),len,k);
  }
  if(k < A[mid]){
    len = mid-1;
    return q7_bin_search(A,mid,k);
  }
  else{
    return 0;
  }
}

int q8_sorted(const int *array, int n){
  //Checks if array is more than 2 elements
  if(n < 2){
    return 1;
  }
  //checks last and second to last element
  if(array[n-1] <= array[n-2]){
    //recursive call, decrementing the length
    return q8_sorted(array,n-1);
  }
  //If letter infront is smaller, return 0
  else if (array[n-1] > array[n-2]){
    return 0;
  }
  else{
    return 0;
  }
}

//Print Dash function to print amount of dashes on screen
void print_dash(int amount){
  for(int i = 0; i < amount; i++){
    std::cout << "-";
  }
  std::cout << endl;
}

void q9_draw_triangle(int a, int b){
  //How many lines
  int lines;
  //Base case
  if(a > b){
  }
  else{
    //Amount of lines
    lines = (2*(b-a+1));
    //checks that a <= b and lines >= 2
    if(a <= b && lines >= 2){
      //Prints a amount of dashes
      print_dash(a);
      //Recursive call to continue function
      q9_draw_triangle(a+1,b);
      //Print the bottom half
      print_dash(a);
    }
    }
}

void q10_print_pattern(int len, int col){
}

//int main(){
  //char str[] = "roller";
  //std::cout << q1_palindrome(str,6) << endl;
  //q2_reverse(str,6);
  //std::cout << str << endl;
  //const char str[] = "csc-212 IS olleh";
  //q3_print_reversed_letters(str);
  //std::cout << q4_power(4,3);
  //std::cout << q5_prefix_sum(10) << endl;
  //std::cout << q6_sum_digits(55555) << endl;
  //const int A[5] = { 1, 2, 3, 4, 5 };
  //std::cout << q7_bin_search(A,5,2) << endl;
  //const int array[5] = { 5, 4, 1, 2, 1 };
  //std::cout << q8_sorted(array,5) << endl;
  //q9_draw_triangle(4,7);
  //print_dash(10);


//}

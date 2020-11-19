#include <iostream>
#include <vector>

int main() {

  int total_even = 0;
  int product_odd = 1;

  std::vector<int> nums = {2, 4, 3, 6, 1, 9};

  for (int i = 0; i < nums.size(); i++) {

    if (nums[i] % 2 == 0){
        total_even = total_even + nums[i];
    }
    else {
      product_odd = product_odd*nums[i];
    } 
  }


  std::cout << "Sum of even: " << total_even << "\n";
  std::cout << "Product of odd: " << product_odd;



}
#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text){
  std::string backwards;
  for (int i = text.length()-1; i>=0; i--){ 
    backwards.push_back(text[i]);
    //std::cout << backwards << "\n";
  }
  if (backwards == text) {
    return true;
  }
  else {
    return false;
  }
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}
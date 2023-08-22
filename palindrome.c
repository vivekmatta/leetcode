bool isPalindrome(int x) {

  if (x < 0) {
    return false;
  }

  int lengthOfInt = 0;
  int val = x;

  int calc = 0;

  int newX = 0;

  while (val > 0) {
    lengthOfInt++;
    val /= 10;
  } 

  //printf("Num digits: %d\n", lengthOfInt);

  for (int i = 0; i < lengthOfInt; i++) {
    calc = ((x / (int)pow(10, i)) % 10);

    newX += calc * (pow(10, lengthOfInt - i - 1));
    //printf("New X: %d\n", newX);
  }

  //printf("Original Number: %d\n", x);
  //printf("Palindrome Number: %d\n", newX);

  if (x != newX) {
    return false;
  }

  return true;
}

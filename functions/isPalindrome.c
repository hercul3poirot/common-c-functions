//This functions checks whether an input number is a palindrome.
int isPalindrome(char *digits) {
    int same = 1, checkValue, length;
    length = strlen(digits);
    if (length % 2 == 0){
        checkValue = length/2 - 1;
    } else {
        checkValue = (length-1)/2 - 1;
    }
    for (int i = 0; i <= checkValue; i++){
        if (digits[i] == digits[(length-1) - i]) {
            same = 1;
        } else {
            return 0;
        }
    }   
    if (same == 1){
        return 1;
    }
}

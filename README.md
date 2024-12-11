# Armstrong Number Checker

## Description

An Armstrong number (also known as a narcissistic number) is a number that is the sum of its own digits each raised to the power of the number of digits. This program checks whether a given number is an Armstrong number.

## What is an Armstrong Number?

An Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits. 

Examples:
- 153 is an Armstrong number because 1³ + 5³ + 3³ = 1 + 125 + 27 = 153
- 370 is an Armstrong number because 3³ + 7³ + 0³ = 27 + 343 + 0 = 370
- 371 is an Armstrong number because 3³ + 7³ + 1³ = 27 + 343 + 1 = 371

## Features

- Determines if a given number is an Armstrong number
- Works with positive integers
- Simple and efficient algorithm

## Prerequisites

- C++ Compiler (C++11 or later)
- Standard C++ Libraries

## Compilation

Compile the program using a C++ compiler:

```bash
g++ -std=c++11 armstrong_checker.cpp -o armstrong_checker
```

## Usage

1. Run the compiled executable
2. Enter a positive integer
3. The program will output:
   - "Yes" if the number is an Armstrong number
   - "No" if the number is not an Armstrong number

### Example

```
Input: 153
Output: Yes

Input: 154
Output: No
```

## Algorithm

1. Count the number of digits in the input number
2. Calculate the sum of each digit raised to the power of the total number of digits
3. Compare the sum with the original number
4. Determine if the number is an Armstrong number

## Limitations

- Works only with positive integers
- May have precision limitations for very large numbers
- Requires manual input of the number

## Potential Improvements

- Add support for negative numbers
- Handle input validation
- Extend to check multiple numbers
- Add more detailed output

## Contributing

Contributions, issues, and feature requests are welcome. Feel free to check [issues page](your-github-repo-link/issues).


## Author

Salman Hashemi

# CIS-165 Lab 4
## Average Program Plan
1. Create five variables with double with value corresponding to 28, 32, 37, 24, and 33.
2. Add the five variables and store the result in a new variable called sum.
3. Divided the new variable sum by 5 and store the result in a variable named average.
4. Display the sum and average with clear labels.

## Ocean_Level Program Plan
1. Create and name a constant for the annual ocean-level increases and set it to 1.5 millimeters.
2. Create separate constants for each year, 5, 7, 10.
3. Calculate the ocean-level increase for each year and create new variables to store each result.
4. Display all three results with clear labels and millimeter units.

## Testing
Program and test | Values used | Expected results | Actual results | Match or correction |
| Average — assigned values | 28, 32, 37, 24, 33 | Sum = 154; Average = 30.8 | Sum = 154; Average = 30.8 | Match |
| Average — changed values | 10, 15, 20, 25, 31 | Sum = 101; Average = 20.2 | Sum = 101; Average = 20.2 | Match |
| Ocean — assigned rate | 1.5 mm/year | 5 years = 7.5 mm; 7 years = 10.5 mm; 10 years = 15 mm | 5 years = 7.5 mm; 7 years = 10.5 mm; 10 years = 15 mm | Match |
| Ocean — changed rate | 2.3 mm/year | 5 years = 11.5 mm; 7 years = 16.1 mm; 10 years = 23 mm | 5 years = 11.5 mm; 7 years = 16.1 mm; 10 years = 23 mm | Match|

## Code Explanations
1. Why should the five values and the average use the double data type?
The five values and the average should use double data type because double is able to store decimal points and the average contains a decimal point, so it makes sense to use for maximum accuracy.
2. Trace the assigned values through sum and average.
So originally the we start off with 5 value, 28, 32, 37, 24, 33, which are turned into variables. These variables are then added together and the result is stored in a sum, which was 154. Then the result that was stored in sum is divided by 5 in order to give us a new result which is stored in average, which is 30.8
3. Why should the average calculation divide the completed sum rather than only the final value?
The average should include all five values, dividing by the final value would not include all five values. The program first has to add everything together, a.k.a. the sum, and use that result to divide by 5.
5. Explain how the ocean-level calculations use the annual rate and number of years.
The program multiplies the annual ocean-level rate by the number of years.
6. Why is the annual ocean-level rate a good candidate for a named constant?
The annual ocean-level rate is a good candidate for a named constant, because it is a value that will never change during the use of our program. It is a specific assigned value of 1.5, and by giving it a name it because easier to remember and understand what it is and what it does.
7. Why does the assignment require calculations to be stored before using cout?
Storing the calculations in variables makes it easier to read and understand to other people and by having to put the calculation first it makes it clear that it was done before the result was displayed, and verifies it wasn't just a displayed value.

## How to Compile and Run

To compile and run 'average.cpp', use:
  g++ -std=c++17 -Wall -Wextra average.cpp -o average
  ./average

To compile and run 'ocean_levels.cpp', use:
  g++ -std=c++17 -Wall -Wextra ocean_levels.cpp -o ocean_levels
  ./ocean_levels

## Final Verification
I restored the assigned values and completed final runs of both programs. The expected results matched the actual results.

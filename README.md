# Adult BMI Calculator

This program calculates the Body Mass Index (BMI) of adults aged 18 or older. It supports both metric and US customary units for input and provides an interpretation of the calculated BMI value based on standard BMI categories.

---

## Features

- **Unit Selection**: Choose between:
  1. Metric units (weight in kilograms, height in meters)
  2. US customary units (weight in pounds, height in inches)

- **Age Restriction**: Ensures the user is 18 years or older.

- **BMI Categories**:
  - **Underweight**: BMI < 18.5
  - **Normal weight**: 18.5 ≤ BMI ≤ 24.9
  - **Overweight**: 25 ≤ BMI ≤ 29.9
  - **Obese**: 30 ≤ BMI ≤ 34.9
  - **Extremely Obese**: BMI ≥ 35

---

## How to Use

1. **Compile the Program**:
   Use `make` to compile the program.

2. **Run the Program**:
   ```bash
   ./bmicalculator
   ```

3. **Input Data**:
   - Select the unit system (metric or US customary).
   - Enter your age (must be 18 or older).
   - Provide your weight and height as prompted.

4. **View Results**:
   - The program calculates your BMI and displays it along with the corresponding category.

---

## Example Input and Output

### Metric Units
```
+ BMI CALCULATOR +
To begin, please select your preference.
1. Metric units (Weight in kg, height in meters)
2. US customary units (Weight in lbs, height in inches)

Enter your choice: 1
Please enter your age: 25
Enter your weight in kilograms (kg): 70
Enter your height in meters (m): 1.75

Your BMI is: 22.86
Your BMI indicates you are normal weight.
```

### US Customary Units
```
+ BMI CALCULATOR +
To begin, please select your preference.
1. Metric units (Weight in kg, height in meters)
2. US customary units (Weight in lbs, height in inches)

Enter your choice: 2
Please enter your age: 30
Enter your weight in pounds (lb): 150
Enter your height in inches (in): 68

Your BMI is: 22.83
Your BMI indicates you are normal weight.
```

---

## Formula

### Metric Units:
```
BMI = weight (kg) / (height (m) ^ 2)
```

### US Customary Units:
```
BMI = (weight (lb) / (height (in) ^ 2)) * 703
```

---

## Requirements

- C Compiler (e.g., GCC)
- Math library (`-lm` flag during compilation)

---

## Source

BMI calculation formula and categories: [RTA Aesthetics](https://rtaesthetics.co.uk/how-to-calculate-bmi/)

---

## License

This project is open-source and free to use.

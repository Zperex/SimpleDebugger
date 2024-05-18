# Trace Tracker

Trace Tracker is a simple C project designed to track the values of variables during program execution. It provides functions to add, update, display, and remove variables from a trace array, making it easier to debug and monitor variable states throughout a program's lifecycle.

## Features

- **Add Variables:** Easily add variables to the trace array for monitoring.
- **Update Values:** Update variable values within the trace array as your program executes.
- **Display Values:** Conveniently display the current value of any tracked variable.
- **Remove Variables:** Remove variables from the trace array when they are no longer needed.

## Files

- **main.c:** Contains the main function demonstrating the usage of tracing functions.
- **debug.c:** Implements the tracing functions.
- **debug.h:** Header file defining the tracing functions.

## How to Use

1. **Clone the Repository:**
    ```bash
    git clone https://github.com/your-username/trace-tracker.git
    cd trace-tracker
    ```

2. **Compile the Program:**
    ```bash
    gcc main.c debug.c -o trace_tracker
    ```

3. **Run the Program:**
    ```bash
    ./trace_tracker
    ```

## Function Descriptions

- **`add_TT(char var)`:** Adds a new variable to the trace array with an initial value of 0.
- **`display_TT(char var)`:** Displays the current value of the specified variable from the trace array.
- **`update_TT(char var, int val)`:** Updates the value of the specified variable in the trace array.
- **`remove_TT(char var)`:** Removes the specified variable from the trace array.

## Contribution

Contributions are welcomed! If you have improvements or fixes, fork the repository, make your changes, and submit a pull request. Please ensure your code adheres to the existing style and include relevant tests.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

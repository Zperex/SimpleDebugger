
# Trace Tracker

## Overview

Trace Tracker is a simple C project designed to track the values of variables during program execution. It provides functions to add, update, display, and remove variables from a trace array, making it easier to debug and monitor variable states throughout a program's lifecycle.

## Features

**Add variables to the trace array**

**Update variable values in the trace array**

**Display the current value of any tracked variable**

**Remove variables from the trace array**

##Files

**main.c**: Contains the main function which demonstrates how to use the tracing functions.
**debug.c**: Contains the implementation of the tracing functions.
**debug.h**: Header file for the tracing functions.
How to Use

## Clone the repository:

bash
Copy code
git clone https://github.com/your-username/trace-tracker.git
cd trace-tracker
Compile the program:

bash
Copy code
gcc main.c debug.c -o trace_tracker
Run the program:

bash
Copy code
./trace_tracker
Example

Here's an example usage of the tracing functions as shown in main.c:

c
Copy code
#include <stdio.h>
#include <stdlib.h>
#include "debug.h"

int main() {
    int a, b;

    add_TT('a');
    add_TT('b');

    display_TT('a');
    display_TT('b');

    b = 0;
    update_TT('b', b);

    a = 1;
    update_TT('a', a);

    while (b < 10) {
        a = a + b;
        update_TT('a', a);

        b = b + 1;
        update_TT('b', b);

        display_TT('b');
    }

    remove_TT('a');
    display_TT('a');

    remove_TT('b');
    display_TT('b');

    return 0;
}
## Function Descriptions

**void add_TT(char var)**:Adds a new variable to the trace array with an initial value of 0.

**void display_TT(char var)**:Displays the current value of the specified variable from the trace array.;

**void update_TT(char var, int val)**:Updates the value of the specified variable in the trace array.

**void remove_TT(char var)**:Removes the specified variable from the trace array.

## Contribution

Contributions are welcome! Please fork the repository and submit a pull request with your changes. Ensure your code follows the existing style and include relevant tests.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.



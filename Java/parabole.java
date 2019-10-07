/*
Given the x-coordinate of a point on the parabole with specified coefficients, find the y-coordinate of that point.

Example

For a = 1, b = 2, c = 3, and x = -1, the output should be
parabole(a, b, c, x) = 2.

Explanation: y = ax2 + bx + c = 1 * (-1)2 + 2 * (-1) + 3 = 2.

Input/Output

[execution time limit] 3 seconds (java)

[input] integer a

Guaranteed constraints:
-10 ≤ a ≤ 10.

[input] integer b

Guaranteed constraints:
-10 ≤ b ≤ 10.

[input] integer c

Guaranteed constraints:
-10 ≤ c ≤ 10.

[input] integer x

The x-coordinate of the point on the parabole.

Guaranteed constraints:
-15 · 103 ≤ x ≤ 15 · 103.

[output] integer

The y-coordinate of the point on the parabole with the given x-coordinate.
*/




int parabole(int a, int b, int c, int x) {
    
    return ((a*x*x) + (b*x) + c);

}


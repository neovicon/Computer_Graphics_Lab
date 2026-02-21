<<<<<<< HEAD
📌 Line Clipping – Cohen–Sutherland Algorithm 

📖 Introduction
    Line clipping is used in computer graphics to determine which portion of a line segment lies inside a rectangular clipping window. The Cohen–Sutherland algorithm classifies endpoints using region codes and efficiently decides whether to accept, reject, or partially clip the line.

    This program implements Cohen–Sutherland line clipping using the BGI graphics library in C.

📌 Theory 

    The Cohen–Sutherland algorithm divides the 2D space into nine regions using a rectangular clipping window.
    Each point is assigned a 4-bit region code:

        Bit          Meaning
        1st---------> Left of window
        2nd---------> Right of window
        3rd---------> Above window
        4th---------> Below window
    Possible Cases
        1. Trivially Accepted
            Both endpoints have region code = 0000.

        2. Trivially Rejected
            Logical AND of both region codes ≠ 0000.

       3. Partially Visible
            When neither accepted nor rejected → line must be clipped.

The out-of-bound endpoints are replaced with their intersection point with the clipping boundary.

📌 Algorithm (Step-by-Step)
Step 1: Input
    - Clipping window (xmin, ymin, xmax, ymax)
    - Line endpoints (x1, y1) and (x2, y2)

Step 2: Find Slope of Line
    m = (y2 - y1) / (x2 - x1)

Step 3: Compute Region Codes
    For both start and end points:

    code[0] = 1 if x < xmin
    code[1] = 1 if x > xmax
    code[2] = 1 if y > ymax
    code[3] = 1 if y < ymin

Step 4: Check Visibility
    Case A: Trivial Acceptance
        If both codes = 0000 → line is fully inside.
    Case B: Trivial Rejection
        If (start_code AND end_code != 0) → line is completely outside.
    Case C: Partial Visibility
        Proceed to clip at boundaries:
            - Clip left/right → calculate new y
            - Clip top/bottom → calculate new x

Step 5: Compute Intersection Points
Depending on which bit is 1:
    Left boundary (x = xmin)
        y = y1 + m * (xmin - x1)
    Right boundary (x = xmax)
        y = y1 + m * (xmax - x1)
    Bottom boundary (y = ymin)
        x = x1 + (ymin - y1) / m
    Top boundary (y = ymax)
        x = x1 + (ymax - y1) / m
Update the endpoint and repeat until clipping is complete.

Step 6: Draw the Final Output
    Draw clipping window
    Draw original or clipped line
    Print visibility status

=======
📌 Line Clipping – Cohen–Sutherland Algorithm 

📖 Introduction
    Line clipping is used in computer graphics to determine which portion of a line segment lies inside a rectangular clipping window. The Cohen–Sutherland algorithm classifies endpoints using region codes and efficiently decides whether to accept, reject, or partially clip the line.

    This program implements Cohen–Sutherland line clipping using the BGI graphics library in C.

📌 Theory 

    The Cohen–Sutherland algorithm divides the 2D space into nine regions using a rectangular clipping window.
    Each point is assigned a 4-bit region code:

        Bit          Meaning
        1st---------> Left of window
        2nd---------> Right of window
        3rd---------> Above window
        4th---------> Below window
    Possible Cases
        1. Trivially Accepted
            Both endpoints have region code = 0000.

        2. Trivially Rejected
            Logical AND of both region codes ≠ 0000.

       3. Partially Visible
            When neither accepted nor rejected → line must be clipped.

The out-of-bound endpoints are replaced with their intersection point with the clipping boundary.

📌 Algorithm (Step-by-Step)
Step 1: Input
    - Clipping window (xmin, ymin, xmax, ymax)
    - Line endpoints (x1, y1) and (x2, y2)

Step 2: Find Slope of Line
    m = (y2 - y1) / (x2 - x1)

Step 3: Compute Region Codes
    For both start and end points:

    code[0] = 1 if x < xmin
    code[1] = 1 if x > xmax
    code[2] = 1 if y > ymax
    code[3] = 1 if y < ymin

Step 4: Check Visibility
    Case A: Trivial Acceptance
        If both codes = 0000 → line is fully inside.
    Case B: Trivial Rejection
        If (start_code AND end_code != 0) → line is completely outside.
    Case C: Partial Visibility
        Proceed to clip at boundaries:
            - Clip left/right → calculate new y
            - Clip top/bottom → calculate new x

Step 5: Compute Intersection Points
Depending on which bit is 1:
    Left boundary (x = xmin)
        y = y1 + m * (xmin - x1)
    Right boundary (x = xmax)
        y = y1 + m * (xmax - x1)
    Bottom boundary (y = ymin)
        x = x1 + (ymin - y1) / m
    Top boundary (y = ymax)
        x = x1 + (ymax - y1) / m
Update the endpoint and repeat until clipping is complete.

Step 6: Draw the Final Output
    Draw clipping window
    Draw original or clipped line
    Print visibility status

>>>>>>> 1c9084fd4f6e4052c8208e8628346dca034b0e05

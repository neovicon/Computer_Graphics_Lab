<<<<<<< HEAD
Title:
    Implementation of Bresenham’s Line Drawing Algorithm Using C and BGI Graphics

Objectives
- To implement Bresenham’s line drawing algorithm for plotting a line between two points using integer arithmetic.
- To compare efficiency with other line algorithms such as the DDA method.
- To understand how decision parameters are used to determine pixel selection.
- To visualize line drawing step-by-step using the BGI graphics library.
- To apply core computer graphics concepts such as rasterization and pixel plotting.

Theory
Bresenham’s Line Algorithm is a highly efficient algorithm used to draw a straight line between two points on a pixel-based display. It uses only integer operations, making it significantly faster than floating-point algorithms like DDA.

    Key Concepts
    1. Rasterization
            Lines are drawn by selecting the best pixel approximation along the ideal line path.

    2. Decision Parameter (p)
        Bresenham’s algorithm determines which pixel to plot next by maintaining a decision variable:
            p=2dy−dx

        At each step:
        - If 
            p<0:
            - Pixel moves horizontally (x increases).
            - Updated as:
                p=p+2dy
                
        - If
            p≥0;
            - Pixel moves diagonally (x and y increase).
            - Updated as:
                p=p+2dy−2dx

    3. Integer Arithmetic
        The algorithm avoids multiplication, division, and floating-point operations, making it ideal for hardware and low-level systems.

Algorithm: Bresenham’s Line Drawing
    (Assuming slope m < 1 and x2 > x1)
        1. Input the two endpoints (x1,y1),(x2,y2).
        2. Compute:
            dx = x2 - x1
            dy = y2 - y1
        3. Initialize:
            x = x1, y = y1
        4. Calculate the decision parameter:
            p=2dy−dx
        5. Plot the initial pixel at (x,y).
        6. Repeat while x <= x2:
            - If p < 0:
                - Increment x
                - Update: p = p + 2*dy
            - Else:
                - Increment x and y
                - Update: p = p + 2*dy - 2*dx
            -Plot pixel at the new position
        7. Stop when the endpoint is reached.

Discussion
This program correctly applies Bresenham’s algorithm to draw a line using efficient integer operations. The decision parameter effectively guides whether the next pixel should be plotted horizontally or diagonally, ensuring minimal error between the ideal line and the rasterized output. The use of BGI functions like putpixel() allows real-time visualization, making the mechanism of pixel selection clear. While modern systems use advanced rasterization methods, Bresenham’s algorithm remains fundamental in computer graphics education.

Conclusion
=======
Title:
    Implementation of Bresenham’s Line Drawing Algorithm Using C and BGI Graphics

Objectives
- To implement Bresenham’s line drawing algorithm for plotting a line between two points using integer arithmetic.
- To compare efficiency with other line algorithms such as the DDA method.
- To understand how decision parameters are used to determine pixel selection.
- To visualize line drawing step-by-step using the BGI graphics library.
- To apply core computer graphics concepts such as rasterization and pixel plotting.

Theory
Bresenham’s Line Algorithm is a highly efficient algorithm used to draw a straight line between two points on a pixel-based display. It uses only integer operations, making it significantly faster than floating-point algorithms like DDA.

    Key Concepts
    1. Rasterization
            Lines are drawn by selecting the best pixel approximation along the ideal line path.

    2. Decision Parameter (p)
        Bresenham’s algorithm determines which pixel to plot next by maintaining a decision variable:
            p=2dy−dx

        At each step:
        - If 
            p<0:
            - Pixel moves horizontally (x increases).
            - Updated as:
                p=p+2dy
                
        - If
            p≥0;
            - Pixel moves diagonally (x and y increase).
            - Updated as:
                p=p+2dy−2dx

    3. Integer Arithmetic
        The algorithm avoids multiplication, division, and floating-point operations, making it ideal for hardware and low-level systems.

Algorithm: Bresenham’s Line Drawing
    (Assuming slope m < 1 and x2 > x1)
        1. Input the two endpoints (x1,y1),(x2,y2).
        2. Compute:
            dx = x2 - x1
            dy = y2 - y1
        3. Initialize:
            x = x1, y = y1
        4. Calculate the decision parameter:
            p=2dy−dx
        5. Plot the initial pixel at (x,y).
        6. Repeat while x <= x2:
            - If p < 0:
                - Increment x
                - Update: p = p + 2*dy
            - Else:
                - Increment x and y
                - Update: p = p + 2*dy - 2*dx
            -Plot pixel at the new position
        7. Stop when the endpoint is reached.

Discussion
This program correctly applies Bresenham’s algorithm to draw a line using efficient integer operations. The decision parameter effectively guides whether the next pixel should be plotted horizontally or diagonally, ensuring minimal error between the ideal line and the rasterized output. The use of BGI functions like putpixel() allows real-time visualization, making the mechanism of pixel selection clear. While modern systems use advanced rasterization methods, Bresenham’s algorithm remains fundamental in computer graphics education.

Conclusion
>>>>>>> 1c9084fd4f6e4052c8208e8628346dca034b0e05
The implementation successfully demonstrates the working of Bresenham’s line drawing algorithm. The algorithm’s reliance on integer arithmetic ensures fast and accurate line rendering, making it a superior alternative to floating-point methods like DDA for many applications. This experiment provides essential insights into raster graphics, decision-based plotting, and foundational graphics algorithms.
<<<<<<< HEAD
Title:
    Implementation of the Midpoint Circle Drawing Algorithm Using C and BGI Graphics

Objectives
    - To draw a circle using the Midpoint Circle Drawing Algorithm (also known as Bresenham’s circle algorithm).

    - To understand how symmetry in a circle is utilized to reduce computation.

    - To visualize step-by-step plotting of circle pixels using the BGI graphics library.

    - To explore efficient rasterization of curves using integer arithmetic.

    - To apply geometric properties for generating eight-way symmetric pixel points.

Theory
    The Midpoint Circle Algorithm is an efficient, integer-based algorithm used to draw a circle in computer graphics. It uses the mathematical property of a circle and symmetry to minimize computation and avoid floating-point operations.

    Circle Equation

        A circle centered at (xc,yc) with radius 𝑅  satisfies: 
            x^2 + y^2 = 𝑅^2
Key Concepts
    1. Decision Parameter (p)
        Instead of checking each point, the algorithm maintains a decision variable:
            p=1−𝑅
            
        This variable determines whether the next pixel moves:
            - Horizontally (x increases)
            - Diagonally (x increases and y decreases)
    2. Pixel Updates
        For each iteration:
            - If 𝑝<0;
                - Choose the East pixel
                - Update:
                    p=p+2x+3

            - If 𝑝≥0:
                - Choose the South-East pixel
                - Update:
                    p=p+2(x−y)+5
                - Decrease y

    3. Eight-Way Symmetry

For each calculated point (x,y), the algorithm reflects it across all octants:
    (x,y), (y,x), (y,−x), (x,−y), (−x,−y), (−y,−x), (−y,x), (−x,y)
This drastically reduces computation.


Algorithm: Midpoint Circle Algorithm

    1.Input center (xc,yc) and radius​ 𝑅
    2. Initialize:
        x = 0
        y = R
        p = 1 - R
    3. Plot initial symmetric points using all 8 octants.
    4. Repeat while x < y:
        - If p < 0:
            -Increment x
            - Update p = p + 2*x + 3
        - Else:
            - Increment x
            - Decrement y
            - Update p = p + 2*(x - y) + 5
        - Plot all 8 symmetric points
        - Apply delay for visualization
    5. Continue until the full circle is drawn.
    6. Close the graphics mode.

Discussion
This implementation effectively demonstrates how the Midpoint Circle Algorithm avoids floating-point operations by relying entirely on integer arithmetic. The use of eight-way symmetry significantly reduces computation, making the algorithm fast and efficient. The symmetry() function correctly plots the corresponding symmetric points, while delays allow visual observation of how the circle is drawn gradually.


Conclusion
The experiment successfully implements the Midpoint Circle Drawing Algorithm using C and BGI graphics. The program draws a smooth circle by calculating only one octant and reflecting the points to the other seven. This approach demonstrates efficient graphical computations with minimal processing.
=======
Title:
    Implementation of the Midpoint Circle Drawing Algorithm Using C and BGI Graphics

Objectives
    - To draw a circle using the Midpoint Circle Drawing Algorithm (also known as Bresenham’s circle algorithm).

    - To understand how symmetry in a circle is utilized to reduce computation.

    - To visualize step-by-step plotting of circle pixels using the BGI graphics library.

    - To explore efficient rasterization of curves using integer arithmetic.

    - To apply geometric properties for generating eight-way symmetric pixel points.

Theory
    The Midpoint Circle Algorithm is an efficient, integer-based algorithm used to draw a circle in computer graphics. It uses the mathematical property of a circle and symmetry to minimize computation and avoid floating-point operations.

    Circle Equation

        A circle centered at (xc,yc) with radius 𝑅  satisfies: 
            x^2 + y^2 = 𝑅^2
Key Concepts
    1. Decision Parameter (p)
        Instead of checking each point, the algorithm maintains a decision variable:
            p=1−𝑅
            
        This variable determines whether the next pixel moves:
            - Horizontally (x increases)
            - Diagonally (x increases and y decreases)
    2. Pixel Updates
        For each iteration:
            - If 𝑝<0;
                - Choose the East pixel
                - Update:
                    p=p+2x+3

            - If 𝑝≥0:
                - Choose the South-East pixel
                - Update:
                    p=p+2(x−y)+5
                - Decrease y

    3. Eight-Way Symmetry

For each calculated point (x,y), the algorithm reflects it across all octants:
    (x,y), (y,x), (y,−x), (x,−y), (−x,−y), (−y,−x), (−y,x), (−x,y)
This drastically reduces computation.


Algorithm: Midpoint Circle Algorithm

    1.Input center (xc,yc) and radius​ 𝑅
    2. Initialize:
        x = 0
        y = R
        p = 1 - R
    3. Plot initial symmetric points using all 8 octants.
    4. Repeat while x < y:
        - If p < 0:
            -Increment x
            - Update p = p + 2*x + 3
        - Else:
            - Increment x
            - Decrement y
            - Update p = p + 2*(x - y) + 5
        - Plot all 8 symmetric points
        - Apply delay for visualization
    5. Continue until the full circle is drawn.
    6. Close the graphics mode.

Discussion
This implementation effectively demonstrates how the Midpoint Circle Algorithm avoids floating-point operations by relying entirely on integer arithmetic. The use of eight-way symmetry significantly reduces computation, making the algorithm fast and efficient. The symmetry() function correctly plots the corresponding symmetric points, while delays allow visual observation of how the circle is drawn gradually.


Conclusion
The experiment successfully implements the Midpoint Circle Drawing Algorithm using C and BGI graphics. The program draws a smooth circle by calculating only one octant and reflecting the points to the other seven. This approach demonstrates efficient graphical computations with minimal processing.
>>>>>>> 1c9084fd4f6e4052c8208e8628346dca034b0e05
The algorithm forms the basis for advanced shape-drawing techniques used in computer graphics and continues to be an essential part of foundational graphics learning.
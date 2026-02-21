<<<<<<< HEAD
Title:
    Basic Graphics Programming in C Using the BGI (Borland Graphics Interface)

Objectives
- To understand how to initialize and close graphics mode using the BGI library.
- To draw basic graphic primitives such as pixels, lines, rectangles, and circles.
- To implement text display using outtext() and outtextxy().
- To learn how different colors and coordinates affect graphical output in C.
- To gain introductory knowledge of computer graphics operations in the Turbo C++ environment.

Theory
The Borland Graphics Interface (BGI) is an early graphics library used in Turbo C/C++. It enables developers to draw shapes, text, and images using simple functions. Even though modern compilers no longer support BGI directly, it remains an essential teaching tool for understanding fundamental graphics concepts.

    Key Concepts Used
        1. Graphics Initialization
            initgraph() sets up the graphics system by detecting the graphics driver and mode:

                int gd = DETECT, gm;
                initgraph(&gd, &gm, "C:\\TC\\BGI");


            - DETECT allows the system to auto-detect the graphics driver.
            - The path "C:\\TC\\BGI" contains required BGI driver files.

        2. Drawing Pixels
            putpixel(x, y, color) draws a single pixel at the specified coordinates.
            Example:

                putpixel(100, 200, 4); // red pixel

        3. Drawing Lines
            line(x1, y1, x2, y2) draws a straight line between two points.

                setcolor(BLUE);
                line(50, 50, 200, 200);

        4. Drawing Rectangles
            rectangle(x1, y1, x2, y2) draws a rectangle using two diagonal points.

                rectangle(50, 100, 200, 200);

        5. Drawing Circles
            circle(x, y, radius) draws a circle centered at (x, y).

                circle(300, 350, 3);

        6. Displaying Text

            outtext("text") prints text at the current pointer position.

                outtextxy(x, y, "text") prints text at a specified position.
            Example:

                outtextxy(200, 200, "Sarun Pariyar");

Discussion

The provided programs demonstrate how BGI enables low-level graphics programming using basic geometric shapes. By experimenting with coordinates and colors, students develop spatial understanding of the computer screen’s Cartesian layout. The use of functions like putpixel(), line(), and circle() highlights how more complex images are built from simple primitives. This foundational knowledge is essential before exploring advanced graphics such as OpenGL or DirectX.

Conclusion

=======
Title:
    Basic Graphics Programming in C Using the BGI (Borland Graphics Interface)

Objectives
- To understand how to initialize and close graphics mode using the BGI library.
- To draw basic graphic primitives such as pixels, lines, rectangles, and circles.
- To implement text display using outtext() and outtextxy().
- To learn how different colors and coordinates affect graphical output in C.
- To gain introductory knowledge of computer graphics operations in the Turbo C++ environment.

Theory
The Borland Graphics Interface (BGI) is an early graphics library used in Turbo C/C++. It enables developers to draw shapes, text, and images using simple functions. Even though modern compilers no longer support BGI directly, it remains an essential teaching tool for understanding fundamental graphics concepts.

    Key Concepts Used
        1. Graphics Initialization
            initgraph() sets up the graphics system by detecting the graphics driver and mode:

                int gd = DETECT, gm;
                initgraph(&gd, &gm, "C:\\TC\\BGI");


            - DETECT allows the system to auto-detect the graphics driver.
            - The path "C:\\TC\\BGI" contains required BGI driver files.

        2. Drawing Pixels
            putpixel(x, y, color) draws a single pixel at the specified coordinates.
            Example:

                putpixel(100, 200, 4); // red pixel

        3. Drawing Lines
            line(x1, y1, x2, y2) draws a straight line between two points.

                setcolor(BLUE);
                line(50, 50, 200, 200);

        4. Drawing Rectangles
            rectangle(x1, y1, x2, y2) draws a rectangle using two diagonal points.

                rectangle(50, 100, 200, 200);

        5. Drawing Circles
            circle(x, y, radius) draws a circle centered at (x, y).

                circle(300, 350, 3);

        6. Displaying Text

            outtext("text") prints text at the current pointer position.

                outtextxy(x, y, "text") prints text at a specified position.
            Example:

                outtextxy(200, 200, "Sarun Pariyar");

Discussion

The provided programs demonstrate how BGI enables low-level graphics programming using basic geometric shapes. By experimenting with coordinates and colors, students develop spatial understanding of the computer screen’s Cartesian layout. The use of functions like putpixel(), line(), and circle() highlights how more complex images are built from simple primitives. This foundational knowledge is essential before exploring advanced graphics such as OpenGL or DirectX.

Conclusion

>>>>>>> 1c9084fd4f6e4052c8208e8628346dca034b0e05
These programs successfully illustrate the fundamentals of the Borland Graphics Interface. Through initialization, shape drawing, and text rendering, they provide a practical introduction to computer graphics in C. Although BGI is outdated in modern development, it remains a valuable educational tool for understanding basic rendering concepts that apply to all graphical systems.
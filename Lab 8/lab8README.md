<<<<<<< HEAD
Title
    Implementation of Flood Fill and Boundary Fill Algorithms Using C Graphics (BGI Library)

Objectives

    - To study pixel-based region filling techniques used in raster graphics systems.
    - To implement:
        ~ 4-way Flood Fill
        ~ 8-way Flood Fill
        ~ 4-way Boundary Fill
        ~ 8-way Boundary Fill

    - To understand the behavior of recursive filling inside closed shapes.
    - To observe how BGI graphics functions (putpixel(), getpixel(), rectangle(), circle(), etc.) work.
    - To compare flood fill and boundary fill algorithms based on region type and boundary constraints.

Theory
1. Flood Fill Algorithm

    Flood Fill is a region-filling technique in computer graphics used to replace a region of connected pixels having the same background color (old color) with a fill color.
    It is mainly used when:
        - The region has uniform color, and
        - There is no fixed boundary color.

    Flood Fill checks each pixel before filling:

        - If the current pixel matches the old color → fill it
        - Then recursively move to neighbors

Flood Fill is of two types:

    - 4-Way Flood Fill → Checks 4 neighbors: left, right, up, down
    - 8-Way Flood Fill → Checks 8 neighbors: includes diagonals

This algorithm is similar to the “paint bucket” tool found in image editing software.

2. Boundary Fill Algorithm

    Boundary Fill fills an area using a boundary color.
    Instead of checking old color, it checks for a stopping condition:
        - If pixel is not boundary color and not fill color, fill and continue.

    Used when:
        - The shape has a distinct boundary, often drawn using a specific color.
        - The interior may have multiple colors but is enclosed.

Boundary Fill also has:
    - 4-Way Filling: Moves in top, bottom, left, and right
    - 8-Way Filling: Includes diagonal directions, leading to faster & smoother filling

Boundary Fill is commonly used in outline-based image filling.

Algorithms
    A. 4-Way Flood Fill Algorithm (Step-by-Step)

        Step 1: Read starting pixel coordinates (x, y).
        Step 2: Get the old color using getpixel(x, y).
        Step 3: Compare:
            If current pixel color equals old color:
                Fill the pixel with new color.
        Step 4: Make recursive calls to 4 directions:
            - (x + 1, y) → right
            - (x - 1, y) → left
            - (x, y + 1) → down
            - (x, y - 1) → up
        Step 5: Stop when all connected old-color pixels are filled.

    B. 8-Way Flood Fill Algorithm (Step-by-Step)

        Step 1: Begin at seed pixel (x, y).
        Step 2: Check if color matches old color.
        Step 3: Replace pixel with fill color.
        Step 4: Perform recursive calls in 8 directions:
            -Left, Right
            -Up, Down
            -Top-left, Top-right
            -Bottom-left, Bottom-right
        Step 5: Continue until no matching old-color pixels remain.

    C. 4-Way Boundary Fill Algorithm (Step-by-Step)

        Step 1: Read (x, y), boundary color, and fill color.
        Step 2: Use getpixel() to check the pixel color.
        Step 3: If pixel is not:
            Boundary color
            Fill color
        Then fill it.
        Step 4: Recursively call boundary_fill() for:
                -(x + 1, y)
                -(x - 1, y)
                -(x, y + 1)
                -(x, y - 1)
        Step 5: Stop when boundary is reached.

    D. 8-Way Boundary Fill Algorithm (Step-by-Step)

        Step 1: Accept seed point, fill color, and boundary color.
        Step 2: Check if pixel at (x, y) is neither boundary nor fill color.
        Step 3: Fill the pixel using putpixel().
        Step 4: Recursively fill all 8 directions:
            - Up, Down, Left, Right
            - Four diagonal neighbors
        Step 5: Continue until bounded region is completely filled.

Discussion

    - Flood Fill relies entirely on old/background color.
        - It works best when the region is uniformly colored.
        - If the shape has multiple shades inside, flood fill may fail or leak.

    - Boundary Fill uses a boundary color, making it more reliable for shapes drawn with a fixed outline.
    - 8-way versions fill faster and cover diagonal gaps better than 4-way versions.
    - Heavy recursion can lead to stack overflow for large regions, which is a known limitation of recursive filling methods.
    
Conclusion

The implementation of Flood Fill and Boundary Fill algorithms successfully demonstrates the fundamental concepts of region filling in raster graphics.
Both 4-way and 8-way approaches highlight how pixel connectivity affects the filling behavior.
These algorithms form the foundation for modern paint programs, CAD tools, and image-processing systems.
=======
Title
    Implementation of Flood Fill and Boundary Fill Algorithms Using C Graphics (BGI Library)

Objectives

    - To study pixel-based region filling techniques used in raster graphics systems.
    - To implement:
        ~ 4-way Flood Fill
        ~ 8-way Flood Fill
        ~ 4-way Boundary Fill
        ~ 8-way Boundary Fill

    - To understand the behavior of recursive filling inside closed shapes.
    - To observe how BGI graphics functions (putpixel(), getpixel(), rectangle(), circle(), etc.) work.
    - To compare flood fill and boundary fill algorithms based on region type and boundary constraints.

Theory
1. Flood Fill Algorithm

    Flood Fill is a region-filling technique in computer graphics used to replace a region of connected pixels having the same background color (old color) with a fill color.
    It is mainly used when:
        - The region has uniform color, and
        - There is no fixed boundary color.

    Flood Fill checks each pixel before filling:

        - If the current pixel matches the old color → fill it
        - Then recursively move to neighbors

Flood Fill is of two types:

    - 4-Way Flood Fill → Checks 4 neighbors: left, right, up, down
    - 8-Way Flood Fill → Checks 8 neighbors: includes diagonals

This algorithm is similar to the “paint bucket” tool found in image editing software.

2. Boundary Fill Algorithm

    Boundary Fill fills an area using a boundary color.
    Instead of checking old color, it checks for a stopping condition:
        - If pixel is not boundary color and not fill color, fill and continue.

    Used when:
        - The shape has a distinct boundary, often drawn using a specific color.
        - The interior may have multiple colors but is enclosed.

Boundary Fill also has:
    - 4-Way Filling: Moves in top, bottom, left, and right
    - 8-Way Filling: Includes diagonal directions, leading to faster & smoother filling

Boundary Fill is commonly used in outline-based image filling.

Algorithms
    A. 4-Way Flood Fill Algorithm (Step-by-Step)

        Step 1: Read starting pixel coordinates (x, y).
        Step 2: Get the old color using getpixel(x, y).
        Step 3: Compare:
            If current pixel color equals old color:
                Fill the pixel with new color.
        Step 4: Make recursive calls to 4 directions:
            - (x + 1, y) → right
            - (x - 1, y) → left
            - (x, y + 1) → down
            - (x, y - 1) → up
        Step 5: Stop when all connected old-color pixels are filled.

    B. 8-Way Flood Fill Algorithm (Step-by-Step)

        Step 1: Begin at seed pixel (x, y).
        Step 2: Check if color matches old color.
        Step 3: Replace pixel with fill color.
        Step 4: Perform recursive calls in 8 directions:
            -Left, Right
            -Up, Down
            -Top-left, Top-right
            -Bottom-left, Bottom-right
        Step 5: Continue until no matching old-color pixels remain.

    C. 4-Way Boundary Fill Algorithm (Step-by-Step)

        Step 1: Read (x, y), boundary color, and fill color.
        Step 2: Use getpixel() to check the pixel color.
        Step 3: If pixel is not:
            Boundary color
            Fill color
        Then fill it.
        Step 4: Recursively call boundary_fill() for:
                -(x + 1, y)
                -(x - 1, y)
                -(x, y + 1)
                -(x, y - 1)
        Step 5: Stop when boundary is reached.

    D. 8-Way Boundary Fill Algorithm (Step-by-Step)

        Step 1: Accept seed point, fill color, and boundary color.
        Step 2: Check if pixel at (x, y) is neither boundary nor fill color.
        Step 3: Fill the pixel using putpixel().
        Step 4: Recursively fill all 8 directions:
            - Up, Down, Left, Right
            - Four diagonal neighbors
        Step 5: Continue until bounded region is completely filled.

Discussion

    - Flood Fill relies entirely on old/background color.
        - It works best when the region is uniformly colored.
        - If the shape has multiple shades inside, flood fill may fail or leak.

    - Boundary Fill uses a boundary color, making it more reliable for shapes drawn with a fixed outline.
    - 8-way versions fill faster and cover diagonal gaps better than 4-way versions.
    - Heavy recursion can lead to stack overflow for large regions, which is a known limitation of recursive filling methods.
    
Conclusion

The implementation of Flood Fill and Boundary Fill algorithms successfully demonstrates the fundamental concepts of region filling in raster graphics.
Both 4-way and 8-way approaches highlight how pixel connectivity affects the filling behavior.
These algorithms form the foundation for modern paint programs, CAD tools, and image-processing systems.
>>>>>>> 1c9084fd4f6e4052c8208e8628346dca034b0e05
Through these programs, the concepts of recursion, neighboring pixel traversal, boundary detection, and region coloring become clearer for students learning computer graphics.
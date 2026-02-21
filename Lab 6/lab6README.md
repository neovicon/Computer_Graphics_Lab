<<<<<<< HEAD
Title:
    2D Geometric Transformations Using C (BGI Graphics)

Objectives
    - To implement basic 2D geometric transformations on lines and polygons.
    - To visualize how objects move, scale, rotate, and reflect on a 2D plane.
    - To understand the mathematical formulas behind each transformation.
    - To compare the original object with the transformed object visually.

Theory
    Geometric transformations are used to manipulate the position, size, and orientation of objects in computer graphics. The main transformations include:
1. Translation
    Moves an object from one location to another without changing its size or orientation.
    Formula:
        x′ = x + tx, y′ = y + ty
    (tx, ty) are the translation distances along x and y axes.

2. Scaling
    Changes the size of an object relative to the origin.
    Formula:
        x′ = x⋅sx , y′=y⋅sy
    - (sx, sy) are scaling factors along x and y.
    - If sx > 1 or sy > 1, object enlarges; if < 1, it shrinks.

3. Rotation
    Rotates an object about the origin (or a reference point) by an angle θ.
    Formula:
        x′=xcosθ−ysinθ, y′=xsinθ+ycosθ
    Positive angles represent   counterclockwise rotation.

4. Reflection
    Mirrors an object about a specific axis or line.

        About x-axis: y' = -y
        About y-axis: x' = -x
        About origin: x' = -x, y' = -y


Discussion

    - Translation shifts the object without distortion.
    - Scaling changes the object’s size, keeping its shape proportional.
    - Rotation changes the object’s orientation around the origin.
    - Reflection produces a mirror image of the object.
    - Visualizing both original and transformed objects helps understand the mathematical effect of each transformation.
    - These transformations are fundamental in graphics, animation, and CAD systems.

Conclusion

    - The lab successfully demonstrates 2D geometric transformations on lines and polygons.
    - All transformations use coordinate geometry formulas applied to each vertex.
=======
Title:
    2D Geometric Transformations Using C (BGI Graphics)

Objectives
    - To implement basic 2D geometric transformations on lines and polygons.
    - To visualize how objects move, scale, rotate, and reflect on a 2D plane.
    - To understand the mathematical formulas behind each transformation.
    - To compare the original object with the transformed object visually.

Theory
    Geometric transformations are used to manipulate the position, size, and orientation of objects in computer graphics. The main transformations include:
1. Translation
    Moves an object from one location to another without changing its size or orientation.
    Formula:
        x′ = x + tx, y′ = y + ty
    (tx, ty) are the translation distances along x and y axes.

2. Scaling
    Changes the size of an object relative to the origin.
    Formula:
        x′ = x⋅sx , y′=y⋅sy
    - (sx, sy) are scaling factors along x and y.
    - If sx > 1 or sy > 1, object enlarges; if < 1, it shrinks.

3. Rotation
    Rotates an object about the origin (or a reference point) by an angle θ.
    Formula:
        x′=xcosθ−ysinθ, y′=xsinθ+ycosθ
    Positive angles represent   counterclockwise rotation.

4. Reflection
    Mirrors an object about a specific axis or line.

        About x-axis: y' = -y
        About y-axis: x' = -x
        About origin: x' = -x, y' = -y


Discussion

    - Translation shifts the object without distortion.
    - Scaling changes the object’s size, keeping its shape proportional.
    - Rotation changes the object’s orientation around the origin.
    - Reflection produces a mirror image of the object.
    - Visualizing both original and transformed objects helps understand the mathematical effect of each transformation.
    - These transformations are fundamental in graphics, animation, and CAD systems.

Conclusion

    - The lab successfully demonstrates 2D geometric transformations on lines and polygons.
    - All transformations use coordinate geometry formulas applied to each vertex.
>>>>>>> 1c9084fd4f6e4052c8208e8628346dca034b0e05
    - Understanding these basic transformations is crucial for advanced graphics operations such as modeling, animation, and interactive graphics applications.